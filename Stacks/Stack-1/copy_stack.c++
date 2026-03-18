// copy stack into another stack in same order 
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> original;

    original.push(1);
    original.push(2);
    original.push(3);

    // Simple copy
    stack<int> copy = original;

    // Print copied stack
    cout << "Copied stack: ";
    while (!copy.empty()) {
        cout << copy.top() << " ";
        copy.pop();
    }

    return 0;
}