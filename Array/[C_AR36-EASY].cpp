using namespace std;
#include <iostream>
int main(){
	int month,day;
	cin >> month >> day;
	if((month == 1 && day > 20) || (month == 2 && day < 19))
		cout << "Aquarius";
	if((month == 2 && day > 18) || (month == 3 && day < 21))
		cout << "Pisces";
	if((month == 3 && day > 20) || (month == 4 && day < 21))
		cout << "Aries";
	if((month == 4 && day > 20) || (month == 5 && day < 22))
		cout << "Taurus";
	if((month == 5 && day > 21) || (month == 6 && day < 22))
		cout << "Gemini";
	if((month == 6 && day > 21) || (month == 7 && day < 23))
		cout << "Cancer";
	if((month == 7 && day > 22) || (month == 8 && day < 24))
		cout << "Leo";
	if((month == 8 && day > 23) || (month == 9 && day < 24))
		cout << "Virgo";
	if((month == 9 && day > 23) || (month == 10 && day < 24))
		cout << "Libra";
	if((month == 10 && day > 23) || (month == 11 && day < 23))
		cout << "Scorpio";
	if((month == 11 && day > 22) || (month == 12 && day < 22))
		cout << "Sagittarius";
	if((month == 12 && day > 21) || (month == 1 && day < 21))
		cout << "Capricorn";
	cout << endl;
	return 0;
}
