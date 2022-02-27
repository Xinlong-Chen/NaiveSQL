#pragma once

#include <iostream>
#include <string>

class Timestamp
{
public:
    Timestamp();
    explicit Timestamp(int64_t microSeconds);
    static Timestamp now();
    std::string toString() const;
private:
    int64_t microSeconds_;
};