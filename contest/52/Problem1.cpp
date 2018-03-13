/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>

struct card{
  int value;
  int color;
  char colorEnglish;
};
bool compareByValue(const card & , const card &);
bool compareByColor(const card & , const card &);
int main(){
  map<char,int> colors;
  colors['S'] = 4;
  colors['H'] = 3;
  colors['D'] = 2;
  colors['C'] = 1;
  int n;
  cin >> n;
  getchar();
  while(n-- >0){
    string input;
    getline(cin,input);
    vector<card> cards;
    for(int i = 0 ; i < input.size() ; i++){
      if(isalpha(input[i])){
	card tmp;
	tmp.colorEnglish = input[i];
	tmp.color = colors[input[i++]];
	tmp.value = int(input[i++]) - int('0');
	while(input[i] != ' ' && i < input.size()){
	  tmp.value *= 10;
	  tmp.value += int(input[i++]) - int('0');
	}
	cards.push_back(tmp);
      }
    }
    sort(cards.begin(),cards.end(),compareByColor);
    sort(cards.begin(),cards.end(),compareByValue);
    for(int i = 0 ; i < cards.size() ; i++){
      cout << cards[i].colorEnglish << cards[i].value;
      if(i != cards.size() - 1)
	cout << " ";
    }
    cout << endl;
  }
  return 0;
}
bool compareByValue(const card &a , const card &b){
  if(a.color == b.color)
    return a.value > b.value;
  return false;
}
bool compareByColor(const card &a , const card &b){
    return a.color > b.color;
}
