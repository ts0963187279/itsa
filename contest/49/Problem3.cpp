/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

struct team{
  string name;
  int scope;
};
bool myCompare(const team & , const team &);
int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int m;
    cin >> m;
    vector<team> teams(m);
    for(int i = 0 ; i < m ; i++){
      int tmp;
      cin >> teams[i].name;
      cin >> tmp;
      teams[i].scope = tmp * 1000000;
      cin >> tmp;
      teams[i].scope += tmp * 1000;
      cin >> tmp;
      teams[i].scope += tmp;
    }
    sort(teams.begin() , teams.end() , myCompare);
    vector<string> wins;
    int winScope = teams[teams.size() - 1].scope;
    wins.push_back(teams[teams.size() - 1].name);
    for(int i = teams.size() - 2 ; teams[i].scope == winScope ; i --)
      wins.push_back(teams[i].name);
    sort(wins.begin() , wins.end());
    for(int i = 0 ; i < wins.size() ; i++)
      cout << wins[i] << endl;
  }
  return 0;
}
bool myCompare(const team &a , const team &b){
  return a.scope < b.scope;
}
