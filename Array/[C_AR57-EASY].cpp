/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>

int main(){
  int n;
  cin >> n;
  cin.ignore();
  while(n -- > 0){
    map<char,int> table;
    for(int i = 0 ; i < 26 ; i++){
      table[char(int('a') + i)] = 0;
      table[char(int('A') + i)] = 0;
    }
    string input;
    getline(cin,input);
    for(int i = 0 ; i < input.size() ; i++){
      table[input[i]] = 1;
    }
    int ans = 0;
    for(map<char,int>::iterator it = table.begin() ; it != table.end() ; it++){
      ans += it->second;
    }
    cout << input.size() << " " << ans << endl;
  }
  return 0;
}
