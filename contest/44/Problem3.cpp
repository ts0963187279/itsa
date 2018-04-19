/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string>
int main(){
  vector<vector<int> > stick;
  string input;
  while(getline(cin,input)){
    string token;
    stringstream str_stream(input);
    vector<int> tmp;
    while(getline(str_stream,token,','))
      tmp.push_back(stoi(token));
    stick.push_back(tmp);
  }
  vector<int> index(stick.size() , 0);
  bool done = false;
  while(!done){
    done = true;
    for(int i = 0 ; i < stick.size() - 1 ; i++){
      cout << stick[i][index[i]] << ",";
    }
    cout << stick[stick.size() - 1][index[stick.size() - 1]] << endl;
    int carry = 1;
    for(int i = index.size() - 1 ; i >= 0 ; i--){
      index[i] += carry;
      if(index[i] == stick[i].size()){
	index[i] = 0;
	carry = 1;
      }else
	carry = 0;
    }
    for(int i = 0 ; i < index.size() ; i++){
      if(index[i] > 0)
	done = false;
    }
  }
  return 0;
}

