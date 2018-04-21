/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>

bool find(vector<vector<char> > &map , int i , int j){
  if(i == map.size() - 2 && j == map.size() - 2){
    map[i][j] = '#';
    return true;
  }
  if(map[i][j] == '0'){
    map[i][j] = '#';
    if(find(map,i + 1,j) || find(map,i - 1,j) || find(map,i,j + 1) || find(map,i,j - 1))
      return true;
    else{
      map[i][j] = '0';
      return false;
    }
  }else
    return false;
}
int main(){
  string input;
  vector<vector<char> > map;
  while(getline(cin,input)){
    vector<char> tmp;
    for(int i = 0 ; i < input.size() ; i++)
      if(input[i] != ' ')
	tmp.push_back(input[i]);
    map.push_back(tmp);
  }
  find(map,1,1);
  for(int i = 0 ; i < map.size() ; i++){
    for(int j = 0 ; j < map.size() ; j++){
      cout << map[i][j];
      if(j != map.size() - 1)
	cout << " ";
    }
    cout << endl;
  }

  return 0;
}

