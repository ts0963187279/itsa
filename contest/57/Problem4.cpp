/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
int main(){
  int N;
  cin >> N;
  while(N-- > 0){
    int max = 0;
    string input;
    map<string,int> table;
    cin >> input;
    for(int i = 0 ; i < input.size() ; i++){
      string token = "";
      for(int j = 0 ; j <= input.size() / 2 ; j++){
	if(i + j >= input.size())
	  break;
	token += input[i + j];
	if(token.size() >= 2){
	  if(table.find(token) == table.end())
	    table.insert(pair<string,int>(token,1));
	  else{
	    table[token] ++;
	    if(max < table[token])
	      max = table[token];
	  }
	}
      }
    }
    vector<string> ans;
    for(map<string,int>::iterator it = table.begin() ; it != table.end() ; it++){
      if(it->second == max)
	ans.push_back(it->first);
    }
    cout << max << " ";
    sort(ans.begin(),ans.end());
    for(int i = 0 ; i < ans.size() ; i++){
      cout << ans[i];
      if(i != ans.size() - 1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}

