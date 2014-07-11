/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 10, 2014, 1:36 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
     cout<<"Executing Savitch_8thEd_Chap4_Prob15."<<endl;
                cout<<" "<<endl;
                cout<<" "<<endl;
                
                //Declare variables
                float priceYr, priceTd, inflRte;
                
                //Obtain inputs
                cout<<"Enter the price of an item one year ago: $";
                cin>>priceYr;
                cout<<"Enter the price of that same item today: $";
                cin>>priceTd;
                
                inflRte=((priceTd-priceYr)/priceYr)*100;
                
                //Output inflation rate
                cout<<"The rate of inflation is: "<<inflRte<<"%"<<endl;
                
              

    return 0;
}

