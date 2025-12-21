// input a string of even length and reverse first half of the string..
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int n = s.length();
    reverse(s.begin(), s.begin() + n / 2);
    cout << s << endl;
    return 0;
}