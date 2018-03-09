/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
int main(){
  int n;
  cin >> n;
  getchar();
  while(n-- > 0){
    string input;
    getline(cin,input);
    map<string,int> repeat;
    vector<string> keyword;
    input += " ";
    for(int i = 0 ; i < input.size() ; i++){
      int pos = input.find(" ",i);
      if(pos != string::npos){
	string token = input.substr(i,pos - i);
	transform(token.begin(),token.end(),token.begin(),::tolower);
	if(repeat.find(token) == repeat.end()){
	  keyword.push_back(token);
	  repeat.insert(pair<string,int>(token,0));
	}
	i = pos;
      }
    }
    for(int i = 0 ; i < keyword.size() ; i++){
      cout << keyword[i] ;
      if(i != keyword.size() -1 )
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}
