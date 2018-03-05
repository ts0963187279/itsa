/*Author: Vector Wang*/
#include <iostream>    
#include<string>    
#include<algorithm>    
     
using namespace std;    
     
int main() {
    int n;    
    cin >> n;
    getchar();
    while(n -- >0)
    {    
        string text;
        getline(cin, text);    
        reverse(text.begin(), text.end());
        cout << text << endl;    
    }    
    return 0;    
} 
