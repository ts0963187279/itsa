/*Author: Vector Wang*/
#include <iostream>  

using namespace std;  
int main(int argc, char *argv[]) {  
    int month,day;  
    cin >> month >> day;  
    switch(month){  
        case 1 : {  
            if(day >= 21)  
                cout << "Aquarius" <<endl;  
            else  
                cout << "Capricorn" << endl;  
            break;  
        }  
        case 2 :{  
            if(day >= 19)  
                cout << "Pisces" <<endl;  
            else      
                cout << "Aquarius" << endl;  
            break;  
        }  
        case 3 :{  
            if(day >= 21)  
                cout << "Aries" <<endl;  
            else   
                cout << "Pisces" <<endl;  
            break;  
        }  
        case 4 :{  
            if(day >=21)  
                cout << "Taurus" << endl;  
            else   
                cout << "Aries"<<endl;  
            break;  
        }  
        case 5 :{  
            if(day >=22)  
                cout << "Gemini" <<endl;  
            else  
                cout << "Taurus" <<endl;  
            break;  
        }  
        case 6 :{  
            if(day >=22)  
                cout << "Cancer"<<endl;  
            else  
                cout << "Gemini" <<endl;  
            break;  
        }  
        case 7 :{  
            if(day >=23)  
                cout << "Leo" <<endl;  
            else   
                cout << "Cancer" <<endl;  
            break;  
        }  
        case 8 :{  
            if(day >=24)  
                cout <<"Virgo"<<endl;  
            else  
                cout << "Leo" <<endl;  
            break;  
        }  
        case 9 :{  
            if(day >= 24)  
                cout << "Libra" <<endl;  
            else  
                cout << "Virgo" <<endl;  
            break;  
        }  
        case 10 :{  
            if(day >= 24)  
                cout << "Scorpio" <<endl;  
            else  
                cout << "Libra" <<endl;  
            break;  
        }  
        case 11 :{  
            if(day >= 23)  
                cout << "Sagittarius" << endl;  
            else  
                cout << "Scorpio" <<endl;  
            break;  
        }  
        case 12 :{  
            if(day >= 22)  
                cout << "Capricorn" <<endl;  
            else   
                cout << "Sagittarius" <<endl;  
            break;  
        }         
    }  
    return 0;  
}  
