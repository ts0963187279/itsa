/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
int main(){
  int m;
  cin >> m;
  while(m-- > 0){
    int n;
    vector<int> road(10001,0);
    cin >> n;
    int end = 0,length = 0;
    while(n-- > 0){
      int s,e;
      cin >> s >> e;
      for(int i = s ; i < e; i++){
	if(i > end)
	  end = i;
	road[i] = 1;
      }
    }
    for(int i = 0 ; i <= end ; i++){
      if(road[i] != 0)
	length++;
    }
    cout << length << endl;
  }
  return 0;
}
