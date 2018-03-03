using namespace std;
#include <iostream>
#include <vector>
int main(){
  string input;
  int upper,lower;
  upper = int('A');
  lower = int('a');
  vector<int> frequency(26,0);
  getline(cin,input);
  for(int i = 0 ; i < input.size() ; i++){
    for(int j = 0 ; j < 26 ; j++){
      if(input[i] == char(upper + j))
	frequency[j] ++;
      if(input[i] == char(lower + j))
	frequency[j] ++;
    }
  }
  for(int i = 0 ; i < 26 ; i++){
    cout << frequency[i];
    if(i < 25)
      cout << " ";
  }
  cout << endl;
  return 0;
}
