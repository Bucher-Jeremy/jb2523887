/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on June 25, 2014, 1:44 PM
 */

//User Defined Libraries

//Global Constants

//Function Rototypes

//Execution Begins Here
#include <iostream>
//a. main.cpp:14:21: fatal error:  iostream: No such file or directory
//b. main.cpp:14:10: error: #include expects "FILENAME" or <FILENAME>
using namespace std;

 int main ()  { 
//c. no error Run Successful
//d. /usr/src/debug/cygwin-1.7.24-1/winsup/cygwin/lib/libcmain.c:39: undefined reference to `WinMain@16'
//e. main.cpp:19:6: warning: extended initializer lists only available with -std=c++11 or -std=gnu++11 [enabled by default]
//main.cpp:22:5: error: expected primary-expression before ‘int’
//main.cpp:22:5: error: expected ‘}’ before ‘int’
//main.cpp:22:5: error: expected ‘,’ or ‘;’ before ‘int’
//main.cpp:23:5: error: ‘A’ does not name a type
//main.cpp:24:5: error: ‘C’ does not name a type
//main.cpp:25:5: error: ‘D’ does not name a type
//main.cpp:26:5: error: ‘cout’ does not name a type
//main.cpp:27:5: error: ‘cout’ does not name a type
//main.cpp:28:5: error: ‘cout’ does not name a type
//main.cpp:29:5: error: ‘cout’ does not name a type
//main.cpp:30:5: error: ‘cout’ does not name a type
//main.cpp:31:5: error: ‘cout’ does not name a type
//main.cpp:32:5: error: ‘cout’ does not name a type
//main.cpp:33:5: error: ‘cout’ does not name a type
//main.cpp:34:5: error: ‘cout’ does not name a type
//main.cpp:35:5: error: ‘cout’ does not name a type
//main.cpp:36:5: error: ‘cout’ does not name a type
//main.cpp:37:5: error: ‘cout’ does not name a type
//main.cpp:38:5: error: ‘cout’ does not name a type
//main.cpp:39:5: error: expected unqualified-id before ‘return’
//main.cpp:40:1: error: expected declaration before ‘}’ token
    int A, B, C, D;
    A=5, B=22;
    C=A+B;
    D=A*B;
    cout <<"The first integer is:\n";
    cout <<A;
    cout <<"  \n";
    cout <<"The second integer is:\n";
    cout <<B;
    cout <<"  \n";
    cout <<"The sum of the two integers is:\n";
    cout <<C;
    cout <<"  \n";
    cout <<"The product of the two integers is:\n";
    cout <<D;
    cout <<"  \n";
    cout <<"This is the end of the program\n";
    //f. main.cpp:60:5: error: 'coute' was not declared in this scope
    //main.cpp:60:10: error: expected ';' before string constant
    //main.cpp:64:13: error: expected '}' at end of input
    return 0;
 }
