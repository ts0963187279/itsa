using namespace std;
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
int main(){
  int N;
  cin >> N;
  while(N -- >0){
    int n;
    cin >> n;
    vector<int> list(n);
    for(int i = 0 ; i < n ; i++){
      cin >> list[i];
    }
    sort(list.rbegin() , list.rend());
    int tax = 0;
    int last = 0;
    for(int i = 0 ; i < n ; i++){
      int tmp = ceil((i * 100.0) / n);
      if(i > 0 && list[i - 1] == list[i])
	tmp = last;
      if(tmp <= 10)
	tax +=(list[i] * 4) / 10;
      else if(tmp <= 30)
	tax +=(list[i] * 3) / 10;
      else if(tmp <= 60)
	tax +=(list[i] * 2) / 10;
      else if(tmp <= 80)
	tax +=(list[i] * 1) / 10;
      last = tmp;
    }
    cout << tax << endl;
  }
  return 0;
}
