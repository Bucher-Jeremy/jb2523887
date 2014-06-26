/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 *
 * Created on June 25, 2014, 10:27 PM
 */

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
#include <iostream>

using namespace std;


int main( ) {
    short Q, D, N,numQ,numD,numN,valQ,valD,valN,total;
    Q=25, D=10, N=5;
    
    cout << "Enter number of Quarters\n";        
    cin >> numQ;
    valQ = Q * numQ;
    
    cout << "Enter number of Dimes\n";
    cin >> numD;
    valD = D * numD;
    
    cout << "Enter number of Nickels\n";
    cin >> numN;
    valN = N * numN;
    
    cout <<"The total value of all of the coins is:\n";
    total = valQ + valD + valN;
    cout <<total<<"cents\n";
    return 0;
}

