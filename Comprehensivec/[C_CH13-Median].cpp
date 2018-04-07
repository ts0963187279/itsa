/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n,water = 0;
  cin >> n;
  vector<int> road(n);
  for(int i = 0 ; i < n ; i++)
    cin >> road[i];
  for(int i = 1 ; i < n - 1 ; i++){
    int right = -1 , left = -1 , max_right = road[i], max_left = road[i];
    for(int j = i ; j >= 0 ; j--)
      if(road[j] > max_left){
        left = j;
	max_left = road[j];
      }
    for(int j = i ; j < n ; j++)
      if(road[j] > max_right){
	right = j;
	max_right = road[j];
      }
    if(right != -1 && left != -1){
      water += (road[left] < road[right] ? road[left] - road[i] : road[right] - road[i]);
    }
  }
  cout << water << endl;
  return 0;
}

