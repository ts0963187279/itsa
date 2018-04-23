/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

bool make_square(vector<int> &stick, vector<int> &length , int pos , int target){
  if(pos >= stick.size())
    return length[0] == target && length[1] == target && length[2] == target && length[3] == target;
  for(int i = 0 ; i < 4 ; i ++){
    if(length[i] + stick[pos] <= target){
      length[i] += stick[pos];
      if(make_square(stick,length,pos + 1,target))
	return true;
      length[i] -= stick[pos];
    }
  }
  return false;
}
int main(){
  int n, sum = 0;
  cin >> n;
  vector<int> stick(n), length(4);
  for(int i = 0 ; i < n ; i++){
    cin >> stick[i];
    sum += stick[i];
  }
  if(sum < 4)
    cout << "no" << endl;
  else if(sum % 4 != 0){
    cout << "no" << endl;
  }else{
    if(make_square(stick,length,0,sum / 4))
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }
  return 0;
}

