// Function1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void doit(); // Function declaration


int main()
{
    doit();        //function Call
    doit();        //function Call
    doit();        //function Call

    return 0;
}

void doit() {   // Function Defination
    std::cout << "Starting the task ...." << std::endl;
    std::cout << "completed the task ...." << std::endl;

    return;
}