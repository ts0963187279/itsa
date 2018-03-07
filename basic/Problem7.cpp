/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(int argc, char *argv[]) {  
    char operate;  
    int a1,a2,b1,b2;  
    int n;  
    cin >> n;  
    for(int i=0;i<n;i++){  
        cin >> operate >>a1 >> b1 >> a2 >> b2;  
        if(operate == '-'){  
            cout << a1 - a2 << " " << b1 - b2 << endl;  
        }  
        if(operate == '+'){  
            cout << a1 + a2 << " " << b1 + b2 << endl;  
        }  
        if(operate == '*'){  
            cout << a1*a2 - b1*b2 << " " << a1*b2 + a2*b1 <<endl;  
        }  
    }  
    return 0;  
}  
