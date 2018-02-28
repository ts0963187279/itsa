using namespace std;
#include<iostream>
int main(){
  int timeLine[25] = {0};
  int n,max = 0;
  cin >> n;
  for(int i=0;i<n;i++){
    int s,d;
    cin >> s >> d;
    for(int j=s;j<d;j++){
      timeLine[j]++;
      if(timeLine[j] > max)
	max = timeLine[j];
    }
  }
  cout << max <<endl;
  return 0;
}
