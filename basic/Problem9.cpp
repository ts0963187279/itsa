/*Author: Vector Wang*/
#include <iostream>    

using namespace std;  
int main(int argc, char *argv[]) {  
    int input;  
    long long int t = 0;  
    while(cin >> input){  
        for(int i=1;i<=input;i++){  
            if(i%3 == 0){  
                t += i;  
            }  
        }  
        cout << t << endl;  
        t = 0;  
    }  
    return 0;  
}  
