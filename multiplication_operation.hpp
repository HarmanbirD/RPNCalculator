//
// Created by Harmanbir Dhillon on 2018-10-10.
//

#pragma once

#include "abstract_operation.hpp"

class multiplication_operation : public abstract_operation
{
public:
    static const char MULTIPLICATION_CODE{'*'};
    multiplication_operation() : abstract_operation(MULTIPLICATION_CODE) {};
    int perform(int x, int y) {return x * y;};
    virtual inline ~multiplication_operation();
};