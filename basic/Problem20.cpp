/*Author: Vector Wang*/
#include <iostream>  
typedef struct{  
    int number;  
    int carry;  
} Numbers;  
using namespace std;  
int main(int argc, char *argv[]) {  
    char number[30];  
    int max =0;  
    int error;  
    Numbers numbers[2][31];  
  
    int n;  
    int x;  
    cin >> n;  
    for(int i=0;i<n;i++){  
        for(int j=0;j<2;j++){  
            for(int k=0;k<31;k++){  
                numbers[j][k].carry = 0;  
                numbers[j][k].number = 0;  
            }  
        }  
        for(int j=0;j<2;j++){  
            cin >> number;  
            for(x=0;number[x] != NULL;x++){  
            }  
            if(x > max)  
                max = x;  
            for(int k=0;k<x;k++){  
                switch(number[x-k-1]){  
                    case '1' : numbers[j][k].number = 1;break;  
                    case '2' : numbers[j][k].number = 2;break;  
                    case '3' : numbers[j][k].number = 3;break;  
                    case '4' : numbers[j][k].number = 4;break;  
                    case '5' : numbers[j][k].number = 5;break;  
                    case '6' : numbers[j][k].number = 6;break;  
                    case '7' : numbers[j][k].number = 7;break;  
                    case '8' : numbers[j][k].number = 8;break;  
                    case '9' : numbers[j][k].number = 9;break;  
                }  
            }  
        }  
        for(int j=0;j<31;j++){  
            numbers[0][j].number = numbers[0][j].number + numbers[1][j].number + numbers[0][j].carry;  
            if(numbers[0][j].number > 9 ){  
                numbers[0][j].number %= 10;  
                numbers[0][j+1].carry++;  
            }  
        }  
        for(int j=31-1;j>=0;j--){  
            error = 0;  
            for(int k=j;k<31;k++){   
                if(numbers[0][k].number != 0){  
                    error ++;  
                    break;  
                }  
            }  
            if(error > 0)  
                cout << numbers[0][j].number ;  
        }  
        /*for(int j=31-1;j>=0;j--){ 
            cout << numbers[0][j].number; 
        }*/  
        cout <<endl;  
    }  
    return 0;  
}  
