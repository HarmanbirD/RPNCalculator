//
// Created by Harmanbir Dhillon on 2018-10-10.
//
#include <stack>
#include <iostream>
#include <sstream>
#include "addition_operation.hpp"
#include "subtraction_operation.hpp"
#include "division_operation.hpp"
#include "multiplication_operation.hpp"

#pragma once


class rpn_calculator {
    private:
        int result;
        std::stack <int> stack_calculator;

        operation* operation_type(char operation)
        {
            switch(operation)
            {
                abstract_operation* point_operator;
                case addition_operation::ADDITION_CODE :
                    point_operator = new addition_operation;
                    return point_operator;
                case subtraction_operation::SUBTRACTION_CODE :
                    point_operator = new subtraction_operation;
                    return point_operator;
                case division_operation::DIVISION_CODE :
                    point_operator = new division_operation;
                    return point_operator;
                case multiplication_operation::MULTIPLICATION_CODE :
                    point_operator = new multiplication_operation;
                    return point_operator;
            }
        };

        void perform(operation* operated)
        {
            int right_operand = stack_calculator.top();
            stack_calculator.pop();
            int left_operand = stack_calculator.top();
            stack_calculator.pop();
            int value = operated->perform(left_operand, right_operand);
            stack_calculator.push(value);
        };

    public:
        int process_formula(std::string formula)
        {
            std::istringstream iss(formula);
            std::string operand;
            int sec;
            while (iss >> operand)
            {
                std::istringstream iss2(operand);
                if (iss2 >> sec)
                {
                    stack_calculator.push(sec);
                } else
                {
                    perform(operation_type(operand[0]));
                }
            }
            return stack_calculator.top();
        };

};


