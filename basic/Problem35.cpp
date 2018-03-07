/*Author: Vector Wang*/
#include <iostream>  
#include <algorithm>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int n,t,m,k,total;  
    cin >> n;  
    for(int i=0;i<n;i++){  
        total = 0;  
        cin >> t >> m >> k;  
        int item[k];  
        for(int j=0;j<k;j++){  
            cin >> item[j];  
        }  
        sort(item,item+k);  
        for(int j=0;j<m;j++){  
            total += item[j];  
        }  
        if(total <= t)  
            cout << total << endl;  
        else  
            cout << "Impossible" << endl;  
    }  
    return 0;  
}  
