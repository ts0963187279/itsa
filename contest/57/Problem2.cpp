/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
int main(){
  int N;
  cin >> N;
  while(N-- > 0){
    int M;
    cin >> M ;
    vector<int> heap(M,0);
    for(int i = 0 ; i < M ; i++)
      cin >> heap[i] ;
    for(int i = 1 ; i < M ; i++){
      for(int j = i ; j > 0 ;){
	if(j % 2 == 0){
	  if(heap[j] < heap[(j - 2) / 2]){
	    int tmp = heap[j];
	    heap[j] = heap[(j - 2) / 2];
	    heap[(j - 2) / 2] = tmp;
	    j = (j - 2) / 2;
	  }else
	    break;
	}else{
	  if(heap[j] < heap[(j - 1) / 2]){
	    int tmp = heap[j];
	    heap[j] = heap[(j - 1) / 2];
	    heap[(j -1 ) / 2] = tmp;
	    j = (j - 1) / 2;
	  }else
	    break;
	}
      }
    }
    for(int i = 0 ; i < M ; i++){
      cout << heap[i];
      if(i != M - 1)
	cout << " ";
    }
    cout << endl;
    sort(heap.begin(),heap.end());
    for(int i = 0 ; i < M ; i++){
      cout << heap[i];
      if(i != M - 1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}

