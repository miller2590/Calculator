/**
 * @file mathEngine.h
 * Declaration of the MathEngine class.
 *
 * This file declares the MathEngine class, which provides functions for binary and
 * decimal conversions, as well as template-based calculations for various numeric types.
 *
 * @author Gage Miller
 * @date 11-19-2023
 */

#ifndef MATHENGINE_H
#define MATHENGINE_H

#include <string>
#include <iostream>

using namespace std;

class MathEngine {
    
    public:
        //Default constructor for MathEngine
        MathEngine() {};
        
        //Recursive function to convert a base 10 number to a binary string
        string decimalToBinary(int decimal) {
            //Base case
            if(decimal == 0) {
                return "";

            } else {
                //Recursive function call
                return decimalToBinary(decimal/2) + to_string(decimal % 2);
            };

        };

        //Recursive function to convert a binary string into a base 10 integer
        int binaryToDecimal(string binary, int index = 0) {
            //Base case: If the index reaches the end of the binary string, return 0.
            if (index == binary.length()) {
                return 0;
            }

            //Recursive call: Calculate the decimal value of the remaining binary bits
            int decimal = binaryToDecimal(binary, index + 1);

            /*Calculate the contribution of the current bit to the decimal value.
            *(binary[index] - '0') converts the '0' or '1' to the corresponding numeric value.
            *(1 << (binary.lenght() - index -1)) caclculates the power of 2 for the current bit position.
            *Multiply the bit value by 2^(position) and add it to the accumulated decimal value.
            */
            return decimal + (binary[index] - '0') * (1 << (binary.length() - index - 1));
        };

        /**
        *Takes user input for numeric values and operation type, returns them as tuple
        *@note I wanted this to be a menu function, but because I had a template function
        *in this file already, it seemed like the right place to put it, given that template
        *functions declaration and defenition need to be in the same place from what I understand.
        */
        
        template<typename Type>
        tuple<Type, Type, char> calculationOptions(string numType) {
                    Type num1;
                    Type num2;
                    char operation;
                
                    cout << "Enter a " << numType << " number: " << endl;
                    cin >> num1;
                    cout << "Enter a second " << numType << " number: " << endl;
                    cin >> num2;
                    cout << "Enter an operation (+, -, /, *): " << endl;
                    cin >> operation;

                    return make_tuple(num1, num2, operation);
        };

        //Performs basic arithmetic on two numeric values
        template<typename Type>
        Type floatOrInt(Type num1, Type num2, char operation) {
            if (operation == '+') {
                //Addition
                return num1 + num2;

            } else if (operation == '-') {
                //Subtraction
                return num1 - num2;

            } else if (operation == '/') {
                //Division with division by 0 catch
                if (num2 != 0) {
                    return num1 / num2;
                } else {
                    throw invalid_argument("Error: Division by Zero");

                }

            } else if (operation == '*') {
                //Multiplication
                return num1 * num2;

            } else {
                //Catch all
                throw invalid_argument("Unsupported Operation");
            }
        };  
};

#endif