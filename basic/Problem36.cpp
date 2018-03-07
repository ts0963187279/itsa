/*Author: Vector Wang*/
#include <iostream>  
#include <algorithm>   
using namespace std;  
int main(int argc, char *argv[]) {  
    int year;  
    while(cin >> year){  
        if(year%400 ==0 || (year%100 != 0 && year %4 ==0))  
            cout << "Bissextile Year"<<endl;  
        else  
            cout << "Common Year"<<endl;  
    }  
    return 0;  
} 
