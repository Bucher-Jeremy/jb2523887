/* 
 * File:   main.cpp
 * Author: Jeremy Bucher
 * Created on July 10, 2014, 10:56 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float litTGal=2.64179e-1; //One liter is 0.264179 gallons

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    char contin; //Continuation Variable for do while loop
    do {
        //Declare variables for the overall menu
        short menitm; //menu item

        //Obtain input for menu
        cout<<"Enter the number of the problem you wish to solve listed in the chart below."<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"1  --> Savitch_8thEd_Chap4_Prob1"<<endl;
        cout<<"2  --> Savitch_8thEd_Chap4_Prob2"<<endl;
        cout<<"3  --> Savitch_8thEd_Chap4_Prob3"<<endl;
        cout<<"4  --> Savitch_8thEd_Chap4_Prob4"<<endl;
        cout<<"5  --> Savitch_8thEd_Chap4_Prob5"<<endl;
        cout<<"6  --> Savitch_8thEd_Chap4_Prob6"<<endl;
        cout<<"7  --> Savitch_8thEd_Chap4_Prob7"<<endl;
        cout<<"8  --> Savitch_8thEd_Chap4_Prob8"<<endl;
        cout<<"9  --> Savitch_8thEd_Chap4_Prob9"<<endl;
        cout<<"10 --> Savitch_8thEd_Chap4_Prob10"<<endl;
        cout<<"---------------------------------"<<endl;
        cin>>menitm;

        //Determine which program to run
        switch (menitm){
            case 1:
                cout<<"Executing Savitch_8thEd_Chap4_Prob1."<<endl;
                
                //Declare variables
                float numLit //Number of liters consumed
                      ,miTrvl//Miles traveled 
                      ,numGal//Number of gallons
                      ,mpg; //Miles per gallon
                
                //Obtain inputs
                cout<<"Enter the number of liters consumed by the car:"<<endl;
                cin>>numLit;
                cout<<"Enter the number of miles traveled by the car:"<<endl;
                cin>>miTrvl;
                
                //Calculations
                numGal=numLit*litTGal; //Convert the liters to gallons
                mpg=miTrvl/numGal;//Calculate miles per gallon
                
                //Output results
                cout<<"The gas milage you got during your trip was: "<<mpg<<" miles per gallon."<<endl;
                
             
                break;

            case 2:
                cout<<"Executing Savitch_8thEd_Chap4_Prob2."<<endl;


                break;

            case 3:
                cout<<"Executing Savitch_8thEd_Chap4_Prob3."<<endl;

                break;

            case 4:
                cout<<"Executing Savitch_8thEd_Chap4_Prob15."<<endl;
                break;

            case 5:
                cout<<"Executing Savitch_8thEd_Chap4_Prob15."<<endl;
                break;

            case 6:
                cout<<"Executing Savitch_8thEd_Chap4_Prob15."<<endl;
                break;

            case 7:
                cout<<"Executing Savitch_8thEd_Chap4_Prob15."<<endl;
                break;

            case 8:
                cout<<"Executing Savitch_8thEd_Chap4_Prob15."<<endl;
                break;

            case 9:
                cout<<"Executing Savitch_8thEd_Chap4_Prob15."<<endl;
                break;

            case 10:
                cout<<"Executing Savitch_8thEd_Chap4_Prob15."<<endl;
                break;


            default:
                cout<<"Not a valid menu item. No problem will be solved.";
        }
        
        //Input Continuation Variable
        cout<<"Would you like to solve another problem? Y/N"<<endl;
        cin>>contin;
    } while (contin=='Y'||contin=='y');
   
    return 0;
}
