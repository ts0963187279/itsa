/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int m;
  cin >> m;
  while(m-- >0){
    int size,n;
    cin >> size;
    cin >> n;
    vector<int> weight(n,0),price(n,0),backpack(size + 1,0);
    for(int i = 0 ; i < n ; i++){
      string name;
      cin >> weight[i] >> price[i] >> name;
    }
    for(int i = 0 ; i < size + 1 ; i++){
      for(int j = 0 ; j < n ; j++){
	if(i - weight[j] >= 0){
	  if(backpack[i] < backpack[i - weight[j]] + price[j])
	    backpack[i] = backpack[i - weight[j]] + price[j];
	}
      }
    }
    cout << "Total: " << backpack[size] << endl;
  }
  return 0;
}

