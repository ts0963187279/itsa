/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int month,day;
    cin >> month >> day;
    if(month == 3 && day > 20 || month == 4 && day < 20)
      cout << "Aries" << endl;
    else if(month == 4 && day > 19 || month == 5 && day < 21)
      cout << "Taurus" << endl;
    else if(month == 5 && day > 20 || month == 6 && day < 22)
      cout << "Gemini" << endl;
    else if(month == 6 && day > 21 || month == 7 && day < 23)
      cout << "Cancer" << endl;
    else if(month == 7 && day >= 23 || month == 8 && day <= 22)
      cout << "Leo" << endl;
    else if(month == 8 && day >= 23 || month == 9 && day <= 22)
      cout << "Virgo" << endl;
    else if(month == 9 && day >= 23 || month == 10 && day <= 23)
      cout << "Libra" << endl;
    else if(month == 10 && day >= 24 || month == 11 && day <= 22)
      cout << "Scorpio" << endl;
    else if(month == 11 && day >= 23 || month == 12 && day <= 21)
      cout << "Sagittarius" << endl;
    else if(month == 12 && day >= 22 || month == 1 && day <= 19)
      cout << "Capricorn" << endl;
    else if(month == 1 && day >= 20 || month == 2 && day <= 18)
      cout << "Aquarius" << endl;
    else if(month == 2 && day >= 19 || month == 3 && day <= 20)
      cout << "Pisces" << endl;
  }
  return 0;
}

