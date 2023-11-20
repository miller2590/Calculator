# Calculator App

# Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Prerequisites](#prerequisites)
- [Build Instructions](#build-instructions)
- [Usage](#usage)
- [Test Cases](#test-cases)
  - [Binary Calculations](#binary-calculations)
  - [Floating-Point Calculations](#floating-point-calculations)
  - [Integer Calculations](#integer-calculations)
- [Known Errors](#known-errors)
- [What I Learned](#what-i-learned)


## Overview
This is a simple calculator application that performs binary, floating-point, and integer calculations. The application uses a `MathEngine` class for various mathematical operations, and the user interacts with the calculator through a menu system provided by the `Menu` class.

## Features
- Binary calculations (addition, subtraction, multiplication, division)
- Floating-point calculations (basic arithmetic operations)
- Integer calculations (basic arithmetic operations)
- Menu-based user interface

## Prerequisites
- C++ compiler
- CMake

## Build Instructions
1. CMake:
   ```bash
   git clone https://github.com/your-username/calculator-app.git
   ```
   ```bash
   cd calculator-app
   ```
   ```bash
   mkdir build
   ```
   ```bash
   cd build
   ```
   ```bash
   cmake..
   ```
   ```bash
   make 
   ```

   ## Usage
   Run the built executable from the command line:
   ```bash
   ./Calculator
   ```
## If CMake fails, use the terminal:
  ```bash
  g++ .\src\main.cpp .\src\menu.cpp .\include\mathEngine.h .\include\menu.h
  ```
  ```bash
  .\a.exe
  ```

## Test Cases

### Binary Calculations

#### Test Case 1
**Input:**
- Binary Number 1: 1010
- Binary Number 2: 110
- Operation: +
**Expected Output:**
- Binary Sum: 10000

#### Test Case 2
**Input:**
- Binary Number 1: 101
- Binary Number 2: 11
- Operation: *
**Expected Output:**
- Binary Product: 1111

### Floating-Point Calculations

#### Test Case 1
**Input:**
- Number 1: 5.5
- Number 2: 2.5
- Operation: /
**Expected Output:**
- Quotient: 2.2

#### Test Case 2
**Input:**
- Number 1: 3.0
- Number 2: 1.5
- Operation: +
**Expected Output:**
- Sum: 4.5

### Integer Calculations

#### Test Case 1
**Input:**
- Integer 1: 10
- Integer 2: 3
- Operation: -
**Expected Output:**
- Difference: 7

#### Test Case 2
**Input:**
- Integer 1: 8
- Integer 2: 2
- Operation: *
**Expected Output:**
- Product: 16

## Known Errors

- Can only use two numbers in a given calculation.
- Binary input validation is limited and may not catch all invalid inputs.
- Floating-point precision errors may occur in some calculations.

# What I Learned

Throughout the development of this calculator application, I gained valuable insights and knowledge in the following areas:

- **Object-Oriented Programming (OOP):** Explored and implemented OOP principles by designing classes such as `Menu` and `MathEngine`, fostering code organization and reusability.

- **C++ Language Features:** Enhanced proficiency in C++ language features, including templates for generic programming, recursive functions for algorithmic solutions, and smart pointers for memory management.

- **User Interface Design:** Developed a menu-based user interface to enhance user interaction and facilitate a clear and intuitive user experience.

- **Error Handling:** Implemented error-handling mechanisms, such as gracefully handling division by zero and providing informative error messages for improved user feedback.

- **Recursive Functions:** Leveraged recursive functions for binary-to-decimal conversion, showcasing an understanding of recursive algorithms and their application in mathematical computations.

- **Template Functions:** Introduced template functionality for basic arithmetic operations, allowing for flexibility in handling different data types (integers, floating-point numbers).

- **Testing and Validation:** Created test cases to validate the functionality of different calculator operations, understanding the importance of thorough testing in software development.

- **Markdown Documentation:** Practiced creating clear and organized documentation using Markdown, including sections for features, known errors, and test cases.

These learnings contribute to an improved understanding of software development practices, particularly in the context of building a functional and user-friendly calculator application.

