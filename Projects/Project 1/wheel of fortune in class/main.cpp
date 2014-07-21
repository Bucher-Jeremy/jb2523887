/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 21, 2014, 12:39 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int main(int argc, char** argv) {
    
    
    //Declare variables
    char round=1, randNum, guess, vowel, count=0,mill=0,halfcar=0, shpree=0, mtrhm=0, trip=0;
    short wedge, rndTot, topprz=0; //round total
    int winngs; //winnings
    char a='*',s='*',h='*',p='*',y='*',c='*',l='*',m='*'; //initialize letters of the phrase to asterisks

    //Welcome Statement
    cout<<"Welcome to the Wheel of Fortune"<<endl;
    
    /*
      
      1=Top dollar
      2=900
      3=800
      4=700
      5=600
      6=500
      7=400
      8=300
      9=850
      10=750
      11=650
      12=550
      13=450
      14=350
      15=1/2 car
      16=1/2car
      17=250
      18=bankrupt
      19=bankrupt ==4
      20=bankrupt
      21=gift
      22=prize
      23=wild
      24=mill
     */
    cout<<"Round One!"<<endl
       <<"Your category is: Phrases. You have 12 tries to guess the letters that make up the phrase."<<endl
       <<"Lets spin the wheel."<<endl
       <<endl;
       
    

    while(count<12){
       //Set the random seed and get random number
       srand(static_cast<unsigned int>(time(0)));
       randNum=rand()%24+1;

       wedge=(randNum==2)?900:
             (randNum==3)?800:
             (randNum==4)?700:
             (randNum==5)?600:
             (randNum==6)?500:
             (randNum==7)?400:
             (randNum==8)?300:
             (randNum==9)?850:
             (randNum==10)?750:
             (randNum==11)?650:
             (randNum==12)?550:
             (randNum==13)?450:
             (randNum==14)?350:
             (randNum==1)?1500:
             (randNum==15)?0:  
             (randNum==16)?0:
             (randNum==17)?250:
             (randNum==21)?0:
             (randNum==22)?0:
             (randNum==23)?200:0;

       if(randNum!=18||randNum!=19||randNum!=20){               //18 19 & 20 are bankruptcies 
           
           if(randNum>=2&&randNum<=14||randNum==17||randNum==23){
               cout<<"You spun the $"<<wedge<<" wedge!"<<endl;
           }
           else if(randNum==1){
               topprz++;
               cout<<"You got the Top Prize Wedge!! It's worth $1500!"<<endl;
           }
           else if(randNum==15||randNum==16){
               halfcar++;              
               cout<<"You landed on one of the Half Car Wedges!"<<endl;
           }
           else if(randNum==21){
               shpree++;
               cout<<"You got the $1,000 Shopping Spree Wedge!"<<endl;
           }
           else if(randNum==22){ 
               mtrhm++;
               cout<<"You landed on the Motor Home Wedge!! "<<endl;
           }               

           //Obtain Input
           cout<<"You may now guess an uppercase consonant."<<endl;
           cin>>guess;          
           
           //buying a vowel
           if(a!='A'){
               cout<<"Do you want to buy a vowel? (Yes/No)"<<endl;
               cin>>vowel;
               if(vowel=='Y'){
                   rndTot-=250;
                   a='A';
               }
           }
           //Determine if guess was correct and award money
           if(guess=='S'){
               //if(randNum)
               cout<<"S occurs two times and you got $";
               winngs=wedge*2;
               cout<<winngs<<" congratulations!"<<endl;
               s='S';
               count++;
           }
           else if (guess=='H'){
               cout<<"H occurs one time and you got $";
               winngs=wedge;
               cout<<winngs<<" congratulations!"<<endl;
               h='H';
               count++;
           }
           else if (guess=='P'){
               cout<<"P occurs two times and you got $";
               winngs=wedge*2;
               cout<<winngs<<" congratulations!"<<endl;
               p='P';
               count++;
           }
           else if (guess=='Y'){
               cout<<"Y occurs one time and you got $";
               winngs=wedge;
               cout<<winngs<<" congratulations!"<<endl;
               y='Y';
               count++;
           }
           else if (guess=='C'){
               cout<<"C occurs one time and you got $";
               winngs=wedge;
               cout<<winngs<<" congratulations!"<<endl;
               c='C';
               count++;
           }
           else if (guess=='L'){
               cout<<"L occurs one time and you got $";
               winngs=wedge;
               cout<<winngs<<" congratulations!"<<endl;
               l='L';
               count++;
           }
           else if (guess=='M'){
               cout<<"M occurs one time and you got $";
               winngs=wedge;
               cout<<winngs<<" congratulations!"<<endl;
               m='M';
               count++;
           }
           else{
               cout<<"Your guess was unsuccessful."<<endl;
               count++;
           }
           
       }
       else{
           rndTot=0;
           winngs=0;
           cout<<"You spun a Bankruptcy Wedge"<<endl;
       }
       
       rndTot+=winngs;
       cout<<"Your total winnings for this round is $"<<rndTot<<"."<<endl;
       cout<<a<<s<<" "<<h<<a<<p<<p<<y<<" "<<a<<s<<" "<<a<<" "<<c<<l<<a<<m<<endl
       <<endl;
               
       cout<<"You may now spin again."<<endl
           <<endl;
       
       if(a=='A'&&s=='S'&&h=='H'&&p=='P'&&y=='Y'&&c=='C'&&l=='L'&&m=='M'){
           count+=4; //If all the letters of the phrase are aquired, the counter is 8, so add 4 to jump from the letter guessing loop
       }
    } 
    
    if(halfcar>=2){
       cout<<"You also won a brand new car!!"<<endl;
    }
    else if(shpree>0){
       cout<<"Congratulations on your $1,000 Shopping Spree!!"<<endl;
    }
    else if(mtrhm>0){
       cout<<"You also won a new motor home."<<endl;
    }
    else if(trip>0){
       cout<<"Congratulations on your paid trip to a destination of your choice!"<<endl;
    }

    cout<<"Thats correct! The phrase is:"<<endl
       <<"AS HAPPY AS A CLAM"<<endl;

    //cout<<noCshPz;
 

    return 0;
}


