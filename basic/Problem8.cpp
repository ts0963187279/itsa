/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int input;  
    int x=0;  
    while(cin >> input){  
        for(int i=2;i<input;i++){  
            if(input%i == 0)  
                x++;  
        }  
        if(x != 0){  
            cout << "NO" << endl;  
        }  
        else   
            cout << "YES" <<endl;  
    }  
    return 0;  
}  
