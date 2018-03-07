/*Author: Vector Wang*/
#include <iostream>  

using namespace std;  
int main(int argc, char *argv[]) {  
    int map[3][3];  
    for(int i=0;i<3;i++){  
        for(int j=0;j<3;j++){  
            cin >> map[i][j];  
        }  
    }  
    if(map[0][0] == map[0][1] && map[0][0] == map[0][2])  
        cout << "True" <<endl;  
    else if(map[1][0] == map[1][1] && map[1][0] == map[1][2])  
        cout << "True" <<endl;  
    else if(map[2][0] == map[2][1] && map[2][0] == map[2][2])  
        cout << "True" <<endl;  
          
          
    else if(map[0][0] == map[1][0] && map[0][0] == map[2][0])  
        cout << "True" <<endl;        
    else if(map[0][1] == map[1][1] && map[0][1] == map[2][1])  
        cout << "True" <<endl;  
    else if(map[0][2] == map[1][2] && map[0][2] == map[2][2])  
        cout << "True" <<endl;  
          
          
    else if(map[0][0] == map[1][1] && map[0][0] == map[2][2])  
        cout << "True" <<endl;  
    else if(map[0][2] == map[1][1] && map[0][2] == map[2][0])  
        cout << "True" << endl;   
    else   
        cout << "False" <<endl;  
    return 0;  
}
