/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>

int main(){
  string inputA;
  while(cin >> inputA){
    map<string,int> table;
    string inputB;
    cin >> inputB;
    for(int i = 0 ; i < inputA.size() ; i++){
      string tmp ="";
      for(int j = 0 ; j < inputA.size() - i ; j++){
	tmp += inputA[i + j];
	table[tmp] = j + 1;
      }
    }
    int max = 0;
    for(int i = 0 ; i < inputB.size() ; i++){
      string tmp = "";
      for(int j = 0 ; j < inputB.size() - i ; j++){
	tmp += inputB[i + j];
	if(table.find(tmp) != table.end())
	  if(table[tmp] > max)
	    max = table[tmp];
      }
    }
    cout << max << endl;
  }
  return 0;
}

