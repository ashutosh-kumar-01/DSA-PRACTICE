// example 
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string s = "abcdef";
//     // s.subtring(pos, len)
//     string sub = s.substr(2, 3); // Extract substring starting at index
//     cout << sub << endl; // Output: cde
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------------------------
// input a string of even length and return the second half of that string using unbuilt substr function 

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"enter a string of even length: ";
    cin>>str;
    int n = str.length();
    cout<<str.substr(n/2);
    return 0;
}