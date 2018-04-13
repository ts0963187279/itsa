/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
struct player{
  string name;
  unsigned long long int money , fans;
};
bool my_compare(player a, player b){
  if(a.money == b.money)
    return a.fans > b.fans;
  return a.money > b.money;
}
int main(){
  int N;
  while(cin >> N){
    vector<player> players(N);
    for(int i = 0 ; i < N ; i++){
      string n;
      unsigned long long int m,f;
      cin >> n >> m >> f ;
      players[i].name = n;
      players[i].money = m;
      players[i].fans = f;
    }
    sort(players.begin() , players.end() , my_compare);
    for(int i = 0 ; i < players.size() ; i++){
      cout << players[i].name;
      if(i != players.size() - 1)
	cout << " " ;
    }
    cout << endl;
  }
  return 0;
}

