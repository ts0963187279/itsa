using namespace std;
#include <iostream>
int main(){
  int N;
  cin >> N;
  while(N-- >0){
    int A,B,C;
    cin >> A >> B >> C;
    int wheel[C];
    for(int i = 0 ; i < C ; i ++){
      wheel[i] = i + 1;
    }
    int counter = 0;
    int time = 0;
    int position = 0;
    while(counter < C - 1){
      if(time % 2 == 0){
	for(int i = 0 ; i < B ; ){
	  position = (position + 1) % C;
	  if(wheel[position] > 0){
	    i ++;
	  }
	}
	wheel[position] = 0;
      }else{
	for(int i = 0 ; i < A ;){
	  if(position - 1 < 0)
	    position = C - 1 ;
	  else
	    position -= 1;
	  if(wheel[position] > 0){
	    i ++;
	  }
	}
	wheel[position] = 0;
      }
      counter ++;
      time++;
    }
    for(int i = 0 ; i < C ; i ++){
      if(wheel[i] > 0)
	cout << wheel[i] << endl;
    }
  }
  return 0;
}
