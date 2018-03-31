/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>

int main(){
  map<int,int> histogram;
  for(int i = 0 ; i < 10 ; i++)
    histogram[i] = 0;
  int n , most = 0;
  while(cin >> n){
    if(n < 10)
      histogram[0] ++;
    else if(n < 20)
      histogram[1] ++;
    else if(n < 30)
      histogram[2] ++;
    else if(n < 40)
      histogram[3] ++;
    else if(n < 50)
      histogram[4] ++;
    else if(n < 60)
      histogram[5] ++;
    else if(n < 70)
      histogram[6] ++;
    else if(n < 80)
      histogram[7] ++;
    else if(n < 90)
      histogram[8] ++;
    else
      histogram[9] ++;
  }
  for(map<int,int>::iterator it = histogram.begin() ; it != histogram.end() ; it++)
    if(it->second > most)
      most = it->second;
  for(int i = most ; i > 0 ; i--){
    for(map<int,int>::iterator it = histogram.begin() ; it != histogram.end() ; it++){
      if(it->second == i){
	cout << "x";
	it->second--;
      }else{
	cout << " ";
      }
      if(it->first != 9)
	cout << " ";
      else
	cout << endl;
    }
  }
  for(int i = 0 ; i < 10 ; i++){
    cout << i ;
    if(i != 9)
      cout << " ";
  }
  cout << endl;
  return 0;
}

