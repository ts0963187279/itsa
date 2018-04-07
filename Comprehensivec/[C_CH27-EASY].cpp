/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int a,b;
  while(cin >> a >> b){
    vector<int> list;
    for(int i = a; i <= b ; i++){
      if(i > 10){
	int last = i % 10 , tmp = i / 10,first;
	while(tmp > 0){
	  first = tmp % 10;
	  tmp /= 10;
	}
	if(last == first)
	  list.push_back(i);
      }else if(i < 10)
	list.push_back(i);
    }
    if(list.size() > 0){
      for(unsigned int i = 0 ; i < list.size() ; i++){
	cout << list[i];
	if(i != list.size() - 1)
	  cout << " ";
      }
    }else
      cout << 0;
    cout << endl;
  }
  return 0;
}

