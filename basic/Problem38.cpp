/*Author: Vector Wang*/
#include <iostream>  
#include <iomanip>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int n;  
    double summer =0,nsummer =0;  
    cin >> n;  
    for(int i = 0;i<n;i++){  
        if(i < 120){  
            summer += 2.10;  
            nsummer += 2.10;  
        }  
        else if(i < 330){  
            summer += 3.02;  
            nsummer += 2.68;  
        }  
        else if(i < 500){  
            summer += 4.39;  
            nsummer += 3.61;  
        }  
        else if(i < 700){  
            summer += 4.97;  
            nsummer +=4.01;  
        }  
        else{  
            summer += 5.63;  
            nsummer +=4.50;  
        }  
    }  
    cout << fixed <<"Summer months:"<< setprecision(2) <<summer <<endl<<"Non-Summer months:"<<nsummer<<endl;;  
    return 0;  
}  
