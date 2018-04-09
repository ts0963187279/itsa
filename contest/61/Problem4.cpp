/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <unordered_set>

int main(){
  int N;
  cin >> N;
  while(N -- >0){
    int M;
    cin >> M;
    vector<vector<int> > airports(M,vector<int>(M));
    vector<int> length(M,1e9);
    for(int i = 0 ; i < M ; i++)
      for(int j = 0 ; j < M ; j++)
	cin >> airports[i][j];
    int current_airport = 0;
    unordered_set<int> outs;
    length[0] = 0;
    while(outs.find(M - 1) == outs.end()){
      int smallest = 1e9;
      bool no_path = true;
      for(int i = 0 ; i < M ; i++){
	if(outs.find(i) == outs.end() && airports[current_airport][i] == 1 && airports[current_airport][i] + length[current_airport] < length[i]){
	  length[i] = airports[current_airport][i] + length[current_airport];
	  outs.insert(current_airport);
	  no_path = false;
	}
      }
      if(no_path)
	outs.insert(current_airport);
      for(int i = 0 ; i < M ; i++){
	if(outs.find(i) == outs.end() && length[i] <= smallest){
	  current_airport = i;
	  smallest = length[i];
	}
      }
    }
    cout << length[M - 1] << endl;
  }
  return 0;
}

