all: library

#######################################
############# Directories #############
#######################################
BIN        = bin
SRC        = src
SRCPARSER  = src/parser

INSTALL     = /usr/local

######################################
############ Compile Mode ############
######################################
# Set compile mode to -g or -O3.
# Debug mode: make mode=debug

mode ?= debug
MODE_LOG = ""
OPT_FLAG =
ifeq ($(mode), debug)
	OPT_FLAG = -g
	MODE_LOG = "Building in \033[1;31mdebug\033[0m mode"
else
	OPT_FLAG = -O3
	MODE_LOG = "Building in \033[0;32mrelease\033[0m mode ('make mode=debug' for debug mode)"
endif

GMAKE = make mode=$(mode)



#######################################
############### Library ###############
#######################################
NAME := sqlparser
PARSER_CPP = $(SRCPARSER)/bison_parser.cpp  $(SRCPARSER)/flex_lexer.cpp
PARSER_H   = $(SRCPARSER)/bison_parser.h    $(SRCPARSER)/flex_lexer.h
LIB_CFLAGS = -std=c++1z -Wall -Werror $(OPT_FLAG)

static ?= no
ifeq ($(static), yes)
	LIB_BUILD  = lib$(NAME).a
	LIBLINKER = $(AR)
	LIB_LFLAGS = rs
else
	LIB_BUILD  = lib$(NAME).so
	LIBLINKER = $(CXX)
	LIB_CFLAGS  +=  -fPIC
	LIB_LFLAGS = -shared -o
endif
LIB_CPP    = $(sort $(shell find $(SRC) -name '*.cpp' -not -path "$(SRCPARSER)/*") $(PARSER_CPP))
LIB_H      = $(shell find $(SRC) -name '*.h' -not -path "$(SRCPARSER)/*") $(PARSER_H)
LIB_ALL    = $(shell find $(SRC) -name '*.cpp' -not -path "$(SRCPARSER)/*") $(shell find $(SRC) -name '*.h' -not -path "$(SRCPARSER)/*")
LIB_OBJ    = $(LIB_CPP:%.cpp=%.o)

library: $(LIB_BUILD)

$(LIB_BUILD): $(LIB_OBJ)
	$(LIBLINKER) $(LIB_LFLAGS) $(LIB_BUILD) $(LIB_OBJ)

$(SRCPARSER)/flex_lexer.o: $(SRCPARSER)/flex_lexer.cpp $(SRCPARSER)/bison_parser.cpp
	$(CXX) $(LIB_CFLAGS) -c -o $@ $< -Wno-sign-compare -Wno-unneeded-internal-declaration -Wno-register

%.o: %.cpp $(PARSER_CPP) $(LIB_H)
	$(CXX) $(LIB_CFLAGS) -c -o $@ $<

$(SRCPARSER)/bison_parser.cpp: $(SRCPARSER)/bison_parser.y
	$(GMAKE) -C $(SRCPARSER)/ bison_parser.cpp

$(SRCPARSER)/flex_lexer.cpp: $(SRCPARSER)/flex_lexer.l
	$(GMAKE) -C $(SRCPARSER)/ flex_lexer.cpp

$(SRCPARSER)/bison_parser.h: $(SRCPARSER)/bison_parser.cpp
$(SRCPARSER)/flex_lexer.h: $(SRCPARSER)/flex_lexer.cpp

clean:
	rm -f lib$(NAME).a lib$(NAME).so
	rm -rf $(BIN)
	find $(SRC) -type f -name '*.o' -delete

cleanparser:
	$(GMAKE) -C $(SRCPARSER)/ clean

cleanall: clean cleanparser

install:
	cp $(LIB_BUILD) $(INSTALL)/lib/$(LIB_BUILD)
	rm -rf $(INSTALL)/include/hsql
	cp -r src $(INSTALL)/include/hsql
	find $(INSTALL)/include/hsql -not -name '*.h' -type f | xargs rm