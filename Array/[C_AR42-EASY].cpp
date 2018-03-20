/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>
#include <cctype>

int main(){
  string input;
  while(getline(cin,input)){
    int negative = 1,counter = 0,bigest = 0,num;
    map<int,int> table;
    for(int i = 0 ; i < input.size() ; i++){
      if(input[i] == '-')
	negative = -1;
      if(isdigit(input[i])){
	int tmp = int(input[i]) - int('0');
	i++;
	while(isdigit(input[i])){
	  tmp *= 10;
	  tmp += int(input[i]) - int('0');
	  i++;
	}
	tmp *= negative;
	negative = 1;
	if(table.find(tmp) == table.end())
	  table[tmp] = 1;
	else
	  table[tmp] ++;
	if(table[tmp] > bigest){
	  bigest = table[tmp];
	  num = tmp;
	}
	counter ++;
      }
    }
    if(bigest > counter / 2)
      cout << num << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}

