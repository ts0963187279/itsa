/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>

int main(){
  map<int,string> zodiac;
  zodiac[0] = "tiger"; zodiac[1] = "rabbit"; zodiac[2] = "dragon"; zodiac[3] = "snake";
  zodiac[4] = "horse"; zodiac[5] = "sheep"; zodiac[6] = "monkey"; zodiac[7] = "rooster";
  zodiac[8] = "dog"; zodiac[9] = "pig"; zodiac[10] = "rat"; zodiac[11] = "ox";
  int n;
  cin >> n;
  while(n -- > 0){
    int year;
    cin >> year;
    cout << zodiac[(year - 2010) % 12] << endl;;
  }
  return 0;
}

