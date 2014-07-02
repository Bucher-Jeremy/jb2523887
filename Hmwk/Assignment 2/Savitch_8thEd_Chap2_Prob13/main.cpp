/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on July 1, 2014, 11:26 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants
const short hrToMin=60; //1hr=60min
const short minToSec=60; //1min=60sec

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Input
    float mph;
    
    //Outputs
    short pacemin,pacesec;
    
    cout<<"Enter speed in MPH."<<endl;
    cin>>mph;
    short hdthmph;
    hdthmph=mph/100;
    pacemin=hrToMin/mph;
    pacesec=((hrToMin%hdthmph)*100)*minToSec;
    
    cout<<"Your pace is "<<pacemin<<"minutes and "<<pacesec<<" seconds per mile.";
    
//intMin=minutes subtract the float minutes by intmin and that is the remaining fraction then convert the freaction to seconds
    return 0;
}

