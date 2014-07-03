/* 
 * File:   main.cpp
 * Author: Jeremy
 *
 * Created on June 30, 2014, 11:04 PM
 */


#include <iostream>
using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main( ) {
    
    const float pyincrs = 7.6e-2;//pay increase percentage
    float pransal, rtropay,nmonsal, odmnths; //previous annual salary,retroactive pay, new monthly salary, old monthly salary
    unsigned short nmmnths; //number of months
    cout <<"Enter previous annual salary, followed by the number of months the raise is retroactive for.\n";
    cin >>pransal>>nmmnths ;
    nmonsal = ((pyincrs*pransal)+pransal)/12;
    odmnths = pransal/12;
    rtropay = (nmonsal-odmnths) * nmmnths;
    cout <<"The amount of retroactive pay due is:\n";
    cout <<rtropay;
    cout <<"  \n";
    cout <<"The new monthly salary is:\n";
    cout <<nmonsal;
        
    return 0;
}


