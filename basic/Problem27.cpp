/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int a,b;  
    char ans[5],test[5];  
    cin >> ans;  
    while(1){  
        cin >> test;  
        if(test[0] == '0' && test[1] == '0' && test[2] == '0' && test[3] == '0')  
            break;  
        a=0;  
        b=0;  
        for(int i=0;i<4;i++){  
            for(int j=0;j<4;j++){  
                if(i==j){  
                    if(test[i] == ans[j]){  
                        a++;  
                    }  
                }  
                else if(test[i] == ans[j])  
                    b++;  
            }  
        }  
        cout << a <<"A"<< b <<"B"<<endl;  
    }  
    return 0;  
}  
