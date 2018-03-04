using namespace std;
#include <iostream>
#include <vector>
int main(){
  string input;
  getline(cin,input);
  vector<int> frequency(128-32,0);
  for(int i = 0 ; i < input.size() ; i++){
    for(int j = 0 ; j < 128-32 ; j++){
      if(input[i] == char(j+32)){
	frequency[j] ++;
      }
    }
  }
  for(int i = 128-32-1 ; i >= 0 ; i--){
    if(frequency[i] > 0){
      cout << i + 32 << " " << frequency[i] <<endl;
    }
  }
  return 0;
}

