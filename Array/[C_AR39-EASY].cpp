/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>
#include <vector>
int main(){
  map<string,int> table;
  table["C"] = 0 ;  table["C#"] = 1 ;  table["D"] = 2 ;  table["D#"] = 3 ;  table["E"] = 4 ;  table["F"] = 5 ;
  table["F#"] = 6 ;  table["G"] = 7 ;  table["G#"] = 8 ;  table["A"] = 9 ;  table["A#"] = 10 ; table["B"] = 11;
  int n;
  cin >> n;
  while(n -- > 0){
    string input,tmp = "";
    vector<string> ans;
    int mod = 4,start;
    cin >> input;
    if(input[input.size() - 1] == 'm')
      mod = 3;
    for(int i = 0 ; i < input.size() && input[i] != 'm' ; i++)
      tmp += input[i];
    start = table[tmp];
    int counter = 0;
    for(map<string,int>::iterator it = table.begin(); counter != 3; it++){
      if(it->second == start){
	counter ++;
	ans.push_back(it->first);
	start = (start + mod) % 12;
	if(mod == 3)
	  mod = 4;
	else
	  mod = 3;
	it = table.begin();
      }
    }
    for(int i = 0 ; i < ans.size() ; i++){
      cout << ans[i];
      if(i != ans.size() - 1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}
