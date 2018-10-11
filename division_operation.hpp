//
// Created by Harmanbir Dhillon on 2018-10-10.
//

#pragma once

#include "abstract_operation.hpp"

class division_operation : public abstract_operation
{
    public:
        static const char DIVISION_CODE{'/'};
        division_operation() : abstract_operation(DIVISION_CODE) {};
        int perform(int x, int y) {return x / y;};
        virtual inline ~division_operation() {};
};