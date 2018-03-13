/*Author: Vector Wang*/
using namespace std;  
#include <iostream>  
int main(){  
    int n;  
    cin >> n;  
    while(n-- >0){  
        int N;  
        cin >> N;  
        int M;  
        cin >> M;  
        while(true){  
            double tmp;  
            int leave ;  
            leave = N * 3;  
            if(leave % 4 == 0)  
                leave = leave / 4;  
            else  
                leave = leave / 4 + 1;  
            N -= leave;  
            if(N < M)  
                break;  
            N = N + M;  
        }  
        cout << N <<endl;  
    }  
    return 0;  
}  
