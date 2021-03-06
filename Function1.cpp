// Function1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void doit(); // Function declaration
int abhi(int i1n);
//int foo(int);
double avg(double, double);
int add(int i1n, int i2n);
void printOddNumber(int number_of_odd_values);
int main()
{
    doit();        //function Call
    doit();        //function Call
    doit();        //function Call
   
    /* A function call is an expression as long as it returns value other than void
*/
    std::cout << " Addition of 3 & 4 is :" << (3 + 7) << std::endl; // Result of the expression got printed 
    std::cout << "Average of 45 & 67 is : " << avg(45, 67) << std::endl;
    std::cout << " Addition of 3 & 4 is Average of 45 & 67 is :" << (3 + 7 + avg(5.5, 6.7)) << std::endl;
    /* Since doit returns Void; it cannot be a part of expression */
 //   std::cout << "Addition  of 4 and doit is : " <<  4 + doit() << std::endl;  // When void involves its not consider as a expression
    double result = avg(3.4, 5.6);
    std::cout << " Average of 3.4 & 5.6 = " << result << std::endl;
    /*Arguments of type integre  are implicitely promoted to double */
    result = avg(10, 15);
    std::cout << " Average of 10 & 15 = " << result << std::endl;
    int sum = add(10, 20);
    std::cout << "Addition of 10 & 20 = " << sum << std::endl;

    /* Unsafe because larger type double is converted to smaller type int
This will result into loss of precision or loss of data
*/

    int sum = add(10.5, 20.6);//loss of precision
    std::cout << "Addition of 10 & 20 = " << sum << std::endl;


    result = add(10.5, 20.6);//loss of precision
    std::cout << "Addition of 10.5 & 20.6 = " << result << std::endl;

    result = add(7000000000.5, 2000000000.4);//loss of data
    std::cout << "Addition of 7000000000.5 & 2000000000.4 = " << result << std::endl;

    printOddNumber(5);
    
    
    
    
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

double avg(double d1n, double d2n) {
    return (d1n + d2n) / 2;
}




int add(int i1n, int i2n) {
    return (i1n + i2n);
}

void printOddNumber(int number_of_odd_values)
{
    std::cout << "The first " << number_of_odd_values << "odd values are :\n";
    for (int odd{ 1 }; odd <= (2 * number_of_odd_values); odd += 2) {
        std::cout << odd << " , " << std::endl;
    }
    std::cout << std::endl;
}