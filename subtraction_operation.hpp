//
// Created by Harmanbir Dhillon on 2018-10-10.
//

#pragma once

#include "abstract_operation.hpp"

class subtraction_operation : public abstract_operation
{
    public:
        //Code for operation
        static constexpr char SUBTRACTION_CODE{'-'};
        //Default constructor
        subtraction_operation() : abstract_operation(SUBTRACTION_CODE) {};
        //Performs the multiplication between two inputs and returns the result
        int perform(int x, int y) {return x - y;};
        //Destructor destroys this object
        virtual inline ~subtraction_operation() {};
};
