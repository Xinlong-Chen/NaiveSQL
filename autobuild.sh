#!/bin/bash

set -e

if [ ! -d `pwd`/build ]; then
    mkdir `pwd`/build
fi

rm -rf `pwd`/build/*

if [ ! -d `pwd`/lib ]; then
    mkdir `pwd`/lib
fi

rm -rf `pwd`/lib/*

make --directory=third_party/sql-parser

cp ./third_party/sql-parser/libsqlparser.so ./lib

cd `pwd`/build &&
    cmake .. &&
    make