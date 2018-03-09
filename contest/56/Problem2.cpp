/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
int main(){
  int n;
  cin >> n;
  while(n-- > 0){
    int N,n1,d1,n2,d2;
    cin >> N >> n1 >> d1 >> n2 >> d2;
    vector<int> backpack(N + 1,0);
    vector<int> price(N + 1,999999);
    price[0] = 0;
    for(int i = 1 ; i <= N ; i++){
      if(i - n1 >= 0){
	if(price[i - n1] + d1 < price[i]){
	  price[i] = price[i - n1] + d1;
	  backpack[i] = 1;
	}
      }
      if(i - n2 >= 0){
	if(price[i - n2] + d2 < price[i]){
	  price[i] = price[i - n2] + d2;
	  backpack[i] = 2;
	}
      }
    }
    if(backpack[N] != 0){
      int counter1 = 0,counter2 = 0;
      for(int i = N ; i > 0 ;){
	if(backpack[i] == 1){
	  counter1 ++;
	  i = i - n1;
	}else{
	  counter2 ++;
	  i = i - n2;
	}
      }
      cout << counter1 << " " << counter2 <<endl;
    }else{
      cout << "false" <<endl;
    }    
  }
  return 0;
}
