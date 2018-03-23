/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>
#include <string>

int main(){
  map<string,int> table;
  for(int i = 0 ; i <= 9 ; i++)
    table[string(1,char(int('0') + i))] = i;
  table["10"] = 10; table["A"] = 14; table["J"] = 11; table["Q"] = 12; table["K"] = 13;
  string input;
  int sum = 0;
  for(int i = 0 ; i < 5 ; i++){
    cin >> input;
    sum += table[input];
  }
  cout << sum << endl;
  return 0;
}
