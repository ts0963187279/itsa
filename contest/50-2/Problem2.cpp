/*Author: Vector Wang*/
using namespace std;
#include <iostream>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    string input;
    cin >> input;
    int part[2] = {0},v;
    for(int i = 1 ; i < 13 ; i++)
      part[i%2] += int(input[i-1]) - int('0');
    v = 26 - ((part[1] + 3 * part[0]) % 26);
    if(input[12] == char(int('A') + v - 1))
      cout << "valid" << endl;
    else
      cout << "invalid" << endl;
  }
  return 0;
}
