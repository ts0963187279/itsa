/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <map>
int find_place(vector<vector<int> > &lines ,int n ,int N,int x);
int main(){
  int n;
  while(cin >> n){
    map<vector<vector<int> > , int> table;
    vector<vector<int> > lines(3);
    lines[0].resize(n,0);
    lines[1].resize(n*2,0);
    lines[2].resize(n*2,0);
    int x,y;
    cin >> x >> y;
    lines[0][y] = lines[1][x + y] = lines[2][x - y + n] = 1;
    int vaild = find_place(lines,0,n,x);
    if(vaild > 0)
      cout << "YES(" << vaild << ")" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
int find_place(vector<vector<int> > &lines ,int n ,int N,int x){
  int sum = 0;
  if(n == x)
    n ++;
  if(n >= N){
    sum ++;
  }else{
    for(int i = 0 ; i < N ; i++){
      if(lines[0][i] == 0 && lines[1][n + i] == 0 && lines[2][n - i + N] == 0){
	lines[0][i] = lines[1][n + i] = lines[2][n - i + N] = 1;
	sum += find_place(lines,n + 1,N , x);
	lines[0][i] = lines[1][n + i] = lines[2][n - i + N] = 0;
      }
    }
  }
  return sum;
}
