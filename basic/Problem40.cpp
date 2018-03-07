/*Author: Vector Wang*/
#include <iostream>  
#include <string.h>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int isbn[10];  
    char str[40];  
    for(int i=0;i<10;i++){  
        cin >> str[i];  
        switch(str[i]){  
            case '0' : isbn[i] = 0;break;  
            case '1' : isbn[i] = 1;break;  
            case '2' : isbn[i] = 2;break;  
            case '3' : isbn[i] = 3;break;  
            case '4' : isbn[i] = 4;break;  
            case '5' : isbn[i] = 5;break;  
            case '6' : isbn[i] = 6;break;  
            case '7' : isbn[i] = 7;break;  
            case '8' : isbn[i] = 8;break;  
            case '9' : isbn[i] = 9;break;  
            case 'X' : isbn[i] = 10;break;  
        }   
    }  
    for(int i=0;i<2;i++){  
        for(int j=9;j>=0;j--){  
            for(int k=0;k<j;k++){  
                isbn[j] += isbn[k];  
            }  
        }  
    }  
    if(isbn[9]%11==0)  
        cout << "YES"<<endl;  
    else  
        cout << "NO"<<endl;  
    return 0;  
}  
