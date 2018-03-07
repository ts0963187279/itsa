/*Author: Vector Wang*/
#include <iostream>  

using namespace std;  
int main(int argc, char *argv[]) {  
    double h,w;  
    int n;  
    while(cin >> h >> n){  
        if(n == 1){  
            w = (h-80)*0.7;  
        }  
        else{  
            w = (h-70)*0.6;  
        }  
        printf("%.1lf\n",w);  
    }  
    return 0;  
}  
