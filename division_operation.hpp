//
// Created by Harmanbir Dhillon on 2018-10-10.
//

#pragma once

#include "abstract_operation.hpp"

class division_operation : public abstract_operation
{
    public:
        //Code for operation
        static constexpr char DIVISION_CODE{'/'};
        //default constructor
        division_operation() : abstract_operation(DIVISION_CODE) {};
        //Performs division on inputs and returns the dividend
        int perform(int x, int y) {return x / y;};
        //Destructor destroys object
        virtual inline ~division_operation() {};
};
