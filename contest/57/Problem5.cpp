/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>
int main(){
  int N;
  cin >> N;
  while(N-- > 0){
    int p,wait = 0,last = 0;
    cin >> p;
    vector<int> jobs(p,0);
    for(int i = 0 ; i < p ; i++){
      cin >> jobs[i];
    }
    sort(jobs.begin(),jobs.end());
    for(int i = 1 ; i < p ; i++){
      last += jobs[i - 1];
      wait += last;
    }
    cout << wait << endl;
  }
  return 0;
}

