#include<iostream>
using namespace std;
int main()
{
    string s1("srishti");
    string s2("Srishti");
    int x = s1.compare(s2);
    string s3("sri");
    string s4("sri");
    int y = s3.compare(s4);
    if (x == 0) {
     cout << "equal" << endl;
    } else if (x > 0) {
     cout << "larger" << endl;
    } else {
     cout << "smaller" << endl;
    }
    if (y == 0) {
     cout << "equal" << endl;
    }
    else if (x > 0) {
     cout << "larger" << endl;
    } else {
     cout << "smaller" << endl;
    }
    return 0;
}
