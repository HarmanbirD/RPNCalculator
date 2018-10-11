//
// Created by Harmanbir Dhillon on 2018-10-10.
//

#pragma once

#include "operation.hpp"

class abstract_operation : public operation
{
    public:
        explicit abstract_operation(char operation) : operation_type{operation} {};
        char get_code() const {return operation_type;};
        virtual inline ~abstract_operation() = default;
    private:
        char operation_type;
};
