/*Author: Vector Wang*/
#include <iostream>  

using namespace std;  
int main(int argc, char *argv[]) {  
    double input[10];  
    double max=0,min = 0;  
    for(int i=0;i<10;i++){  
        cin >> input[i];  
        if(input[i] > max)  
            max = input[i];  
        if(input[i] < min)  
            min = input[i];  
    }  
    printf("maximum:%.2lf\n",max);  
    printf("minimum:%.2lf\n",min);  
    return 0;  
}  
