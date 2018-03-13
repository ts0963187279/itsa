/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  vector<int> row;
  vector<int> col;
  vector<char> ans(n,'Y');
  while(n-- > 0){
    int tmp;
    cin >> tmp;
    row.push_back(tmp);
    cin >> tmp;
    col.push_back(tmp);
  }
  for(int i = 0 ; i < row.size() ; i++){
    for(int j = 0 ; j < row.size() ; j++){
      if(i != j){
	if(row[i] != row[j] || col[i] != col[j]){
	  if(row[i] <= row[j] && col[i] <= col[j]){
	    ans[i] = 'N';
	  }
	}
      }
    }
    cout << ans[i];
    if(i != row.size() - 1)
      cout << " ";
  }
  cout << endl;
  return 0;
}
