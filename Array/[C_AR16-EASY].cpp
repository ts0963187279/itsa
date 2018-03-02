using namespace std;
#include <iostream>

int main(){
  string special,jackpot[3];
  int N;
  cin >> special;
  for(int i = 0 ; i < 3 ; i++)
    cin >> jackpot[i];
  cin >> N;
  int sum = 0;
  int get[7] = {0};
  bool award[7];
  while(N-- > 0){
    string invoice;
    cin >> invoice;
    award[0] = true;
    for(int j = 0 ; j < 8 ; j++){
      if(invoice[j] != special[j]){
	award[0] = false;
	break;
      }
    }
    if(award[0]){
      get[0]++;
    }else{
      for(int i = 1 ; i < 7 ; i++){
	for(int j = 0 ; j < 3 ; j ++){
	  award[i] = true;
	  for(int k = i - 1; k < 8 ; k ++){
	    if(invoice[k] != jackpot[j][k]){
	      award[i] = false;
	      break;
	    }
	  }
	  if(award[i]){
	    get[i] ++ ;
	    break;
	  }
	}
	if(award[i]){
	  break;
	}
      }
    }      
  }
  sum += 2000000 * get[0] + 200000 * get[1] + 40000 * get[2] + 10000 * get[3] + 4000 * get[4] + 1000 * get[5] + 200 * get[6];
  for(int i = 0 ; i < 7 ; i++){
    cout << get[i];
    if(i != 6){
      cout << " ";
    }
  }
  cout << endl;
  cout << sum <<endl;
  return 0;
}

