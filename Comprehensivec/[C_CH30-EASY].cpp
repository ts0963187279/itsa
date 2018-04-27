/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
bool make_trangle(vector<int>,vector<int> &,int,int);
bool check(vector<int> &);
int main(){
  int n, sum = 0 , max;
  cin >> n;
  vector<int> sticks(n),lines(3,0);
  for(int i = 0 ; i < n ; i ++){
    cin >> sticks[i];
    sum += sticks[i];
  }
  if(sum & 1)
    max = sum / 2 + 1;
  else
    max = sum / 2;
  sort(sticks.rbegin() , sticks.rend());
  if(make_trangle(sticks,lines,0,max))
    cout << "true" << endl;
  else
    cout << "false" << endl;
  return 0;
}
bool make_trangle(vector<int> sticks,vector<int> &lines,int pos,int max){
  if(pos == sticks.size() && check(lines))
    return true;
  for(int i = 0 ; i < 3 ; i ++){
    if(lines[i] + sticks[pos] < max){
      lines[i] += sticks[pos];
      if(make_trangle(sticks,lines,pos + 1,max))
	return true;
      lines[i] -= sticks[pos];
    }
  }
  return false;
}
bool check(vector<int> &lines){
  if(lines[0] + lines[1] > lines[2] && lines[0] + lines[2] > lines[1] && lines[1] + lines[2] > lines[0])
    return true;
  else
    return false;
}
