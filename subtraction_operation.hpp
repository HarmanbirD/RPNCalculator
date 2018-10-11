//
// Created by Harmanbir Dhillon on 2018-10-10.
//

#pragma once

#include "abstract_operation.hpp"

class subtraction_operation : public abstract_operation
{
public:
    static constexpr char SUBTRACTION_CODE{'-'};
    subtraction_operation() : abstract_operation(SUBTRACTION_CODE) {};
    int perform(int x, int y) {return x - y;};
    virtual inline ~subtraction_operation() {};
};
