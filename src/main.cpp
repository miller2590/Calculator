/**
 * @file main.cpp
 * Entry point for the program.
 *
 * This file serves as the main entry point for a C++ program. It includes the necessary
 * headers for the Menu and MathEngine classes and invokes the startMenu function to initiate
 * the program's execution.
 *
 * @author Gage Miller
 * @date 11-19-2023
 */

#include "../include/menu.h"
#include "../include/mathEngine.h"


int main() {
    //Creates an instance of the Menu class and starts the program
    Menu().startMenu();

    return 0;
};
