/**
 * @file Menu.cpp
 * Implementation of the Menu class member functions.
 *
 * This file defines the member functions of the Menu class, which is responsible
 * for displaying a simple calculator menu and interacting with the MathEngine class
 * for various calculations.
 *
 * @author Gage Miller
 * @date 11-29-2023
 */

#include "../include/menu.h"
#include "../include/mathEngine.h"
#include <iostream>
#include <string>
#include <memory>
#include <limits>

using namespace std;

void Menu::startMenu() {
    //Create a unique pointer to MathEngine as it is only used in menu class
    unique_ptr<MathEngine> mathEngine = make_unique<MathEngine>();
    
    //Menu logic
    int choice;

    do {
        //User menu options
        cout << "Calculator APP: " << endl;
        cout << "1. Binary Calculations: " << endl;
        cout << "2. Floating point Calculations: " << endl;
        cout << "3. Integer Calculations: " << endl;
        cout << "4. EXIT: " << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                {   
                    //Binary calculations using MathEngine
                    auto result = mathEngine->calculationOptions<string>("Binary");

                    int decimalConversionOne = mathEngine->binaryToDecimal(get<0>(result));
                    int decimalConversionTwo = mathEngine->binaryToDecimal(get<1>(result));

                    if (get<2>(result) == '+') {
                        //Perform addition
                        int sum = decimalConversionOne + decimalConversionTwo;
                        cout << mathEngine->decimalToBinary(sum) << endl;
                        
                    } else if (get<2>(result) == '-') {
                        //Perform subtraction
                        int diff = decimalConversionOne - decimalConversionTwo;
                        cout << mathEngine->decimalToBinary(diff) << endl;

                    } else if (get<2>(result) == '/') {
                        //Perform division and checks for 0 division error
                        if (get<1>(result) != "0") {
                            int quotient = decimalConversionOne / decimalConversionTwo;
                            cout << mathEngine->decimalToBinary(quotient) << endl;

                        } else {  
                            //Error catch for division by 0
                            cout << "Error: Divison by Zero" << endl;
                            break;
                        }
                    } else if (get<2>(result) == '*') {
                        //Perform multiplication
                        int product = decimalConversionOne * decimalConversionTwo;
                        cout << mathEngine->decimalToBinary(product) << endl;
                    } else {
                        throw invalid_argument("Unsupported Operation");
                    }
                    break;
                }
            case 2:
                {
                    //Floating point calculations
                    auto result = mathEngine->calculationOptions<double>("floating point");


                    cout << mathEngine->floatOrInt(get<0>(result), get<1>(result), get<2>(result)) << endl;
                    break;
                }
            case 3:
                {
                    //Integer calculations
                    auto result = mathEngine->calculationOptions<int>("integer");

                    cout << mathEngine->floatOrInt(get<0>(result), get<1>(result), get<2>(result)) << endl;
                    
                    break;
                }
            case 4:
                //Exit program
                cout << "Exiting program..." << endl;
                break;
            default:
                //Catch all for menu options
                cout << "Invalid Choice, try again." << endl;

                //Clear buffer so I don't get the infinite loop again :)
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
        }

    } while (choice != 4);
    
};