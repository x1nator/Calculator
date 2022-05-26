#pragma once
#ifndef CALC
#define CALC

#include <cstdlib>
#include <stdio.h>
#include <iostream>
class Calculator
{
private:
    float a_;
    float b_;
    float res;
    char oper;

public:
    Calculator();
    void plus();
    void minus();
    void mul();
    void div();
    void print_res();
};

#endif