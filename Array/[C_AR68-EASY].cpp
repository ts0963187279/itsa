/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int hour,minute;
  char trash;
  cin >> hour >> trash >> minute;
  if(hour == 23 || hour == 0)
    cout << "rat" << endl;
  if(hour == 1 || hour == 2)
    cout << "ox" << endl;
  if(hour == 3 || hour == 4)
    cout << "tiger" << endl;
  if(hour == 5 || hour == 6)
    cout << "rabbit" << endl;
  if(hour == 7 || hour == 8)
    cout << "dragon" << endl;
  if(hour == 9 || hour == 10)
    cout << "snake" << endl;
  if(hour == 11 || hour == 12)
    cout << "horse" << endl;
  if(hour == 13 || hour == 14)
    cout << "goat" << endl;
  if(hour == 15 || hour == 16)
    cout << "monkey" << endl;
  if(hour == 17 || hour == 18)
    cout << "rooster" << endl;
  if(hour == 19 || hour == 20)
    cout << "dog" << endl;
  if(hour == 21 || hour == 22)
    cout << "pig" << endl;
  return 0;
}
