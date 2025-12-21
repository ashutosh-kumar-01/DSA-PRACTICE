// convert inter into string using to_string function in C++14
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     int x = 123456789;
//     string str = to_string(x);
//     cout<<"The string is: "<<str;
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------------------------------
// return the total number of digits in a number without using any loop 
// hint : try using inbuilt to_string() function 

#include <iostream>
#include <string>
using namespace std;
int main(){
    int num = 12345678;
    string str = to_string(num);
    cout<<str.length();
    return 0;
}
