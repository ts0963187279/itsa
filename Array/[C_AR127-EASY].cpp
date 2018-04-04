/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
int main(){
  string input;
  vector<vector<int> > matrix(3,vector<int>(3));
  matrix[0][0] = 6; matrix[0][1] = 17; matrix[0][2] = 4;
  matrix[1][0] = 13; matrix[1][1] = 12; matrix[1][2] = 3;
  matrix[2][0] = 21; matrix[2][1] = 11; matrix[2][2] = 13;
  getline(cin,input);
  int origin_size = input.size();
  if(input.size() % 3 != 0){
    for(int i = 0 ; i < 3 - origin_size % 3 ; i++)
      input += " ";
  }
  vector<char> ans;
  for(int i = 0 ; i < origin_size ; i += 3){
    vector<int> trans(3);
    for(int j = 0 ; j < 3 ; j++){
      if(input[i + j] == ' ')
	trans[j] = 52;
      else if(input[i + j] >= 'A' && input[i + j] <= 'Z')
	trans[j] = int(input[i + j]) - int('A');
      else if(input[i + j] >= 'a' && input[i + j] <= 'z')
	trans[j] = int(input[i + j]) - int('a') + 26;
    }
    for(int j = 0 ; j < 3 ; j++){
      int tmp = 0;
      for(int k = 0 ; k < 3 ; k++){
	tmp += matrix[j][k] * trans[k];
      }
      tmp %= 53;
      if(tmp >= 0 && tmp <26)
	cout << char(int('A') + tmp);
      else if(tmp >= 26 && tmp < 52)
	cout << char(int('a') + tmp - 26);
      else if(tmp == 52)
	cout << " ";
    }
  }
  cout << endl;
  return 0;
}
