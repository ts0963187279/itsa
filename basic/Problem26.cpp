/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
typedef struct{  
    int number;  
    int sum;  
}X;  
int main(int argc, char *argv[]) {  
    int n,tmp;  
    cin >> n;  
    X x[n];  
    X xtmp;  
    for(int i =0;i<n;i++){  
        x[i].sum = 0;  
        cin >> x[i].number;  
        tmp = x[i].number;  
        for(int j=0;tmp != 0;j++){  
            x[i].sum += tmp%10;  
            tmp /= 10;  
        }  
    }  
    for(int i=0;i<n;i++){  
        for(int j=0;j<n-1;j++){  
            if(x[j].sum == x[j+1].sum)  
                if(x[j].number > x[j+1].number){  
                    xtmp = x[j];  
                    x[j] = x[j+1];  
                    x[j+1] = xtmp;  
                }  
            if(x[j].sum > x[j+1].sum){  
                xtmp = x[j];  
                x[j] = x[j+1];  
                x[j+1] = xtmp;  
            }     
        }  
    }  
    for(int i=0;i<n;i++){  
        cout << x[i].number ;  
        if(i+1!=n)  
            cout << " ";  
        else   
            cout << endl;  
    }  
    return 0;  
}  
