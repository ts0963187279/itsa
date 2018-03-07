/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int inhour,inmin,outhour,outmin;  
    int alltime = 0;  
    int time = 0;  
    int money = 0;  
    cin >> inhour >> inmin >> outhour >> outmin;  
    if (outmin < inmin){  
        alltime += outmin-inmin+60;  
        outhour --;  
    }  
    else   
        alltime += outmin-inmin;  
    alltime += (outhour-inhour)*60;  
    while(alltime >30){  
        if(time <4){  
            money += 30;  
        }  
        else if(time <8){  
            money += 40;  
        }  
        else{  
            money += 60;  
        }  
        alltime -=30;  
        time ++;  
    }  
    cout << money <<endl;  
    return 0;  
}  
