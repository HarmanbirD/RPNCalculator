//
// Created by Harmanbir Dhillon on 2018-10-10.
//
#include <stack>
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "division_operation.hpp"
#include "multiplication_operation.hpp"

#pragma once



class rpn_calculator {
    private:
        int result;
        std::stack <int> stack_calculator;

    private:
        operation* operation_type(char operation)
        {
            switch(operation)
            {
                case addition_operation::ADDITION_CODE :
                    addition_operation* addition;
                    return addition;
                case subtraction_operation::SUBTRACTION_CODE :
                    addition_operation* subtraction;
                    return subtraction;
                case division_operation::DIVISION_CODE :
                    addition_operation* division;
                    return division;
                case multiplication_operation::MULTIPLICATION_CODE :
                    addition_operation* multiplication;
                    return multiplication;
            }
        };

        void perform(operation* operated)
        {

        };

};


