/* 
 * File:   main.cpp
 * Author: Jeremy
 *
 * Created on June 30, 2014, 7:57 PM
 */


#include <iostream>
using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main( ) {
    
    const float pyincrs = 7.6e-2;
    float pransal, rtropay,nmonsal;
    cout <<"Enter previous annual salary\n";
    cin >>pransal ;
    rtropay = pyincrs * (pransal/2);
    cout <<"The amount of retroactive pay due is:\n";
    cout <<rtropay;
    cout <<"  \n";
    cout <<"The new monthly salary is:\n";
    nmonsal = ((pyincrs*pransal)+pransal)/12;
    cout <<nmonsal;
    
    return 0;
}

