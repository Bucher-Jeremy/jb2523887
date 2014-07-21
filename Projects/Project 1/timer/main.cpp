/* 
 * File:   main.cpp
 * Author: Jeremy
 *
 * Created on July 20, 2014, 4:38 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(int argc, char** argv) {
 unsigned long begTime, //beginning time
                  curTime;//current time
    short elaTime;//elapsed time
    
    //timer
    begTime=clock()/CLOCKS_PER_SEC;
    do{
        curTime=clock()/CLOCKS_PER_SEC;
        elaTime=curTime-begTime;
    } while (elaTime<1);
    cout<<elaTime;
    
    //timer
    begTime=clock()/CLOCKS_PER_SEC;
    do{
        curTime=clock()/CLOCKS_PER_SEC;
        elaTime=curTime-begTime;
    } while (elaTime<1);
    cout<<elaTime;
    return 0;
}
