/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int m,n;
  int pos = 0;
  cin >> m >> n;
  vector<int> Class(m,0);
  for(int i = 0 ; i < m ; i ++){
    for(int j = 0 ; j < n ; j++){
      int tmp;
      cin >> tmp;
      if(tmp == 1){
	Class[i] = j;
	if(j > pos)
	  pos = j;
      }
    }
  }
  for(int i = 0 ; i < m ; i++){
    if(Class[i] == pos)
      cout << "Class " << i + 1 << " has " << pos + 1 << " boys."<<endl;
  }
  return 0;
}

