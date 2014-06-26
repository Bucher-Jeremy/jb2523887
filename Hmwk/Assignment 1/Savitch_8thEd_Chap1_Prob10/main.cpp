/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on June 25, 2014, 9:51 PM
 */

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
#include <iostream>
using namespace std;

int main( ) 
{
    char A,S;
    S = ' ';
    
    cout << "Press return after entering a character.\n";
    cout << "Enter any character:\n";
    
    cin >>A;
    
    cout <<"*************\n";
    cout <<S<<S<<S<<S<<A<<S<<A<<S<<A;
    cout <<"    \n";
    cout <<S<<S<<S<<A<<S<<S<<S<<S<<A;
    cout <<"    \n";
    cout <<S<<S<<A;
    cout <<"    \n";
    cout <<S<<S<<A;
    cout <<"    \n";
    cout <<S<<S<<A;
    cout <<"    \n";
    cout <<S<<S<<A;
    cout <<"    \n";
    cout <<S<<S<<A;
    cout <<"    \n";
    cout <<S<<S<<S<<A<<S<<S<<S<<S<<A;
    cout <<"     \n";
    cout <<S<<S<<S<<S<<A<<S<<A<<S<<A;
    cout <<"     \n";
    cout <<"*************\n";
    return 0;
}
