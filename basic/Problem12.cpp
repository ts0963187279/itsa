/*Author: Vector Wang*/
#include <iostream>  

using namespace std;  
int test (int );  
int main(int argc, char *argv[]) {  
    int k;  
    cin >> k;  
    cout << test(k) << endl;  
    return 0;  
}  
int test(int k){  
    if(k <= 1)  
        return k+1;  
    else  
        return test(k-1)+test(k/2);  
}  
