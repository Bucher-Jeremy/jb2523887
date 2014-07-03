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
const float HRTOMIN=60;                //1hr=60min
const float MNTOSEC=HRTOMIN;           //1min=60sec

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Input
    float mph=0;                       //Fractional mph
    short miph=0;                      //Integer mph
    
    //Outputs
    float pacemin=0;                   //Fractional pace in minutes
    short pacesec=0;                   //Integer pace in seconds
    short Pacemin=0;                   //Integer pace in minutes
    float mphRec=0;                    //Reciprocal of mph
        
    //Aquire Input
    cout<<"Enter speed in MPH."<<endl;
    cin>>mph;
    
    //Calculations
    mphRec=1/mph;
    pacemin=mphRec*HRTOMIN;
    Pacemin=mphRec*HRTOMIN;
    pacesec=(pacemin-Pacemin)*MNTOSEC;
    
    //Display outputs
    cout<<"Your pace is "<<Pacemin<<" minutes and "<<pacesec<<" seconds per mile.";
    
    return 0;
}

