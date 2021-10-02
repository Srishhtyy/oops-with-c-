#include<iostream>
using namespace std;

namespace first {
	int add(int a, int b) {
		return (a + b);
	}
}

namespace second {
	float add(float a, float b) {
		return (a + b);
	}
}

int main() {
	int a, b;
	float c, d;
	cin >> a >> b >> c >> d;
	cout << first::add(a, b) << endl;
	cout << second::add(c, d);
}
