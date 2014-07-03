/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 *
 * Created on June 26, 2014, 1:20 PM
 */

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
#include <iostream>
using namespace std;

int main( ) {
   
    float wtD, wtM, amtKm, amtKd, contn, popdrkn;
    contn = 1e-3;
    cout <<"Enter: amount of sweetener need to kill mouse, weight of the mouse, and the weight the dieter will stop dieting\n";
    cin >>amtKm>>wtM>>wtD;
    amtKd = (wtD * amtKm)/wtM;
    popdrkn = amtKd / contn;
    cout <<"The amount of soda pop the dieter can drink is:\n";
    //cout <<"  \n";
    cout << popdrkn;
    
    return 0;
}

