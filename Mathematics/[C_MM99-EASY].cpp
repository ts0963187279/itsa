/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

struct num{
  int prime,remainder;
};
int main(){
  int prime,remainder;
  vector<num> list;
  while(cin >> prime >> remainder){
    num n;
    n.prime = prime;
    n.remainder = remainder;
    list.push_back(n);
  }
  int ans = 0;
  bool find = false;
  while(!find){
    ans ++;
    for(int i = 0 ; i < list.size() ; i ++){
      if(ans % list[i].prime != list[i].remainder){
	find = false;
	break;
      }
      find = true;
    }
  }
  cout << ans << endl;
  return 0;
}
