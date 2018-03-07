/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
int main(){
  string sentence,token;
  getline(cin,sentence);
  istringstream iss(sentence);
  map<string,int> isRepeat;
  vector<string> keyWord;
  while(getline(iss,token,' ')){
    transform(token.begin(),token.end(),token.begin(),::tolower);
    if(isRepeat.find(token) == isRepeat.end()){
      isRepeat.insert(pair<string,int>(token,1));
      keyWord.push_back(token);
    }
  }
  for(int i = 0 ; i < keyWord.size() ; i++){
    cout << keyWord[i];
    if(i != keyWord.size() - 1)
      cout << " ";
  }
  cout << endl;
  return 0;
}

