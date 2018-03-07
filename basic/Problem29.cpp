/*Author: Vector Wang*/
#include <iostream>  
#include <stdlib.h>  
#include <stdio.h>  
using namespace std;  
int main(int argc, char *argv[]) {  
    char first,id[10];  
    int x1,x2,p =0;  
    long int tid;  
    first = getchar();  
    cin >> id;  
    switch(first){  
        case 'A' : x1 = 1;x2 = 0;break ;   
        case 'B' : x1 = 1;x2 = 1;break ;  
        case 'C' : x1 = 1;x2 = 2;break ;  
        case 'D' : x1 = 1;x2 = 3;break ;  
        case 'E' : x1 = 1;x2 = 4;break ;  
        case 'F' : x1 = 1;x2 = 5;break ;  
        case 'G' : x1 = 1;x2 = 6;break ;  
        case 'H' : x1 = 1;x2 = 7;break ;  
        case 'J' : x1 = 1;x2 = 8;break ;  
        case 'K' : x1 = 1;x2 = 9;break ;  
        case 'L' : x1 = 2;x2 = 0;break ;  
        case 'M' : x1 = 2;x2 = 1;break ;  
        case 'N' : x1 = 2;x2 = 2;break ;  
        case 'P' : x1 = 2;x2 = 3;break ;  
        case 'Q' : x1 = 2;x2 = 4;break ;  
        case 'R' : x1 = 2;x2 = 5;break ;  
        case 'S' : x1 = 2;x2 = 6;break ;  
        case 'T' : x1 = 2;x2 = 7;break ;  
        case 'U' : x1 = 2;x2 = 8;break ;  
        case 'V' : x1 = 2;x2 = 9;break ;  
        case 'X' : x1 = 3;x2 = 0;break ;  
        case 'Y' : x1 = 3;x2 = 1;break ;  
        case 'W' : x1 = 3;x2 = 2;break ;  
        case 'Z' : x1 = 3;x2 = 3;break ;  
        case 'I' : x1 = 3;x2 = 4;break ;  
        case 'O' : x1 = 3;x2 = 5;break ;                                                                                                  
    }  
    tid = atoi(id);  
    p += x1 + 9*x2;  
    p += tid%10;  
    tid /=10;  
    for(int i=1;i<=8;i++){  
        p += i*tid%10;  
        tid /=10;  
    }  
    if(p%10==0){  
        cout << "CORRECT!!!" <<endl;  
    }  
    else  
        cout << "WRONG!!!" << endl;  
    return 0;  
}  
