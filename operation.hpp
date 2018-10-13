//
// Created by Harmanbir Dhillon on 2018-10-10.
//

#pragma once

class operation
{
    public:
        //Gets code from operator
        virtual char get_code() const {};
        //Performs operation between two inputs
        virtual int perform(int x, int y) {};
        //Destructor destroys this object
        virtual inline ~operation() {};
};

