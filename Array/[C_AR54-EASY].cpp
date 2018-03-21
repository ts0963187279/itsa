/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>

int main(){
  map<char,int> table;
  for(int i = 0 ; i < 26 ; i++){
    table.insert(pair<char,int>(char(int('a') + i),0));
  }
  int n;
  cin >> n;
  while(n -- > 0){
    char m;
    cin >> m;
    table[m]++;
  }
  for(map<char,int>::iterator it = table.begin() ; it != table.end() ; it++){
    if(it->second != 0)
      cout << it->first << " " << it->second << endl;
  }
  return 0;
}

