using namespace std;
#include <vector>
#include <sstream>
#include <iostream>
int main(){
  string line;
  string token;
  while(getline(cin,line)){
    vector<string> solution;
    istringstream iStringStream(line);
    while(getline(iStringStream,token,' ')){
      solution.push_back(token);
    }
    for(int i = solution.size()-1 ; i >= 0 ; i--){
      cout << solution[i];
      if(i != 0)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}

