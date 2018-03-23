/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  vector<string> table(12);
  table[0] = "monkey"; table[1] = "rooster"; table[2] = "dog"; table[3] = "pig";
  table[4] = "rat"; table[5] = "ox"; table[6] = "tiger"; table[7] = "rabbit";
  table[8] = "dragon"; table[9] = "snake"; table[10] = "horse"; table[11] = "goat";
  int year,zodiac;
  cin >> year;
  zodiac = year % 12;
  cout << table[zodiac] << endl;
  cout << table[(zodiac + 6) % 12] << endl;
  return 0;
}
