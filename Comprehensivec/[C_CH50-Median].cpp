/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
int main(){
  int n;
  cin >> n;
  vector<string> list;
  map<string,vector<int> > price;
  for(int i = 0 ; i < n ; i++){
    string name;
    int p;
    cin >> name >> p;
    if(price.find(name) == price.end())
      list.push_back(name);
    price[name].push_back(p);
    sort(price[name].begin() , price[name].end());
  }
  for(int i = 0 ; i < list.size() ; i ++){
    cout << list[i] << ",";
    for(int j = 0 ; j < price[list[i]].size() ; j++)
      cout << price[list[i]][j] << ",";
    cout << endl;
  }
  return 0;
}

