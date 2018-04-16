/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>

int main(){
  map<char,int> table;
  vector<char> list(7);
  while(cin >> list[0] >> list[1] >> list[2] >> list[3] >> list[4] >> list[5] >> list[6]){
    int length = 0;
    bool find = false;
    map<char,int> have;
    unordered_set<char> char_table;
    for(int i = 0 ; i < 7 ; i++){
      if(char_table.find(list[i]) == char_table.end()){
	char_table.insert(list[i]);
	have[list[i]] = 1;
	length ++;
      }
    }
    int start = 0 , stop = 0;
    for(int i = 0 ; i < length ; i++){
      stop *= 10;
      stop += 9;
    }
    for(unsigned long long int i = start ; i <= stop ; i++){
      unsigned long long int tmp = i;
      bool is_same = false;
      unordered_set<int> hash_table;
      for(map<char,int>::iterator it = have.begin() ; it != have.end() ; it++){
	if(hash_table.find(tmp % 10) != hash_table.end()){
	  is_same = true;
	  break;
	}
	hash_table.insert(tmp % 10);
	table[it->first] = tmp % 10;
	tmp /= 10;
      }
      if(!is_same){
	int up = table[list[0]] * 10 + table[list[1]] , down = table[list[2]] * 10 + table[list[3]] , ans = table[list[4]] * 100 + table[list[5]] * 10 + table[list[6]];
	if(up + down == ans){
	  cout << "YES" << endl;
	  find = true;
	  break;
	}
      }
    }
    if(!find)
      cout << "NO" << endl;
  }
  return 0;
}
