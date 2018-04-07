/*Author: Vector Wang*/
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
struct CARD{
  int num,color;
};
bool compare_card(const CARD , const CARD);
int main(){
  vector<CARD> cards;
  for(int i = 0 ; i < 5 ; i++){
    int n;
    cin >> n;
    CARD card;
    card.color = n % 10;
    n /= 10;
    card.num = n;
    cards.push_back(card);
  }
  sort(cards.begin() , cards.end() , compare_card);
  bool pair = false , double_pair = false , three = false , gourd = false , iron = false , flush = true , straight_flush  = true;
  if(cards[0].num == cards[1].num || cards[1].num == cards[2].num || cards[2].num == cards[3].num || cards[3].num == cards[4].num)
    pair = true;
  if(cards[0].num == cards[1].num && cards[2].num == cards[3].num || cards[0].num == cards[1].num && cards[3].num == cards[4].num ||
     cards[1].num == cards[2].num && cards[3].num == cards[4].num)
    double_pair = true;
  if(cards[0].num == cards[1].num && cards[1].num == cards[2].num || cards[1].num == cards[2].num && cards[2].num == cards[3].num ||
	  cards[2].num == cards[3].num && cards[3].num == cards[4].num)
    three = true;
  if(cards[0].num == cards[1].num && cards[2].num == cards[3].num && cards[3].num == cards[4].num ||
	  cards[0].num == cards[1].num && cards[1].num == cards[2].num && cards[3].num == cards[4].num)
    gourd = true;
  if(cards[0].num == cards[1].num && cards[1].num == cards[2].num && cards[2].num == cards[3].num ||
	  cards[1].num == cards[2].num && cards[2].num == cards[3].num && cards[3].num == cards[4].num)
    iron = true;
  for(int i = 1 ; i < cards.size() ; i++){
    if(cards[i - 1].num + 1 != cards[i].num)
      flush = false;
    if(!flush && cards[i - 1].color != cards[i].color)
      straight_flush = false;
  }
  if(straight_flush)
    cout << 7 << endl;
  else if(flush)
    cout << 6 << endl;
  else if(iron)
    cout << 5 << endl;
  else if(gourd)
    cout << 4 << endl;
  else if(three)
    cout << 3 << endl;
  else if(double_pair)
    cout << 2 << endl;
  else if(pair)
    cout << 1 << endl;
  else
    cout << 0 << endl;
  return 0;
}
bool compare_card(const CARD a, const CARD b){
  return a.num < b.num;
}
