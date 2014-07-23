/* 
 * File:   main.cpp
 * Author: Bucher Jeremy
 * Created on July 20, 2014, 4:02 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here
int main(int argc, char** argv) {
     
    //Declare variables
    char randNum, guess, vowel, phrse, count=1, halfcar=0, shpree=0, mtrhm=0, trip=0;
    short wedge, winngs=0, rndTot=0; 
    char a='*',s='*',h='*',p='*',y='*',c='*',l='*',m='*'; //initialize letters of the phrase to asterisks
    string as="AS", happy="HAPPY", a_="A", clam="CLAM";
    string _as,_happy,_a,_clam;
    
    //Welcome Statement
    cout<<"Welcome to the Wheel of Fortune"<<endl;
    
    //Introduce category and output the phrase in asterisks
    cout<<"Round One!"<<endl
       <<"Your category is: Phrases."<<endl
       <<"You have 12 tries to guess the letters that make up the phrase."<<endl
       <<a<<s<<" "<<h<<a<<p<<p<<y<<" "<<a<<s<<" "<<a<<" "<<c<<l<<a<<m<<endl
       <<"Lets spin the wheel."<<endl
       <<endl;

    //do while loop to limit the # of tries to 12
    do{
       //Set the random seed and get random number
       srand(static_cast<unsigned int>(time(0)));
       randNum=rand()%24+1;

       //Ternary operator to determine value of the wedge based on the random number received
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
             (randNum==17)?250:
             (randNum==23)?200:0;
           
             

       //if the wedge was not a bankruptcy 
       if(randNum!=18||randNum!=19||randNum!=20){               //18 19 & 20 are bankruptcies 
           
           //these are the wedges that are assigned a monetary value
           if(randNum>=2&&randNum<=14||randNum==17||randNum==23){
               cout<<"You spun the $"<<wedge<<" wedge!"<<endl;
           }
           else if(randNum==1){
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

           //input consonant guess
           cout<<"You may now guess an uppercase consonant."<<endl;
           cin>>guess;          
           
           //buying a vowel if it hasn't already been bought
           if(a!='A'){
               cout<<"Do you want to buy a vowel for $250? (Y/N)"<<endl;
               cin>>vowel;
               if(vowel=='Y'){
                   rndTot-=250;
                   a='A';
               }
           }
           
           //Determine if guess was correct and award money
           if(guess=='S'){
               cout<<"S occurs two times and you got $";
               winngs=wedge*2;
               cout<<winngs<<" congratulations!"<<endl;
               s='S';
           }
           else if (guess=='H'){
               cout<<"H occurs one time and you got $";
               winngs=wedge;
               cout<<winngs<<" congratulations!"<<endl;
               h='H';
           }
           else if (guess=='P'){
               cout<<"P occurs two times and you got $";
               winngs=wedge*2;
               cout<<winngs<<" congratulations!"<<endl;
               p='P';
           }
           else if (guess=='Y'){
               cout<<"Y occurs one time and you got $";
               winngs=wedge;
               cout<<winngs<<" congratulations!"<<endl;
               y='Y';
           }
           else if (guess=='C'){
               cout<<"C occurs one time and you got $";
               winngs=wedge;
               cout<<winngs<<" congratulations!"<<endl;
               c='C';
           }
           else if (guess=='L'){
               cout<<"L occurs one time and you got $";
               winngs=wedge;
               cout<<winngs<<" congratulations!"<<endl;
               l='L';
           }
           else if (guess=='M'){
               cout<<"M occurs one time and you got $";
               winngs=wedge;
               cout<<winngs<<" congratulations!"<<endl;
               m='M';
           }
           else{
               cout<<"Your guess was unsuccessful."<<endl;
               winngs=0;
           } 
           count++;
       }
       //if the wedge was a bankruptcy
       else{
           rndTot=0;
           winngs=0;
           cout<<"You spun a Bankruptcy Wedge"<<endl;
       }
       rndTot+=winngs;
       
       //output the phrase with asterisks replaced by the letters that have been bought or guessed
       cout<<a<<s<<" "<<h<<a<<p<<p<<y<<" "<<a<<s<<" "<<a<<" "<<c<<l<<a<<m<<endl
       <<endl;
       
       cout<<"Would you like to guess the phrase? (Y/N)"<<endl;
       cin>>phrse;
       
       //if user wants to guess phrase 
       if (phrse=='Y'){
           //input phrase
           cout<<"Type the phrase is all capital letters."<<endl;
           cin>>_as; 
           cin>>_happy;
           cin>>_as;
           cin>>_a;
           cin>>_clam;
           //if the input is correct the user wins
           if(as==_as&&happy==_happy&&a_==_a&&clam==_clam){
               cout<<"Thats correct!!! You win the round."<<endl;
               //if the user guesses the correct phrase before obtaining 4 letters they get 20000
               if (count<=4){
                   cout<<"You get  20,000 dollars!"<<endl;
                   rndTot+=20000;
               }
               //otherwise they get 7000
               else{
                   cout<<"You get 7,000 dollars"<<endl;
                   rndTot+=7000;
               }
               //increment counter by 12 to escape the letter guessing loop
               count+=12;
           }
           //if the input is false the user continues guessing and losses 1000 dollars
           else{
               cout<<"Thats incorrect."<<endl;
               rndTot-=1000;
               rndTot+=winngs;
               cout<<"Your total winnings for this round is $"<<rndTot<<"."<<endl;
               cout<<"You may now spin again."<<endl;
           }
       }
       //if they don't want to guess the phrase they continue guessing letters
       else{
           rndTot+=winngs;
           cout<<"Your total winnings for this round is $"<<rndTot<<"."<<endl;
           cout<<"You may now spin again."<<endl;
       }
       
       //if all the letters are revealed the game is over 
       if(a=='A'&&s=='S'&&h=='H'&&p=='P'&&y=='Y'&&c=='C'&&l=='L'&&m=='M'){
           count+=4; //If all the letters of the phrase are acquired, the counter is 8, so add 4 to jump from the letter guessing loop
       }
    }while(count<12); 
    
    //output the amount the user won
    cout<<"You won $"<<rndTot<<"!"<<endl;
    
    //If they won something other than money output that as well
    if(halfcar>=2){
       cout<<"You also won a brand new car!!"<<endl;
    }
    if(shpree>0){
       cout<<"Congratulations on your $1,000 Shopping Spree!!"<<endl;
    }
    if(mtrhm>0){
       cout<<"You also won a new motor home."<<endl;
    }
    if(trip>0){
       cout<<"Congratulations on your paid trip to a destination of your choice!"<<endl;
    } 

    return 0;
}


