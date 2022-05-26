#include <iostream>
#include <stdio.h>
#include "calc.h"

using namespace std;

int main()
{
    class Calculator* calc;
    calc = new Calculator();
    getchar();
    delete calc;
    return 0;
}