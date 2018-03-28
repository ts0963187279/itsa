/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  while(n-- > 0){
    int m;
    cin >> m;
    vector<int> list;
    vector<int> backpack(m,1);
    for(int i = 0 ; i < m ; i++){
      int tmp;
      cin >> tmp;
      list.push_back(tmp);
    }
    int max = 0;
    for(int i = 1 ; i < list.size() ; i++){
      for(int j = 0 ; j < i ; j ++){
	if(list[i] <= list[j]){
	  if(backpack[j] + 1 > backpack[i]){
	    backpack[i] = backpack[j] + 1;
	    if(backpack[i] > max)
	      max = backpack[i];
	  }
	}
      }
    }
    cout << max << endl;
  }
  return 0;
}
