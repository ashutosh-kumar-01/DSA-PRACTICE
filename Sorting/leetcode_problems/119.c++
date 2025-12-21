#include <vector>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int> > arr;
        for(int i=0;i<=rowIndex;i++){
            vector<int> a(i+1);
            arr.push_back(a);
        }
        for(int i=0;i<=rowIndex;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || i==j){
                    arr[i][j] = 1;
                }
                else{
                    arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
                }
            }
        }
        vector<int> v;
        for(int i=0;i<=rowIndex;i++){
            v.push_back(arr[rowIndex][i]);
        }
        return v;
    }
};