/*Author: Vector Wang*/
#include <iostream>  
#include <algorithm>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int t[4];  
    for(int i=0;i<4;i++){  
        cin >> t[i];  
    }  
    if(t[0]==t[1]&&t[1]==t[2]&&t[3]==t[2])  
        cout << "WIN" <<endl;  
    else if (t[0]==t[1]||t[0]==t[2]||t[0]==t[3]||t[1]==t[2]||t[1]==t[3]||t[2]==t[3]){  
        sort(t,t+4);  
        if(t[0]==t[1] && t[2]==t[3]){  
            if(t[0]+t[1] > t[2]+t[3])  
                cout << t[0]+t[1]<<endl;  
            else  
                cout << t[2]+t[3]<<endl;  
        }  
        else if ((t[0] == t[1]&&t[1]==t[2])||(t[1]==t[2]&&t[2]==t[3]))  
            cout << "R" <<endl;  
        else if(t[0]==t[1])  
            cout << t[2] + t[3] <<endl;  
        else if(t[1]==t[2])  
            cout << t[3] + t[0] <<endl;  
        else if(t[2]==t[3])  
            cout << t[1] + t[0] <<endl;  
    }  
    else  
        cout << "R" <<endl;  
    return 0;  
}  
