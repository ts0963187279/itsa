/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  int n;
  cin >> n;
  while(n -- > 0){
    int m;
    cin >> m;
    vector<int> array(m);
    for(int i = 0 ; i < m ; i++)
      cin >> array[i];
    for(int i = 1 ; i < m -1 ; i++){
      vector<int> tmp;
      for(int j = -1 ; j < 2 ; j++){
	tmp.push_back(array[i + j]);
      }
      sort(tmp.begin(),tmp.end());
      array[i] = tmp[1];
    }
    for(int i = 0 ; i < array.size() ; i++){
      cout << array[i] ;
      if(i != array.size() - 1)
	cout << " ";
    }
    cout << endl;
  }      
  return 0;
}

