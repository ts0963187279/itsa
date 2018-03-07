/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int n,max;  
    int time[24] ={0};  
    cin >> n;  
    int s[n],d[n];  
    for(int i=0;i<n;i++){  
        cin >> s[i] >> d[i];  
        for(int j=s[i];j<d[i];j++){  
            time[j]++;  
        }  
    }     
    max = time[0];  
    for(int i=0;i<24;i++){  
        if(time[i]>max)  
            max = time[i];  
    }  
    cout << max << endl;  
    return 0;  
}  
