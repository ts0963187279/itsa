/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int binary[8] = {0};  
    int hex;  
    while(cin >> hex){  
        if(hex >0)  
            for(int i=0;i<8;i++){  
                binary[i] = hex %2;  
                hex /= 2;  
            }  
        else{  
            hex *= -1;  
            hex -= 1;  
            for(int i=0;i<8;i++){  
                binary[i] = 1;  
                binary[i] -= hex %2;  
                hex /= 2;  
            }  
        }     
        for(int i=7;i>-1;i--){  
            cout << binary[i];  
        }  
        cout << endl;  
    }  
    return 0;  
}  
