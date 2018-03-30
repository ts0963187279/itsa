/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>
#include <vector>
#include <cmath>

int main(){
  int counter = 0;
  int gx,gy,min = 1e9;
  vector<int> x,y;
  map<int,map<int,int> > table;
  while(true){
    int tmpX,tmpY;
    cin >> tmpX >> tmpY;
    if(tmpX == -1 && tmpY == -1)
      break;
    if(counter < 100){
      x.push_back(tmpX);
      y.push_back(tmpY);
    }
    counter ++;
  }
  cin >> gx >> gy;
  for(int i = 0 ; i < x.size() ; i++){
    table[x[i]][y[i]] = abs(x[i] - gx) * abs(x[i] - gx) + abs(y[i] - gy) * abs(y[i] - gy);
    if(table[x[i]][y[i]] < min)
      min = table[x[i]][y[i]];
  }
  for(map<int,map<int,int> >::iterator i = table.begin() ; i != table.end() ; i++){
    for(map<int,int>::iterator j = table[i->first].begin() ; j != table[i->first].end() ; j++){
      if(j->second == min)
	cout << i->first << " " << j->first << endl;
    }
  }
  return 0;
}

