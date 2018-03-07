/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[]) {  
    char n[4];  
    for(int i=0;i<4;i++)   
        cin >> n[i];  
    for(int i=0;i<5;i++){  
        for(int j=0;j<4;j++){  
            if(i==0){  
                switch(n[j]){  
                    case '0' : cout << "*****";break;  
                    case '1' : cout << "    *";break;  
                    case '2' : cout << "*****";break;  
                    case '3' : cout << "*****";break;  
                    case '4' : cout << "*   *";break;  
                    case '5' : cout << "*****";break;  
                    case '6' : cout << "*    ";break;  
                    case '7' : cout << "*****";break;  
                    case '8' : cout << "*****";break;  
                    case '9' : cout << "*****";break;  
                }  
            }  
            if(i==1){  
                switch(n[j]){  
                    case '0' : cout << "*   *";break;  
                    case '1' : cout << "    *";break;  
                    case '2' : cout << "    *";break;  
                    case '3' : cout << "    *";break;  
                    case '4' : cout << "*   *";break;  
                    case '5' : cout << "*    ";break;  
                    case '6' : cout << "*    ";break;  
                    case '7' : cout << "    *";break;  
                    case '8' : cout << "*   *";break;  
                    case '9' : cout << "*   *";break;  
                }  
            }  
            if(i==2){  
                switch(n[j]){  
                    case '0' : cout << "*   *";break;  
                    case '1' : cout << "    *";break;  
                    case '2' : cout << "*****";break;  
                    case '3' : cout << "*****";break;  
                    case '4' : cout << "*****";break;  
                    case '5' : cout << "*****";break;  
                    case '6' : cout << "*****";break;  
                    case '7' : cout << "    *";break;  
                    case '8' : cout << "*****";break;  
                    case '9' : cout << "*****";break;  
                }  
            }  
            if(i==3){  
                switch(n[j]){  
                    case '0' : cout << "*   *";break;  
                    case '1' : cout << "    *";break;  
                    case '2' : cout << "*    ";break;  
                    case '3' : cout << "    *";break;  
                    case '4' : cout << "    *";break;  
                    case '5' : cout << "    *";break;  
                    case '6' : cout << "*   *";break;  
                    case '7' : cout << "    *";break;  
                    case '8' : cout << "*   *";break;  
                    case '9' : cout << "    *";break;  
                }  
            }  
            if(i==4){  
                switch(n[j]){  
                    case '0' : cout << "*****";break;  
                    case '1' : cout << "    *";break;  
                    case '2' : cout << "*****";break;  
                    case '3' : cout << "*****";break;  
                    case '4' : cout << "    *";break;  
                    case '5' : cout << "*****";break;  
                    case '6' : cout << "*****";break;  
                    case '7' : cout << "    *";break;  
                    case '8' : cout << "*****";break;  
                    case '9' : cout << "    *";break;  
                }  
            }  
            if(j+1!=4)  
                cout << " ";   
        }  
        cout << endl;  
    }  
    return 0;  
}  
