/*Author: Vector Wang*/
#include <iostream>  
#include <string.h>  
#include <stdlib.h>  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */  
using namespace std;  
int main(int argc, char *argv[]) {  
    char str[50];  
    char *hold;  
    int size;   
    double average ;  
    while(cin.getline(str,50)){  
        size = 0;  
        average =0;  
        hold = strtok(str," ");  
        average += atoi(hold);  
        while(hold!=NULL){  
            hold = strtok(NULL," ");  
            if(hold!=NULL){  
                average += atoi(hold);  
                size ++;  
            }  
        }  
        size ++;  
        cout << "Size: " << size <<endl;  
        printf("Average: %.3lf\n",average/size);  
    }  
    return 0;  
}  
