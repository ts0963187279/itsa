using namespace std;
#include <vector>
#include <iostream>

int main(){
  int N,max = 0;
  bool same = true;
  vector<char> line;
  cin >> N;
  for(int i = 0 ; i < N ; i++){
    char token;
    cin >> token;
    line.push_back(token);
  }
  for(int i = 0 ; i < N ; i++){
    vector<char> compA;
    for(int j = 1 ; j <= N/2 ; j++){
      for(int k = 0 ; k < j ; k++)
	compA.push_back(line[i + k]);
      for(int k = i + j ; k < N ; k++){
	for(int x = 0 ; x < j ; x++){
	  if(compA[x] != line[k+x]){
	    same = false;
	    break;
	  }
	}
	if(same && j > max){
	  max = j;
	}
	same = true;
      }
      compA.clear();
    }
  }
  cout << max << endl;
  return 0;
}
