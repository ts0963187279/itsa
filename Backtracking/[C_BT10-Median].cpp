/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <unordered_set>
void premutation(string &input , int &value , int pos , unordered_set<string> &table);
void swap(char &a , char &b);
int main(){
  int n , max = 0;
  cin >> n;
  vector<int> value(n,0);
  vector<string> inputs(n);
  unordered_set<string> table;
  for(int i = 0 ; i < n ; i++){
    int tmp = 0;
    cin >> inputs[i];
    premutation(inputs[i],tmp,0,table);
    value[i] = tmp;
    if(value[i] > max)
      max = value[i];
  }
  for(int i = 0 ; i < n ; i++){
    if(value[i] == max)
      cout << inputs[i] << endl;
  }
  return 0;
}
void premutation(string &input , int &value , int pos , unordered_set<string> &table){
  table.insert(input);
  value ++;
  if(pos == input.size())
    return ;
  for(int i = 0 ; i < input.size() ; i++){
    if(i != pos){
      swap(input[i],input[pos]);
      if(table.find(input) == table.end()){
	premutation(input,value,pos + 1,table);
      }
      swap(input[i],input[pos]);
    }
  }
}
void swap(char &a , char &b){
  char tmp = a;
  a = b;
  b = tmp;
}
