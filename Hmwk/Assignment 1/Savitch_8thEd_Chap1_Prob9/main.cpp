/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on June 25, 2014, 11:13 PM
 */
//User Defined Libraries

//Global Constants

//Function Rototypes

//Execution Begins Here
#include <iostream>

using namespace std;


int main( ) {
    short dist, accel, time;
    accel = 32;
    cout <<"Enter how many seconds the object fell for\n"; 
    cin >>time;
    dist = (accel * time)/2;
    cout <<"The object fell\n";
    cout <<dist<<"feet\n"; 
    

    return 0;
}

