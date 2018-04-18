using namespace std;
#include <iostream>
#include <vector>
#include <cmath>
int main(){
  while(true){
    int n;
    cin >> n;
    if(n == 0)
      return 0;
    vector<int> temp((n + 1)*2),enegry((n + 1)*2,1e9);
    for(int i = 2 ; i < (n + 1) * 2 ; i ++)
      cin >> temp[i];
    temp[0] = 1000;
    temp[1] = 1000;
    enegry[0] = 0;
    enegry[1] = 0;
    for(int i = 1 ; i < n + 1; i++){
      for(int j = 0 ; j < 2 ; j++){
	for(int k = 1 ; k <= 2 ; k++){
	  if(abs(temp[i * 2 + j] - temp[i * 2 - k]) + enegry[i * 2 - k] < enegry[i * 2 + j]){
	    enegry[i * 2 + j] = abs(temp[i * 2 + j] - temp[i * 2 - k]) + enegry[i * 2 - k];
	  }
	}
      }
    }
    if(enegry[(n + 1) * 2 - 2] > enegry[(n + 1) * 2 - 1])
      cout << enegry[(n + 1) * 2 - 1] << endl;
    else
      cout << enegry[(n + 1) * 2 - 2] << endl;
  }
  return 0;
}
