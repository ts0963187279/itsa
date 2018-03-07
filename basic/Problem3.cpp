/*Author: Vector Wang*/
#include <iostream>  
#include <math.h>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int x,y;  
    while(cin >> x >> y){  
        if(sqrt(pow(x,2)+pow(y,2)) <= 100)  
            cout << "inside" <<endl;  
        else  
            cout << "outside" << endl;  
    }  
      
    return 0;  
} 
