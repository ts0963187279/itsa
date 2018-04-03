/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

int main(){
  int n;
  cin >> n;
  vector<int> students(n);
  for(int i = 1 ; i <= n ; i++)
    students[i - 1] = i;
  int pointer = 0;
  while(students.size() != 1){
    pointer = (pointer + 4) % students.size();
    students.erase(students.begin() + pointer);
  }
  cout << students[0] << endl;
  return 0;
}

