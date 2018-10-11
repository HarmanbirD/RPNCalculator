//
// Created by Harmanbir Dhillon on 2018-10-10.
//

#pragma once

#include "abstract_operation.hpp"

class addition_operation : public abstract_operation
{
public:
    static const char ADDITION_CODE{'+'};
    addition_operation() : abstract_operation(ADDITION_CODE) {};
    int perform(int x, int y) {return x + y;};
    virtual inline ~addition_operation() {};
};