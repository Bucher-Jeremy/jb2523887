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
const float LITERGL=2.64179e-1;   //One liter is 0.264179 gallons
const char PERCENT=100;           //Convert to percent
const float G=6.673e-8;           //Gravitational constant cm^3/(g*sec^2)
const short KG2G=1000;            //Converts kg to g
const char M2CM=100;              //Converts m to cm

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

        //Determine which program to run using a switch
        switch (menitm){
            case 1:
                cout<<"Executing Savitch_8thEd_Chap4_Prob1."<<endl;
                cout<<" "<<endl;
                cout<<" "<<endl;
                
                //Declare variables
                float numLit                 //Number of liters consumed
                      ,miTrvl                //Miles traveled 
                      ,numGal                //Number of gallons
                      ,mpg;                  //Miles per gallon
                
                char cntn1; //variable for continuation case 1
                do{
                    //Obtain inputs
                    cout<<"Enter the number of liters consumed by the car:"<<endl;
                    cin>>numLit;
                    cout<<"Enter the number of miles traveled by the car:"<<endl;
                    cin>>miTrvl;

                    //Calculations
                    numGal=numLit*LITERGL;       //Convert the liters to gallons
                    mpg=miTrvl/numGal;           //Calculate miles per gallon

                    //Output results
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"The gas milage you got during your trip was: "<<mpg<<" miles per gallon."<<endl;

                    cout<<"Would you like to run the program again? Y/N"<<endl;
                    cin>>cntn1;
                } while (cntn1=='Y'||cntn1=='y');
                
                cout<<" "<<endl;
                cout<<" "<<endl; 
                break;

            case 2:
                cout<<"Executing Savitch_8thEd_Chap4_Prob2."<<endl;
                cout<<" "<<endl;
                cout<<" "<<endl;
                
                //Declare variables for the first car
                float numLitF                 //Number of liters consumed
                      ,miTrvlF                //Miles traveled 
                      ,numGalF                //Number of gallons
                      ,mpgF;                  //Miles per gallon
                
                //Declare variables for the second car
                float numLitS                 //Number of liters consumed
                      ,miTrvlS                //Miles traveled 
                      ,numGalS                //Number of gallons
                      ,mpgS;                  //Miles per gallon
                
                char cntn2; //variable for continuation case 2
                do{
                    //Obtain inputs
                    cout<<"Enter the number of liters consumed by the first car:"<<endl;
                    cin>>numLitF;
                    cout<<"Enter the number of miles traveled by the first car:"<<endl;
                    cin>>miTrvlF;
                    cout<<"Enter the number of liters consumed by the second car:"<<endl;
                    cin>>numLitS;
                    cout<<"Enter the number of miles traveled by the second car:"<<endl;
                    cin>>miTrvlS;

                    //Calculations
                    numGalF=numLitF*LITERGL;        //Convert the liters to gallons
                    mpgF=miTrvlF/numGalF;           //Calculate miles per gallon
                    numGalS=numLitS*LITERGL;        //Convert the liters to gallons
                    mpgS=miTrvlS/numGalS;           //Calculate miles per gallon

                    //Output results
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"The gas milage the first car got during its trip was: "<<mpgF<<" miles per gallon."<<endl;
                    cout<<"The gas milage the second car got during its trip was: "<<mpgS<<" miles per gallon."<<endl;

                    //Determine & output which car has the best mpg
                    if (mpgF>mpgS){
                        cout<<"The first car has the best fuel efficiency!"<<endl;
                    }
                    else{
                        cout<<"The second car has the best fuel efficiency!"<<endl;
                    }

                     cout<<"Would you like to run the program again? Y/N"<<endl;
                    cin>>cntn2;
                } while (cntn2=='Y'||cntn2=='y');
                cout<<" "<<endl;
                cout<<" "<<endl;
                break;

            case 3:
                cout<<"Executing Savitch_8thEd_Chap4_Prob3."<<endl;
                cout<<" "<<endl;
                cout<<" "<<endl;
                
                //Declare variables
                short numShar, whleDlr, numer, denom;     //number of shares,whole dollar value,numerator,&denominator
                float fract, ppshare, value;              //fractional value,price per share, value of holding
                char cnCseTh;                             //continuation variable for case three
                
                char cntn3; //variable for continuation
                do{
                    //Obtain inputs
                    cout<<"Enter the number of shares of stock owned: ";
                    cin>>numShar;
                    cout<<"Enter the whole dollar portion of the price of each share: ";
                    cin>>whleDlr;

                    //Do while loop to make sure the user enters the correct fractional portion of the price
                    do{
                        cout<<"Enter the numerator of the fractional portion of the price of each share: ";
                        cin>>numer;
                        cout<<"Enter the denominator of the fractional portion of the price of each share: ";
                        cin>>denom;
                        cout<<"Is this the fraction you want to enter? Y/N"<<endl;
                        cout<<numer<<"/"<<denom<<endl;
                        cin>>cnCseTh;
                    } while (cnCseTh=='N'||cnCseTh=='n');

                    //Calculate total value of the holding
                    fract=(numer*1.0f)/denom;
                    ppshare=whleDlr+fract;
                    value=numShar*ppshare;

                    //Output value
                    cout<<fixed<<showpoint<<setprecision(2);
                    cout<<"The value of your holdings is: $"<<value<<endl; 

                    cout<<"Would you like to calculate the value of your holdings again? Y/N"<<endl;
                    cin>>cntn3;
                } while (cntn3=='Y'||cntn3=='y');
                break;

            case 4:
                cout<<"Executing Savitch_8thEd_Chap4_Prob4."<<endl;
                cout<<" "<<endl;
                cout<<" "<<endl;
                
                char cntn4; //variable for continuation case 4
                do{
                
                    //Declare variables
                    float priceYr, priceTd, inflRte;      //price one year ago,price today,inflation rate

                    //Obtain inputs
                    cout<<"Enter the price of an item one year ago: $";
                    cin>>priceYr;
                    cout<<"Enter the price of that same item today: $";
                    cin>>priceTd;

                    //Calculate inflation rate
                    inflRte=((priceTd-priceYr)/priceYr)*PERCENT;

                    //Output inflation rate
                    cout<<"The rate of inflation is: "<<inflRte<<"%"<<endl;


                    cout<<"Would you like to calculate the rate of inflation again? Y/N"<<endl;
                    cin>>cntn4;
                } while (cntn4=='Y'||cntn4=='y');
                
                break;

            case 5:
                cout<<"Executing Savitch_8thEd_Chap4_Prob5."<<endl;
                cout<<" "<<endl;
                cout<<" "<<endl;
                
                char cntn5; //variable for continuation case 5
                do{

                    //Declare variables
                    float priceYr, priceTd, inflRte       //price one year ago,price today,inflation rate
                    ,priceNy, priceTY, inflPrt;           //price next year,price in two years,inflation percent

                    //Obtain inputs
                    cout<<"Enter the price of an item one year ago: $";
                    cin>>priceYr;
                    cout<<"Enter the price of that same item today: $";
                    cin>>priceTd;

                    //Calculate inflation rate
                    inflRte=((priceTd-priceYr)/priceYr);
                    inflPrt=inflRte*PERCENT;

                    //Calculate price next year and the year after
                    priceNy=(priceTd*inflRte)+priceTd;
                    priceTY=(priceNy*inflRte)+priceNy;

                    //Output inflation rate
                    cout<<"The rate of inflation is: "<<inflPrt<<"%"<<endl
                        <<"The estimated price of that item next year is: $"<<priceNy<<endl
                        <<"The estimated price of that item in two years is: $"<<priceTY<<endl;


                    cout<<"Would you like to calculate the rate of inflation again? Y/N"<<endl;
                    cin>>cntn5;
                } while (cntn5=='Y'||cntn5=='y');
                break;
                
            case 6:
                cout<<"Executing Savitch_8thEd_Chap4_Prob6."<<endl;
                cout<<" "<<endl;
                cout<<" "<<endl;
                char cntn7; //variable for continuation case 6
                float inBal, mIntRte, intDue;   //initial balance,interest due
                unsigned short numMnth; //monthly interest rate,number of months
                do{
                    //Obtain inputs
                    cout<<"Enter the initial balance: $";
                    cin>>inBal;
                    cout<<"Enter the number of months for which interest must be paid: ";
                    cin>>numMnth;
                    cout<<"Enter the monthly interest rate: %";
                    cin>>mIntRte;

                    //Convert mIntRte to a decimal
                    mIntRte/=PERCENT;

                    //Loop to calculate the interest due
                    unsigned short nLoop;
                    for (nLoop=0; nLoop<numMnth; nLoop++){
                        intDue=inBal*mIntRte;
                        inBal+=intDue;
                    }

                    cout<<"The interest due is: $"<<intDue<<endl;


                    cout<<"Would you like to run the program again? Y/N"<<endl;
                    cin>>cntn7;
                } while (cntn7=='Y'||cntn7=='y');
                break;

            case 7:
                cout<<"Executing Savitch_8thEd_Chap4_Prob7."<<endl;
                cout<<" "<<endl;
                cout<<" "<<endl;
                
                //Declare variables
                float m1, m2, dist, force; //mass one,mass two,distance between objects,force of gravity
                char cntn6; //variable for continuation case 6
                do{
                    //Obtain inputs
                    cout<<"Enter the mass of body one in kg: ";
                    cin>>m1;
                    cout<<"Enter the mass of body two in kg: ";
                    cin>>m2;
                    cout<<"Enter the distance between the two bodies in m: ";
                    cin>>dist;
                    
                    //Convert units and calculate force
                    m1*=KG2G;
                    m2*=KG2G;
                    dist*=M2CM;       
                    force=(G*m1*m2)/(dist*dist); 
                    
                    //Output results
                    cout<<"The force of gravity between the two bodies is: "<<force<<"dynes."<<endl;
                        
                    
                    cout<<"Would you like to run the program again? Y/N"<<endl;
                    cin>>cntn6;
                } while (cntn6=='Y'||cntn6=='y');
                break;

            case 8:
                cout<<"Executing Savitch_8thEd_Chap4_Prob15."<<endl;
                cout<<" "<<endl;
                cout<<" "<<endl;
                break;

            case 9:
                cout<<"Executing Savitch_8thEd_Chap4_Prob15."<<endl;
                cout<<" "<<endl;
                cout<<" "<<endl;
                break;

            case 10:
                cout<<"Executing Savitch_8thEd_Chap4_Prob15."<<endl;
                cout<<" "<<endl;
                cout<<" "<<endl;
                break;


            default:
                cout<<"Not a valid menu item. No problem will be solved."<<endl;
                cout<<" "<<endl;
        }
        
        //Input Continuation Variable
        cout<<"Would you like to solve another problem? Y/N"<<endl;
        cin>>contin;
    } while (contin=='Y'||contin=='y');
    
    cout<<"Goodbye!"; 
    return 0;
}
