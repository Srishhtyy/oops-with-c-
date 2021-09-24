#include<iostream>
using namespace std;

bool is_prime(int num) {
	if (num < 2) 
		return false;
	if (num == 2 || num == 3 || num == 5 || num == 7)
		return true;
	if (num % 2 == 0)
		return false;
	for (int x = 3; num > x * x; x += 2) {
		if (num % x == 0) {
			return false;
		}
	}
	return true;
}
int main() 
{
	int n;
	cout << "enter a number:";
	cin >> n;
	if (is_prime(n))
		cout << "prime number" << endl;
	else
		cout << "non-prime number" << endl;
}	
