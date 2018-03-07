/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
int test (int ,int);  
int main(int argc, char *argv[]) {  
    int a,b;  
    cin >> a >> b;  
    cout << test(a,b)<<endl;  
    return 0;  
}  
int test(int a ,int b){  
    if(b==0)  
        return a;  
    else if(a > b){  
        test(b,a%b);  
    }  
    else {  
        test(a,b%a);  
    }  
           
} 
