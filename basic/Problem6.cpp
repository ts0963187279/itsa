/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[]) {  
    int input;  
    while(cin >> input){  
        if(input >= 3 && input <= 5)  
            cout << "Spring" <<endl;  
        if(input >= 6 && input <= 8)  
            cout << "Summer" <<endl;  
        if(input >= 9 && input <= 11)  
            cout << "Autumn" <<endl;  
        if(input >= 12 || input <= 2)  
            cout << "Winter" <<endl;  
    }  
    return 0;  
}  
