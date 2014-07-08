/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on July 7, 2014, 9:51 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float spcWtWa=62.4; //Specific weight of water in lb/(ft^3)

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare variables for the overall menu
    int menitm; //menu item
    
    //Obtain input for menu
    cout<<"Enter the number of the problem you wish to solve listed in the chart below."<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"1  --> Savitch_8thEd_Chap3_Prob1"<<endl;
    cout<<"2  --> Savitch_8thEd_Chap3_Prob2"<<endl;
    cout<<"3  --> Savitch_8thEd_Chap3_Prob5"<<endl;
    cout<<"5  --> Savitch_8thEd_Chap3_Prob15"<<endl;
    cout<<"--------------------------------"<<endl;
    cin>>menitm;
    
    //Determine which program to run
    switch (menitm){
        
        
        case 1:
            //Declare Variables
            char move1, move2;
            
            cout<<"Executing Savitch_8thEd_Chap3_Prob1."<<endl;
            cout<<"Rock Paper Scissors!"<<endl;
            cout<<"Player 1, enter P, R, or S"<<endl;
            cin>>move1;
            cout<<"Player 2, enter P, R, or S"<<endl;
            cin>>move2;
            
            if (move1=='P'&&move2=='R') {
                cout<<"Player 1 wins!"<<endl;          
            }
            if (move1=='R'&&move2=='S') {
                cout<<"Plaver 1 wins!"<<endl;
            }
            if (move1=='S'&&move2=='P') {
                cout<<"Plaver 1 wins!"<<endl;
            }
            if (move2=='P'&&move1=='R') {
                cout<<"Player 2 wins!"<<endl;          
            }
            if (move2=='R'&&move1=='S') {
                cout<<"Plaver 2 wins!"<<endl;
            }
            if (move2=='S'&&move1=='P') {
                cout<<"Plaver 2 wins!"<<endl;
            }
            else
            cout<<"The basis for determining the winner: Paper covers rock, Rock breaks scissors, Sissors cut paper, or Nobody wins."<<endl;
            break;
            
            
        case 2:
            cout<<"Executing Savitch_8thEd_Chap3_Prob2."<<endl;
            
            //declare variables
            float acntBal, //account balance
                  intDue, //interest due
                  intRte, //interest rate
                  totAmt, //total amount due
                  minPymnt; //minimum payment
            
            //aquire account balance
            cout<<"Please enter the account balance:"<<endl;
            cin>>acntBal;
            
            //decide interest rate
            if (acntBal<=1000) {
                intRte=1.5e-2;
            }
            else {
                intRte=1e-2;
            }
            
            //calculate interest due and total amount due
            intDue=acntBal*intRte;
            totAmt=intDue+acntBal;
            
            //Decide what the minimum payment is
            if (totAmt <=10) {
                minPymnt=totAmt;
            }
            else {
                minPymnt=totAmt*1e-1;
            }
            
            //output interest due, total amount due, and the minimum payment
            cout<<fixed<<showpoint<<setprecision(2)
                <<"The Interest due is: $"<<intDue<<endl
                <<"The Total Amount due is: $"<<totAmt<<endl
                <<"The Minimum Payment is: $"<<minPymnt;    
            break;
            
            
        case 3:
            cout<<"Executing Savitch_8thEd_Chap3_Prob5."<<endl;
            cout<<"-Cost of a long distance call-"<<endl;
            //declare variables
            float bllRte, cost;    //billing rate, cost of call
            short cllDur; //call duration
            char hour; //hour in which call was stared
            char dy1,dy2;//day the call was made
            
            //obtain day and hour
            cout<<"What day of the week? Mo Tu We Th Fr Sa Su"<<endl;
            cin>>dy1>>dy2;
            cout<<"What hour? Please us military time 1-24"<<endl;
            cin>>hour;
            
            
            //determine billing rate
            if (dy1=='S'||dy1=='s'){
                bllRte=1.5e-1;
            }
            else {
                
            if (hour>=8&&hour<=18) {
                    bllRte=4e-1;
            }
            if (hour<8&&hour>0) {
                    bllRte=2.5e-1;
            }
            if (hour<=24&&hour>18) {
                    bllRte=2.5e-1;
            }
            else {
                cout<<"You entered the data incorrectly the calculations made are invalid";
            }
            }
            
            cout<<"How many minutes did the call last?"<<endl;
            cin>>cllDur;
            
            //calculate cost
            cost=bllRte*cllDur;
            
            //output cost
            cout<<fixed<<showpoint<<setprecision(2)<<"The cost of your call is: $"<<cost;
          
            break;
            
        case 5:
            cout<<"Executing Savitch_8thEd_Chap3_Prob15."<<endl;
            cout<<"-Bouancy of a Sphere-"<<endl;
            
            //declare variables
            float wght, radius, spWtSph, volume; //weight of sphere, radius of sphere, specific weight of sphere, volume
            
            //input weight and radius
            cout<<"Enter the weight of the Sphere in pounds: ";
            cin>>wght;
            cout<<"Enter the radius of the sphere in feet: ";
            cin>>radius;
            
            //calculations
            volume=(4/3)*(M_PI)*radius*radius*radius;
            spWtSph=wght/volume;
            
            //Determine whether the sphere floats or not
            if (spWtSph<spcWtWa){
                cout<<"It floats!";
            }
            else if (spWtSph>spcWtWa){
                cout<<"It sinks!";
            }
            else {
                cout<<"It neither sinks nor floats!";
            }
            
            
            break;
            
            
        default:
            cout<<"Not a valid menu item. No problem will be solved.";
    }
   
    return 0;
}

