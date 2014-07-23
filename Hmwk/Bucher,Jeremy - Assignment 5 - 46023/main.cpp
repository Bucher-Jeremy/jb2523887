/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 10:37 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void inptHr(short& hr24, char& dum, short& min);
char hrCnvrt(short& hr24, short& hr12, char& am_pm);
void otptHr(short hr12, short min, char am_pm);

//Execution Starts Here
int main(int argc, char** argv) {
    char contin; //Continuation Variable for do while loop
    do {
        //Declare variables for the overall menu
        short menitm; //menu item

        //Obtain input for menu
        cout<<"Enter the number of the problem you wish to solve listed in the chart below."<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"1   --> Savitch_8thEd_Chap5_Prob1"<<endl;
        cout<<"2   --> Savitch_8thEd_Chap5_Prob2"<<endl;
        cout<<"3   --> Savitch_8thEd_Chap5_Prob3"<<endl;
        cout<<"4   --> Savitch_8thEd_Chap5_Prob4"<<endl;
        cout<<"5   --> Savitch_8thEd_Chap5_Prob5"<<endl;
        cout<<"6   --> Savitch_8thEd_Chap5_Prob6"<<endl;
        cout<<"7   --> Savitch_8thEd_Chap5_Prob7"<<endl;
        cout<<"8   --> Savitch_8thEd_Chap5_Prob7"<<endl;
        cout<<"9   --> Savitch_8thEd_Chap5_Prob7"<<endl;
        cout<<"10  --> Savitch_8thEd_Chap5_Prob7"<<endl;
        cout<<"---------------------------------"<<endl;
        cin>>menitm;
        
        //Determine which program to run using a switch
        switch (menitm){
            case 1:{
                char cntn1, dumm=':', ampm;
                short _24hr=0, minu=0, _12hr;
                do{
                    inptHr(_24hr, dumm, minu);
                    hrCnvrt(_24hr, _12hr, ampm);
                    otptHr(_12hr, minu, ampm);
                    
                    cout<<"Would you like to convert another time? Y/N"<<endl;
                    cin>>cntn1;
                }while(cntn1=='Y');
                break;
            }case 2:{
                char hour=12, colon=':', minute=35;
                cout<<hour+colon+minute;
                break;
            }case 3:{
                break;
            }case 4:{
                break;
            }case 5:{
                break;
            }case 6:{
                break;
            }case 7:{
                break;
            }case 8:{
                break;
            }case 9:{
                break;
            }case 10:{
                break;
            }default:{
                cout<<"Not a valid menu item. No problem will be solved."<<endl;
                cout<<" "<<endl;
            }
        }
        
        //Input Continuation Variable
        cout<<"Would you like to solve another problem? Y/N"<<endl;
        cin>>contin;
    } while (contin=='Y'||contin=='y');
    return 0;
}
//Input function 
void inptHr(short& hr24, char& dum, short& min){
    cout<<"Please input the 24 hour time."<<endl;
    cin>>hr24;
    cin>>dum;
    cin>>min;
}
char hrCnvrt(short& hr24, short& hr12, char& am_pm){
    if(hr24>=13){
        hr12=hr24-12; 
        am_pm='P';
    }
    else{
        hr12=hr24;
        am_pm='A';
    } 
}
void otptHr(short hr12, short min, char am_pm){
    cout<<"The 12 hour time is "<<hr12<<":"<<min<<am_pm<<endl;
}

