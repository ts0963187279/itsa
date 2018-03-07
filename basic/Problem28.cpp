/*Author: Vector Wang*/
#include <iostream>  

using namespace std;  
int main(int argc, char *argv[]) {  
    long long int super,f[3],hand,money = 0;  
    int n,t[7],tt[7]={0};  
    int gmoney[7] = {2000000,200000,40000,10000,4000,1000,200};  
    cin >> super >> f[0] >> f[1] >> f[2] ;  
    cin >> n;  
    for(int i=0;i<n;i++){  
        for(int j=0;j<7;j++)  
            t[j] = 0;  
        cin >> hand;  
        if(hand == super){  
            t[0]++;  
        }  
        else  
        for(int j=0;j<3;j++){  
            if(hand == f[j]){  
                t[1]++;  
            }  
            else if(hand -(hand/10000000)*10000000 == f[j] - (f[j]/10000000)*10000000){  
                t[2]++;  
            }  
            else if(hand -(hand/1000000)*1000000 == f[j] - (f[j]/1000000)*1000000){  
                t[3]++;  
            }  
            else if(hand -(hand/100000)*100000== f[j] - (f[j]/100000)*100000){  
                t[4]++;  
            }  
            else if (hand -(hand/10000)*10000== f[j] - (f[j]/10000)*10000){  
                t[5]++;  
            }  
            else if (hand -(hand/1000)*1000== f[j] - (f[j]/1000)*1000){  
                t[6]++;  
            }  
        }  
        for(int j=0;j<7;j++){  
            if(t[j] > 0){  
                tt[j] ++;  
                money += gmoney[j];  
                break;  
            }  
        }         
    }  
    cout << tt[0] << " "<< tt[1] << " "<< tt[2] << " "<< tt[3] << " "<< tt[4] << " "<< tt[5] <<" "<< tt[6] << endl;  
    cout << money << endl;  
    return 0;  
}  
