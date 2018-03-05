/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int m;
  cin >> m;
  while(m-- >0){
    vector<int> degrees(10,0);
    vector<int> spend(10,9999);
    vector<int> from(10,10);
    int map[10][10];
    for(int i = 0 ; i < 10 ; i++){
      for(int j = 0 ; j < 10 ; j++){
	cin >> map[i][j];
	if(map[i][j] == 1)
	  degrees[i]++;
      }
    }
    spend[0] = 0;
    for(int i = 0 ; i < 10 ; i++){
      for(int j = i ; j < 10 ; j++){
	if(map[i][j] == 1 && spend[j] > degrees[i] + spend[i]){
	  spend[j] = degrees[i] + spend[i];
	  from[j] = i;
	}
      }
    }
    vector<int> path;
    for(int i = 9 ; i > 0 ;){
      path.push_back(from[i]);
      i = from[i];
    }
    for(int i = path.size() - 1 ; i >= 0 ; i--){
      cout << path[i] << "-";
    }
    cout << 9 << " : " << spend[9] + degrees[9] <<endl;
  }
  return 0;
}

