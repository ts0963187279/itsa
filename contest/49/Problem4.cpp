/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <cctype>

int main(){
  int n;
  cin >> n;
  getchar();
  while(n -- > 0){
    string input;
    getline(cin , input);
    vector<char> tmp;
    for(int i = 0 ; i < input.size() ; i ++){
      if(isalpha(input[i])){
	tmp.push_back(input[i]);
      }
      if(isdigit(input[i])){
	int shift = int(input[i++]) - int('0');
	while(isdigit(input[i])){
	  shift *= 10;
	  shift += int(input[i++]) - int('0');
	}
	for(int j = 0 ; j < tmp.size() ; j ++){
	  cout << char((int(tmp[j]) - int('A') + shift) % 26 + int('A'));
	}
	tmp.clear();
      }
      if(i == input.size() - 1)
	for(int i = 0 ; i < tmp.size() ; i++)
	  cout << tmp[i];
    }
    cout << endl;
  }
  return 0;
}
