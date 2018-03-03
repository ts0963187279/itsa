using namespace std;
#include <iostream>
#include <vector>
#include <cmath>
int main(){
  int n,iTotal,iChinese,iEnglish,iMathematic;
  double total = 0,chinese = 0,english = 0,mathematic = 0;
  cin >> n;
  double scores[n][3];
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < 3 ; j++){
      cin >> scores[i][j];
      total += scores[i][j];
      if(j == 0)
	chinese += scores[i][j];
      if(j == 1)
	english += scores[i][j];
      if(j == 2)
	mathematic += scores[i][j];
    }
  }
  total /= n*3.0;
  chinese /= n;
  english /= n;
  mathematic /= n;
  iTotal = floor((total * 10) + 0.5);
  iChinese = floor((chinese * 10) + 0.5);
  iEnglish = floor((english * 10) + 0.5);
  iMathematic = floor((mathematic * 10) + 0.5);
  printf("%.1lf %.1lf %.1lf %.1lf\n",iTotal/10.0,iChinese/10.0,iEnglish/10.0,iMathematic/10.0);
  return 0;
}
