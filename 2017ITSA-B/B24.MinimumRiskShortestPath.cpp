/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
struct edge{
  vector<int> from , w ;
  vector<unsigned int> r;
};
int main(){
  int t;
  cin >> t;
  while(t -- > 0){
    int n , m;
    cin >> n >> m;
    vector<edge> edges(m);
    for(int k =  0 ; k < m ; k++){
      int i , j , r, w;
      cin >> i >> j >> r >> w;
      edges[j].from.push_back(i);
      edges[j].r.push_back(r);
      edges[j].w.push_back(w);
    }
    vector<unsigned int> r(n, 1e5) ;
    vector<unsigned long long int> w(n , 0);
    queue<int> q;
    q.push(n - 1);
    r[n -1] = 0;
    while(!q.empty()){
      int current = q.front();
      q.pop();
      for(int i = 0 ; i < edges[current].from.size() ; i++){
	int from = edges[current].from[i];
	unsigned int risk = edges[current].r[i];
	unsigned long long int weights = edges[current].w[i];
	if(r[from] > max(risk , r[current]) || (r[from] == max(risk , r[current]) && w[from] > weights + w[current])){
	  r[from] = max(risk , r[current]);
	  w[from] = weights + w[current];
	  q.push(from);
	}
      }
    }
    if(r[0] != 1e5)
      cout << r[0] << " " << w[0] << endl;
    else
      cout << "-1" << endl;
  }
  return 0;
}
