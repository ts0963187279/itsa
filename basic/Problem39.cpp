/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int n;  
    int t[3];  
    int p,m,f ;  
    cin >> n;  
    for(int i=0;i<n;i++){  
        p = 0; m = 0; f = 0;  
        for(int j=0;j<3;j++)  
            cin >> t[j];  
        if(t[0]>=60&&t[1]>=60&&t[2]>=60)  
            p = 1;  
        if(((t[0]<=60&&t[1]>=60&&t[2]>=60)||(t[1]<=60&&t[0]>=60&&t[2]>=60)||(t[2]<=60&&t[0]>=60&&t[1]>=60))&&t[1]+t[2]+t[0]>=220)  
            p = 1;  
        if(((t[0]<=60&&t[1]>=60&&t[2]>=60)||(t[1]<=60&&t[0]>=60&&t[2]>=60)||(t[2]<=60&&t[0]>=60&&t[1]>=60))&&t[1]+t[2]+t[0]<220)  
            m = 1;  
        if(t[0]>=80||t[1]>=80||t[2]>=80)  
            m = 1;  
        if(p == 1){  
            cout << "P"<<endl;  
              
        }  
        else if(m == 1){  
            cout << "M"<<endl;  
        }  
        else  
            cout << "F" <<endl;  
    }  
    return 0;  
}  
