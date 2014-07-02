/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on July 1, 2014, 7:27 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Inputs
    unsigned short mxrmcap;                                              //maximum room capacity
    unsigned short numppl;                                               //number of people attending meeting
    
    //Outputs
    unsigned short hwmnyppl;                                             //how many additional people may legally attend the meeting
   
    //Input Values
    cout<<"What is the maximum room capacity?"<<endl;
    cin>>mxrmcap;
    cout<<"What is the number of people attending the meeting?"<<endl;
    cin>>numppl;

        if (numppl<=mxrmcap)                                             //When the number of people in the meeting is less 
        {                                                                //than or equal to the maximum capacity of the room
            unsigned short addppl;
            cout<<"It is safe to hold the meeting!"<<endl;
            addppl=mxrmcap-numppl;
            cout<<addppl<<" additional people may legally attend."<<endl;
        }
        else                                                             //Otherwise 
        {
            unsigned short subppl;
            cout<<"It is not safe to hold the meeting!!"<<endl;
            subppl=numppl-mxrmcap;
            cout<<subppl<<" people must be excluded from the meeting to meet fire regulations."<<endl;
        } 
    return 0;
}

