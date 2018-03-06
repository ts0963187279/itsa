/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int N,M;
  cin >> N >> M;
  int map [M][M];
  for(int i = 0 ; i < M ; i++)
    for(int j = 0 ; j < M ; j++)
      cin >> map[i][j];
  while(N-- >0){
    vector<int> length(M,99999),out(M,0);
    int P,Q,current;
    cin >> P >> Q;
    length[P] = 0;
    current = P;
    while(true){
      int min = 99999,next;
      for(int i = 0 ; i < M ; i++){
	if(i != current){
	  if(length[i] > map[current][i] + length[current]){
	    length[i] = map[current][i] + length[current];
	  }
	  if(min >= length[i] && out[i] == 0){
	    min = length[i];
	    next = i;
	  }
	}
      }
      out[current] = 1;
      if(out[Q] == 1)
	break;
      current = next;
    }
    cout << length[Q] << endl;
  }
  return 0;
}

