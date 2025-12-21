#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Copy and reverse the array
    vector<int> revArr(n);
    for (int i = 0; i < n; i++) {
        revArr[i] = arr[n - 1 - i];
    }

    // Print reversed array
    for (int i = 0; i < n; i++) {
        cout << revArr[i] << " ";
    }

    return 0;
}
