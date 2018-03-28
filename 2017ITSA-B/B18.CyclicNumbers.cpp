/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <map>
int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    vector<unsigned long long int> sequence;
    map<unsigned long long int, map<unsigned long long int, unsigned long long int> > table;
    int P,Q,R,tmp;
    cin >> P >> Q >> R;
    for(int i = 0 ; i < 2 ; i++){
      cin >> tmp;
      sequence.push_back(tmp);
    }
    unsigned long long int Si = (Q * sequence[0] + R*(sequence[0] - sequence[1])*(sequence[0] - sequence[1]) + sequence[1]) % P;
    sequence.push_back(Si);
    table[sequence[0]][sequence[1]] = 0;
    table[sequence[1]][sequence[2]] = 1;
    for(unsigned long long int i = 3 ; ; i++){
      Si = (Q * sequence[i-2] + R*(sequence[i-2] - sequence[i-1])*(sequence[i-2] - sequence[i-1]) + sequence[i-1]) % P;
      sequence.push_back(Si);
      if(table.find(sequence[i - 1]) != table.end()){
	if(table[sequence[i - 1]].find(sequence[i]) != table[sequence[i - 1]].end()){
	  cout << i - table[sequence[i - 1]][sequence[i]] - 1 << endl;
	  break;
	}else
	  table[sequence[i - 1]][sequence[i]] = i - 1;
      }else
	table[sequence[i - 1]][sequence[i]] = i - 1;
    }
  }
  return 0;
}
