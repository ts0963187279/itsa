/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>
struct player{
  int number,D;
};
bool my_compare(player A, player B){
  return A.D > B.D;
}
int main(){
  int n;
  cin >> n;
  vector<player> list(n);
  for(int i = 0 ; i < n ; i++){
    int S,A,G,B;
    cin >> S >> A >> G >> B ;
    list[i].D = S + A * 2 + G + B;
    list[i].number = i + 1;
  }
  sort(list.begin(),list.end(),my_compare);
  for(int i = 0 ; i < list.size() ; i++){
    cout << list[i].number ; 
    if(i != list.size() - 1)
      cout << " ";
  }
  cout << endl;
  return 0;
}
