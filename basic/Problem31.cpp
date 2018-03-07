/*Author: Vector Wang*/
#include <iostream>  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
using namespace std;  
int main(int argc, char *argv[]) {  
    char str[99999];  
    char *hold;  
    int number[12];  
    int t = 0,x = 1;  
    while(gets(str)){  
        x = 1;  
        hold = strtok(str," ");  
        number[0] = atoi(hold);  
        while(hold != NULL){  
            hold = strtok(NULL," ");  
            if(hold != NULL){  
                number[x] = atoi(hold);  
                x++;  
            }  
        }  
        for(int i=0;i<x;i++){  
            t = 0;  
            for(int j=0;j<x;j++){  
                if(number[i] == number[j])  
                    t++;  
                if(t > (x)/2){  
                    cout << number[i] <<endl;  
                    break;  
                }         
            }  
            if(t > (x)/2)  
                break;  
        }  
        if(t <= (x)/2)  
            cout << "NO" <<endl;  
    }  
    return 0;  
}  
