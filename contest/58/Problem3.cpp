/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <cmath>
int main(){
  int m;
  cin >> m;
  while(m-- > 0){
    int C;
    string line,token,nagtive;
    vector<int> points;
    cin >> C;
    getchar();
    getline(cin,line);
    for(int i = 0 ; i < line.size() ; i++){
      if(line[i] == '('){
	int weight = 0;
	while(line[i] != ',')
	  i++;
	i++;
	while(line[i] != ')'){
	  weight += int(line[i]) - int('0');
	  if(line[i+1] != ')')
	    weight *= 10;
	  i++;
	}
	points.push_back(weight);
      }
    }
    bool first =  true;
    for(int i = 0 ; i < points.size() ; i++){
      if(i * 2 + 2 >= points.size())
	break;
      if(abs(points[i] - points[(i * 2) + 1]) <= C){
	if(!first)
	  cout << " ";
	cout << char(int('A') + i) << char(int('A') + (i * 2) + 1);
	first = false;
      }
      if(abs(points[i] - points[(i * 2) + 2]) <= C){
	if(!first)
	  cout << " ";
	cout << char(int('A') + i) << char(int('A') + (i * 2) + 2);
	first = false;
      }
    }
    cout << endl;
  }
  return 0;
}
