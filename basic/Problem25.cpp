/*Author: Vector Wang*/
#include <iostream>  
#include <string.h>  
#include <stdio.h>  
#include <stdlib.h>  

using namespace std;  
int main(int argc, char *argv[]) {  
    int n,x,tmp[33],all;  
    char str[33];  
    cin >> n;  
    getchar();  
    for(int i=0;i<n;i++){  
        all =0;  
        cin.getline(str,33);  
        for(x=0; str[x] != NULL;x++){  
        }  
        for(int j=0;j<x;j++){  
            tmp[j] = str[j];  
            all += tmp[j];  
        }  
        cout << all <<endl;  
    }  
    return 0;  
}  
