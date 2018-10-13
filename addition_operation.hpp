//
// Created by Harmanbir Dhillon on 2018-10-10.
//

#pragma once

#include "abstract_operation.hpp"

class addition_operation : public abstract_operation
{
    public:
        //Code for operation
        static constexpr char ADDITION_CODE{'+'};
        //Default constructor
        addition_operation() : abstract_operation(ADDITION_CODE) {};
        //Performs addition on 2 inputs and returns the result
        int perform(int x, int y) {return x + y;};
        //Destructor destroys object
        virtual inline ~addition_operation() {};
};
