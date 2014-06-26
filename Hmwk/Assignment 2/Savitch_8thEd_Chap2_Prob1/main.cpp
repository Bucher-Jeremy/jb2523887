/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on June 26, 2014, 12:31 PM
 */
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
#include <iostream>
using namespace std;

int main( ) {
    unsigned short end;
    while (end > 0)
    {    
    end = 0;
    float ton, wt;
    ton = 35273.92; //This value is in ounces
    cout <<"Enter the weight of a package of Breakfast Cereal in ounces\n";
    cin >> wt;
    cout <<"The weight of the package in tons is:\n";
    cout <<wt / ton;
    cout <<"  \n";
    cout <<"The number of boxes needed to yeild one ton of cereal is:\n";
    cout <<ton / wt;
    cout <<"  \n";
    cout <<"Press a number less than 65536 to continue with another calculation or 0 to end the program\n";
    cin >> end;
    cout <<"  \n";
    //cout <<"  \n";
    //cout <<"  \n";
    }
    return 0;
}

