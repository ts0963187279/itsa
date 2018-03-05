/*Author: Vector Wang*/
#include <iostream>    
using namespace std;    
     
int main() {    
    int n;    
    cin >> n;    
    while(n-- >0)
    {    
        int years;    
        cin >> years;    
        if(years %400==0)    
        {    
            cout << "Bissextile Year" << endl;    
        }    
        else if(years%4==0 && years%100!=0)    
        {    
            cout << "Bissextile Year" << endl;    
        }    
        else    
        {    
            cout << "Common Year" << endl;    
        }    
    }    
    return 0;    
}  
