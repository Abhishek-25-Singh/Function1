// Function1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void doit(); // Function declaration
int abhi(int i1n);
//int foo(int);

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
    std::cout << "Adding i1n two times : " << abhi(45) << std::endl;
    // foo(45);
    return;
}


int abhi(int i1n) {
    return i1n + i1n;
}

//float foo(float) {                     //Mixed match
//    return 1.3f;
//}