/* 
 * File:   main.cpp
 * Author: Jeremy
 * Created on July 1, 2014, 8:55 PM
 */
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    
    //Inputs
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    
    //Outputs
    int sumNeg,sum;
    
    //Number Input
    cout<<"Enter any ten whole numbers. They can be positive or negative."<<endl;
    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10;
    
    if (num1<0)
    {
        sumNeg=num1;
    }
    
    if (num2<0)
    {
        sumNeg+=num2;
    }
    
    if (num3<0)
    {
        sumNeg+=num3;
    }
    
    if (num4<0)
    {
        sumNeg+=num4;
    }
    
    if (num5<0)
    {
        sumNeg+=num5;
    }
    
    if (num6<0)
    {
        sumNeg+=num6;
    }
    
    if (num7<0)
    {
        sumNeg+=num7;
    }
    
    if (num8<0)
    {
        sumNeg+=num8;
    }
    
    if (num9<0)
    {
        sumNeg+=num9;
    }
    
    if (num10<0)
    {
        sumNeg+=num10;
    }
    
    sum=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
    cout<<"The sum of all the negative numbers is:"<<endl;
    cout<<sumNeg<<endl;
    cout<<"The sum of the numbers is:"<<endl;
    cout<<sum;

    return 0;
}

