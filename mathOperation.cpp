/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jordan Snoap
 */

#include "std_lib_facilities.h"

// Does math operation and prints the answer based on user input.
void mathOperation(String operation, double operandOne, double operandTwo)
{
    double result;

    if (operation == "+")
    {
        result = operandOne + operandTwo;
    }
    else if (operation == "-")
    {
        result = operandOne - operandTwo;
    }
    else if (operation == "*")
    {
        result = operandOne * operandTwo;
    }
    else if (operation == "/")
    {
        result = operandOne / operandTwo;
    }

    cout << "The answer is " << result << "\n";
}

// Asks user for input and passes to the "mathOperation" function.
int main()
{
    String symbol;
    double numOne, numTwo;

    cout << "Enter an operation (+,-,*,/) followed by two operands, all separated by spaces (Ex: \"+ 100 3.14\"): ";
    // Stores each of the space separated values in proper variable
    cin >> symbol >> numOne >> numTwo;

    mathOperation(symbol, numOne, numTwo);
}