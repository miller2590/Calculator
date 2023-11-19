#ifndef MATHENGINE_H
#define MATHENGINE_H

#include <string>
#include <iostream>

using namespace std;

class MathEngine {
    //do Math
    public:
        MathEngine() {};
        
        string decimalToBinary(int decimal) {
    
            if(decimal == 0) {
                return "";

            } else {

                return decimalToBinary(decimal/2) + to_string(decimal % 2);
            };

        };

        int binaryToDecimal(string binary, int index = 0) {

            if (index == binary.length()) {
                return 0;
            }

            int decimal = binaryToDecimal(binary, index + 1);

            return decimal + (binary[index] - '0') * (1 << (binary.length() - index - 1));
        };

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

        template<typename Type>
        Type floatOrInt(Type num1, Type num2, char operation) {
            if (operation == '+') {
                //domath
                return num1 + num2;

            } else if (operation == '-') {
                //domath
                return num1 - num2;

            } else if (operation == '/') {
                //domath
                if (num2 != 0) {
                    return num1 / num2;
                } else {
                    throw invalid_argument("Error: Division by Zero");

                }

            } else if (operation == '*') {
                //domath
                return num1 * num2;

            } else {
                throw invalid_argument("Unsupported Operation");
            }
        };  
};

#endif