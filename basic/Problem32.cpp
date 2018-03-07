/*Author: Vector Wang*/
#include <iostream>  
using namespace std;  
int main(int argc, char *argv[]) {  
    char input[100];  
    int x,n;  
    gets(input);  
    cin >> n;  
    for(x=0;input[x] != NULL;x++){  
    }  
    for(int i=0;i<x;i++){  
        if(input[i] > 96 && input[i] <123){  
            if(input[i]+n > 122)  
                printf("%c",(input[i]+n)%122+96);  
            else if(input[i]+n < 97)  
                printf("%c",123-97+(input[i]+n));  
            else  
                printf("%c",input[i]+n);  
        }  
        else if(input[i]>64 && input[i] <91){  
            if(input[i]+n > 90)  
                printf("%c",(input[i]+n)%90+64);  
            else if (input[i]+n < 65)  
                printf("%c",91-65+(input[i]+n));  
            else  
                printf("%c",input[i]+n);  
        }  
        else if(input[i]>47 && input[i]<58){  
            if(input[i]+n > 57)  
                printf("%c",(input[i]+n)%57+47);  
            else if(input[i]+n < 48)  
                printf("%c",58-48+(input[i]+n));  
            else   
                printf("%c",input[i]+n);  
        }  
        else  
            printf("%c",input[i]);  
    }  
    cout << endl;  
    return 0;  
}  
