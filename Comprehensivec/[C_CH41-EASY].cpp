/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>

int main(){
  map<char,int> table;
  int counter = 0;
  for(int i = 0 ; i < 10 ; i++)
    table[char(int('0') + i)] = counter ++;
  for(int i = 0 ; i < 26 ; i++)
    table[char(int('a') + i)] = counter ++;
  for(int i = 0 ; i < 26 ; i++)
    table[char(int('A') + i)] = counter ++;
  table['_'] = counter ++;
  table['.'] = counter ++;
  int m;
  cin >> m ;
  while(m -- > 0){
    string input;
    int n,tmp = 0,mul = 1;
    cin >> n >> input;
    while(n){
      tmp += (n % 10) * mul;
      n /= 10;
      mul *= 8;
    }
    n = tmp;
    for(int i = 0 ; i < input.size() ; i++){
      int val = (table[input[i]] + n) % counter;
      if(val == 0)
	cout << "00" ;
      else
	while(val > 0){
	  cout << val / 8;
	  val %= 8;
	  if(val < 8){
	    cout << val;
	    break;
	  }
	}
    }
    cout << endl;
  }
  return 0;
}
