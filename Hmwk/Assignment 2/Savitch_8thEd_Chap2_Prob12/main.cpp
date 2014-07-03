/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on July 2, 2014, 7:39 PM
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    
    //Inputs
    float num;
    float guess;
    
    //Output
    float sqrt;
    
    cout<<"What number do you want to find the square root of?"<<endl;
    cin>>num;
    cout<<"What do you guess the square root of this number to be?"<<endl;
    cin>>guess;
    
    //First attempt
    sqrt=num/guess;
    guess=(guess+sqrt)/2;
    cout<<"First attempt"<<endl;
    cout<<sqrt<<endl;
    
    //Second attempt
    sqrt=num/guess;
    guess=(guess+sqrt)/2;
    cout<<"Second attempt"<<endl;
    cout<<sqrt<<endl;
    
     //Third attempt
    sqrt=num/guess;
    guess=(guess+sqrt)/2;
    cout<<"Third attempt"<<endl;
    cout<<sqrt<<endl;
   
    return 0;
}

