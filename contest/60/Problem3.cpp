/*Author: Vector Wang*/
#include <iostream>    
using namespace std;    
     
int main() {    
    int s;
    cin >> s;    
    while(s -- >0)
    {    
        int n, m;    
        cin >> n >> m;    
        int sat[n];
        int q, r;    
        int sum = 0;    
        for(int i = 0;i < n;i++)    
        {    
            cin >> sat[i];    
        }    
        for(int i = 0;i < m;i++)    
        {    
            cin >> q >> r;    
            for(int j = q-1;j <= r-1;j++)    
            {    
                sum = sum + sat[j];    
            }    
            cout << sum << endl;    
            sum = 0;    
        }    
    }    
    return 0;    
}




