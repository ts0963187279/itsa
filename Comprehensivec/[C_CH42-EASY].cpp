/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    string input;
    cin >> input;
    vector<int> c;
    for(int i = 0 ; i < input.size() ; i++)
      c.push_back(int(input[i]) - int('0'));
    int check = 26 - (((c[0] + c[2] + c[4] + c[6] + c[8] + c[10]) + 3 * (c[1] + c[3] + c[5] + c[7] + c[9] + c[11])) % 26);
    cout << char(int('A') + check - 1) << endl;
  }
  return 0;
}
