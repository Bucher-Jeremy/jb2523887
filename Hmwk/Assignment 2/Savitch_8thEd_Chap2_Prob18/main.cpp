/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 2, 2014, 10:23 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    //Inputs
    char gender; // M or F
    short weight; //in pounds
    short height; //in inches
    short age; //in years
    
    //Outputs
    float bmr=1; //basal metabolic rate
    short numcbar;
    
    cout<<"How many candy bars must you eat in order to maintain your weight?"<<endl;
    cout<<"Are you male or female? Enter with M or F"<<endl;
    cin>>gender;
    cout<<"What is your weight in pounds?"<<endl;
    cin>>weight;
    cout<<"What is your height in inches?"<<endl;
    cin>>height;
    cout<<"What is your age in years?"<<endl;
    cin>>age;
    
    short chbar=250;//250 calorie chocolate bar
    if(gender=='M'){
        bmr=66+(6.3*weight)+(12.9*height)-(6.8*age);
        numcbar=bmr/chbar;
    }else if(gender=='F'){
        bmr=655+(4.3*weight)+(4.7*height)-(4.7*age);
        numcbar=bmr/chbar;
    }
    cout<<"Your basal metabolic rate is ";
    cout<<bmr<<endl;
    cout<<"You must eat "<<numcbar<<" chocolate bars in order to maintain your weight.";
        
    return 0;
}

