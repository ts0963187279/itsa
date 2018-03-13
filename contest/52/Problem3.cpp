/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  while(n-- > 0){
    int M;
    cin >> M;
    vector<int> pancakes(M);
    for(int i = 0 ; i < M ; i++)
      pancakes[i] = i + 1;
    int floor;
    cin >> floor;
    while(floor != 0){
      for(int i = 0,j = floor - 1 ; i < j ; i++,j--){
	int tmp = pancakes[i];
	pancakes[i] = pancakes[j];
	pancakes[j] = tmp;
      }
      cin >> floor;
    }
    for(int i = 0 ; i < M ; i++){
      cout << pancakes[i];
      if(i != M -1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}
