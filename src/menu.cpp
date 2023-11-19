#include "../include/menu.h"
#include "../include/mathEngine.h"
#include <iostream>
#include <string>

using namespace std;

void Menu::startMenu() {
    //Some type of calculations class

    //Menu logic
    int choice;

    do {
        cout << "Calculator APP: " << endl;
        cout << "1. Binary Calculations: " << endl;
        cout << "2. Floating point Calculations: " << endl;
        cout << "3. Integer Calculations: " << endl;
        cout << "4. EXIT: " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                {   
                    
                    auto result = MathEngine().calculationOptions<string>("Binary");

                    int decimalConversionOne = MathEngine().binaryToDecimal(get<0>(result));
                    int decimalConversionTwo = MathEngine().binaryToDecimal(get<1>(result));

                    if (get<2>(result) == '+') {
                        //domath
                        int sum = decimalConversionOne + decimalConversionTwo;
                        cout << MathEngine().decimalToBinary(sum) << endl;
                        
                    } else if (get<2>(result) == '-') {
                        //domath
                        int diff = decimalConversionOne - decimalConversionTwo;
                        cout << MathEngine().decimalToBinary(diff) << endl;

                    } else if (get<2>(result) == '/') {
                        //domath
                        if (get<1>(result) != "0") {
                            int quotient = decimalConversionOne / decimalConversionTwo;
                            cout << MathEngine().decimalToBinary(quotient) << endl;

                        } else {  
                            cout << "Error: Divison by Zero" << endl;
                            break;
                        }
                    } else if (get<2>(result) == '*') {
                        //domath
                        int product = decimalConversionOne * decimalConversionTwo;
                        cout << MathEngine().decimalToBinary(product) << endl;
                    } else {
                        throw invalid_argument("Unsupported Operation");
                    }
                    break;
                }
            case 2:
                {
                    
                    auto result = MathEngine().calculationOptions<double>("floating point");


                    cout << MathEngine().floatOrInt(get<0>(result), get<1>(result), get<2>(result)) << endl;
                    break;
                }
            case 3:
                {
                    auto result = MathEngine().calculationOptions<int>("integer");

                    cout << MathEngine().floatOrInt(get<0>(result), get<1>(result), get<2>(result)) << endl;
                    
                    break;
                }
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid Choice, try again." << endl;
        }

    } while (choice != 4);
    
};