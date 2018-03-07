/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <sstream>
#include <map>
int main(){
  string line,token;
  int counter = 1;
  int upper[26] = {0},lower[26] = {0};
  getline(cin,line);
  for(int i = 0 ; i < line.size() ; i++){
    if(line[i] == ' ')
      counter++;
    else{
      if(line[i] - int('A') > 27)
	lower[line[i] - int('a')]++;
      else
	upper[line[i] - int('A')]++;
    }
  }
  cout << counter <<endl;
  for(int i = 0 ; i < 26 ; i++){
    if(lower[i] > 0)
      cout << char(int('a') + i) << " : " << lower[i] << endl;
    if(upper[i] > 0)
      cout << char(int('A') + i) << " : " << upper[i] << endl;

  }
  return 0;
}
