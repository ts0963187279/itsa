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
    vector<int> list;
    vector<int> peaks;
    string input;
    getline(cin,input);
    for(int i = 0 ; i < input.size() ; i++){
      if(isdigit(input[i])){
	int tmp = int(input[i]) - int('0');
	i ++;
	while(isdigit(input[i])){
	  tmp *= 10;
	  tmp += int(input[i]) - int('0');
	  i ++;
	}
	list.push_back(tmp);
      }
    }
    for(int i = 0 ; i < list.size() ; i++){
      if(i - 1 < 0 && list[i] > list[i + 1])
	peaks.push_back(i);
      else if(i + 1 >= list.size() && list[i] > list[i - 1])
	peaks.push_back(i);
      else if(list[i] > list[i - 1] && list[i] > list[i + 1])
	peaks.push_back(i);
    }
    for(int i = 0 ; i < peaks.size() ; i++){
      cout << peaks[i];
      if(i != peaks.size() - 1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}

