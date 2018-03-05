/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>
int main(){
  int n;
  cin >> n;
  while(n-- > 0){
    int T,m,k,price,item;
    cin >> T >> m >> k;
    vector<int> items;
    for(int i = 0 ; i < k ; i++){
      cin >> item;
      items.push_back(item);      
    }
    sort(items.begin(),items.end());
    price = 0;
    for(int i = 0 ; i < m ; i++){
      price += items[i];
    }
    if(price > T)
      cout << "Impossible" <<endl;
    else
      cout << price << endl;
  }
  return 0;
}
