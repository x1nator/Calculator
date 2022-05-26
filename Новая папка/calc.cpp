#include "calc.h"
#include "calc.h"
Calculator::Calculator()
{
    char str[30];
    char c;
    int i;
    char* a;
    char* b;
    char oper;
    int a_len;
    int b_len;
    bool b_error;

    printf("Enter expression: ");
    scanf_s("%s", str);

    i = 0;
    c = '1';
    a_len = 0;
    b_len = 0;
    b_error = false;

    while (c != '\0')
    {
        c = str[i];
        if (c == '-')
        {
            i++;
            a_len++;
            c = str[i];
        }
        while ((c != '+') && (c != '-') && (c != '*') && (c != '/') && (c != '\0'))
        {
            c = str[i];
            i++;
            a_len++;
        }
        if (c == '\0')
        {
            printf("Error!");
            b_error = true;
            break;
        }
        while (c != '\0')
        {
            c = str[i];
            i++;
            b_len++;
        }
    }

    if (b_error == false)
    {
        a_len--;
        b_len--;

        a = new char[a_len + 1];
        b = new char[b_len + 1];

        i = 0;
        for (int j = 0; j < a_len; j++)
        {
            a[j] = str[i];
            i++;
        }
        a[a_len] = '\0';
        oper = str[i];
        i++;
        for (int j = 0; j < b_len; j++)
        {
            b[j] = str[i];
            i++;
        }
        b[b_len] = '\0';

        a_ = atof(a);
        b_ = atof(b);

        if (oper == '+')
        {
            plus();
        }
        else if (oper == '-')
        {
            minus();
        }
        else if (oper == '*')
        {
            mul();
        }
        else
        {
            div();
        }
        if (b_ == 0 && oper == '/')
        {
            printf("Error!");
        }
        else
        {
            print_res();
        }
    }
}

void Calculator::plus()
{
    res = a_ + b_;
}

void Calculator::minus()
{
    res = a_ - b_;
}

void Calculator::mul()
{
    res = a_ * b_;
}

void Calculator::div()
{
    if (b_ != 0)
    {
        res = a_ / b_;
    }
}

void Calculator::print_res()
{
    printf("Result:%f", res);
}
