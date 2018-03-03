using namespace std;
#include <iostream>
#include <vector>
int main(){
  int N;
  bool isItRedundant = false;
  cin >> N;
  vector<int> line(N,0);
  vector<int> repeat(N,0);
  for(int i = 0 ; i < N ; i++){
    cin >> line[i];
    if(++repeat[line[i]-1] > 1){
      isItRedundant = true;
    }
  }
  if(isItRedundant){
    cout << "0" << endl;
  }else
    cout << "1" << endl;
  return 0;
}

