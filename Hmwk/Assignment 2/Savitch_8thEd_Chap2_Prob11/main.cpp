/* 
 * File:   main.cpp
 * Author: Jeremy
 *
 * Created on July 1, 2014, 10:41 PM
 */


#include <iostream>
using namespace std;
//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Inputs
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    
    //Outputs
    int sumNeg,sumPos,sum,avgNeg,avgPos,avg;
    
    //Number Input
    cout<<"Enter any ten whole numbers. They can be positive or negative."<<endl;
    cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8>>num9>>num10;
    
        //Sort out and add the negative values
        if (num1<0){
            sumNeg=num1;
        }
        if (num2<0){
            sumNeg+=num2;
        }
        if (num3<0){
            sumNeg+=num3;
        }
        if (num4<0){
            sumNeg+=num4;
        }
        if (num5<0){
            sumNeg+=num5;
        }
        if (num6<0){
            sumNeg+=num6;
        }
        if (num7<0){
            sumNeg+=num7;
        }
        if (num8<0){
            sumNeg+=num8;
        }
        if (num9<0){
            sumNeg+=num9;
        }
        if (num10<0){
            sumNeg+=num10;
        }
    
    
        //Find how many negative numbers there are
    char numNeg;
        if (num1<0){
            numNeg=1;
        }
        if (num2<0){
            numNeg+=1;
        }
        if (num3<0){
            numNeg+=1;
        }
        if (num4<0){
            numNeg+=1;
        }
        if (num5<0){
            numNeg+=1;
        }
        if (num6<0){
            numNeg+=1;
        }
        if (num7<0){
            numNeg+=1;
        }
        if (num8<0){
            numNeg+=1;
        }
        if (num9<0){
            numNeg+=1;
        }
        if (num10<0){
            numNeg+=1;
        }
    
    
        //sort out and add the positive values 
        if (num1>=0){
            sumPos+=num1;
        }
        if (num2>=0){
            sumPos+=num2;
        }
        if (num3>=0){
            sumPos+=num3;
        }
        if (num4>=0){
            sumPos+=num4;
        }
        if (num5>=0){
            sumPos+=num5;
        }
        if (num6>=0){
            sumPos+=num6;
        }
        if (num7>=0){
            sumPos+=num7;
        }
        if (num8>=0){
            sumPos+=num8;
        }
        if (num9>=0){
            sumPos+=num9;
        }
        if (num10>=0){
            sumPos+=num10;
        }
    
    //Calculations
    char numPos;
    avgNeg=sumNeg/numNeg;
    numPos=10-numNeg;
    avgPos=sumPos/numPos;
    sum=num1+num2+num3+num4+num5+num6+num7+num8+num9+num10;
    avg=sum/10;
    
    cout<<"The sum of all the negative numbers is:"<<endl;
    cout<<sumNeg<<endl;
    cout<<"The average of all negative numbers is:"<<endl;
    cout<<avgNeg<<endl;
    cout<<"The sum of all the positive numbers is:"<<endl;
    cout<<sumPos<<endl;
    cout<<"The average of all positive numbers is:"<<endl;
    cout<<avgPos<<endl;
    cout<<"The sum of the numbers is:"<<endl;
    cout<<sum<<endl;
    cout<<"The average of all numbers is:"<<endl;
    cout<<avg;

    return 0;
}
