/* 
 * File:   main.cpp
 * Author: Jeremy
 *
 * Created on June 30, 2014, 7:57 PM
 */

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
#include <iostream>
using namespace std;

int main( ) {
    //unsigned short end;
    //while (end > 0)
    //{    
    //end = 0;
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
    //cout <<"  \n";
    //cout <<"Press a number less than 65536 to continue with another calculation or 0 to end the program\n";
    //cin >> end;
    //cout <<"  \n";
    //cout <<"  \n";
    //cout <<"  \n";
    
    return 0;
}

