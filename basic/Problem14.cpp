/*Author: Vector Wang*/
#include <iostream>  

using namespace std;  
int main(int argc, char *argv[]) {  
    char forward[10];  
    int error;  
    int i,j=0;  
    gets(forward);  
    for(i = 0;forward[i] != NULL;i++){  
    }  
    for(int z =0 ; z <= i ;z++){  
        if(forward[i-1] != forward[j]){  
            error = 1;  
            break;  
        }  
        else  
            error = 0;  
        j++;  
        i--;  
    }  
    if(error != 0)  
        cout << "NO" << endl;  
    else  
        cout << "YES" <<endl;  
    return 0;  
}  
