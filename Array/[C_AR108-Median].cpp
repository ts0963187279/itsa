/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <algorithm>
#include <map>

int main(){
  string input;
  map<char,int> table;
  for(int i = 0 ; i < 26 ; i ++){
    table[char(int('a') + i)] = 0;
  }
  cin >> input;
  transform(input.begin(), input.end() , input.begin() , ::tolower);
  for(int i = 0 ; i < input.size() ; i++){
    table[input[i]] ++;
  }
  for(map<char,int>::iterator it = table.begin() ; it != table.end() ; it++){
    if(it->second != 0)
      cout << it->first << " " << it->second << endl;
  }
  return 0;
}

