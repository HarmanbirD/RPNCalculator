//
// Created by Harmanbir Dhillon on 2018-10-10.
//

#pragma once

class operation
{
    public:
        virtual char get_code();
        virtual int perform(int x, int y);
        virtual inline ~operation() {};

};

