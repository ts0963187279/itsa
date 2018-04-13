/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
int main(){
  int y,m,d,n;
  cin >> y >> m >> d >> n;
  vector<vector<char> > schedul(n);
  for(int i = 0 ; i < n ; i++)
    for(int j = 0 ; j < d ; j++){
      char tmp;
      cin >> tmp;
      schedul[i].push_back(tmp);
    }
  int counter = 0;
  for(int i = 0 ; i < d ; i++){
    bool f = true;
    for(int j = 0 ; j < n ; j++){
      if(schedul[j][i] != 'o')
	f = false;
    }
    if(f){
      cout << i + 1 << endl;
      counter ++;
    }
  }
  if(!counter)
    cout << "X" << endl;
  return 0;
}
