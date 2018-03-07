/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int row,col;  
    cin >> row >> col;  
    int matrix[row][col];  
    for(int i=0;i<row;i++){  
        for(int j=0;j<col;j++){  
            cin >> matrix[i][j];  
        }   
    }  
    for(int i=0;i<col;i++){  
        for(int j=0;j<row;j++){  
            cout << matrix[j][i];  
            if(j+1 != row){  
                cout << " ";  
            }  
        }  
        cout << endl;  
    }  
    return 0;  
}  
