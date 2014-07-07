/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on July 7, 2014, 9:51 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare variables for the overall menu
    int menitm; //menu item
    
    //Obtain input for menu
    cout<<"Enter the number of the problem you wish to solve listed in the chart below."<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"1  --> Savitch_8thEd_Chap3_Prob1"<<endl;
    cout<<"2  --> Savitch_8thEd_Chap3_Prob1"<<endl;
    cout<<"3  --> Savitch_8thEd_Chap3_Prob1"<<endl;
    cout<<"4  --> Savitch_8thEd_Chap3_Prob1"<<endl;
    cout<<"5  --> Savitch_8thEd_Chap3_Prob1"<<endl;
    cout<<"6  --> Savitch_8thEd_Chap3_Prob1"<<endl;
    cout<<"7  --> Savitch_8thEd_Chap3_Prob1"<<endl;
    cout<<"8  --> Savitch_8thEd_Chap3_Prob1"<<endl;
    cout<<"9  --> Savitch_8thEd_Chap3_Prob1"<<endl;
    cout<<"10 --> Savitch_8thEd_Chap3_Prob1"<<endl;
     cout<<"--------------------------------"<<endl;
    cin>>menitm;
    
    //Determine which program to run
    switch (menitm){
        case 1:
            cout<<"Executing Savitch_8thEd_Chap3_Prob1."<<endl;
            break;
        case 2:
            cout<<"Executing Savitch_8thEd_Chap3_Prob1."<<endl;
            break;
        case 3:
            cout<<"Executing Savitch_8thEd_Chap3_Prob1."<<endl;
            break;
        case 4:
            cout<<"Executing Savitch_8thEd_Chap3_Prob1."<<endl;
            break;
        case 5:
            cout<<"Executing Savitch_8thEd_Chap3_Prob1."<<endl;
            break;
        case 6:
            cout<<"Executing Savitch_8thEd_Chap3_Prob1."<<endl;
            break;
        case 7:
            cout<<"Executing Savitch_8thEd_Chap3_Prob1."<<endl;
            break;
        case 8:
            cout<<"Executing Savitch_8thEd_Chap3_Prob1."<<endl;
            break;
        case 9:
            cout<<"Executing Savitch_8thEd_Chap3_Prob1."<<endl;
            break;
        case 10:
            cout<<"Executing Savitch_8thEd_Chap3_Prob1."<<endl;
            break;
        default:
            cout<<"Not a valid menu item. No problem will be solved.";
    }
   
    return 0;
}

