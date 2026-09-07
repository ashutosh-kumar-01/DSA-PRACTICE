// # minimum cost ot cut a board into squares
// a board of length m and n is given . the task is to break this board into m*n squares such
// the cost of breaking is minimum. the cutting cost for each edge will be given for the board in two 
// arrays x[] y[] . in short yoou need to choose such a sequence if cutting such that cost is minimized . return the min cost 



#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;


// custom comparator for sorting in descending order
bool cmp(int x, int y){
    return x>y;
}

ll minCostToBreakGrid(int n, int m, vector<ll> &x, vector<ll> &y){
    sort(x.begin(),x.end(),cmp);
    sort(y.begin(),y.end(),cmp);
    int hz = 1;
    int vr = 1;
    int h = 0, v = 0;
    ll ans = 0;
    while(h<y.size() and v<x.size()){
        if(x[v] > y[h]){
            ans += x[v]*vr;
            hz++;
            v++;
        }
        else{
            ans += y[h]*hz;
            vr++;
            h++;
        }
    }
    while(h<y.size()){
        ans += y[h]*hz;
        h++;
    }
    while(v<x.size()){
        ans += x[v]*vr;
        v++;
    }
    return ans;

}
int main(){
    int n, m;
    cin>>m>>n;
    vector<ll> y, x;
    for(int i=0; i<m-1;i++){
        int xx;
        cin>>xx;
        x.push_back(xx);
    }
    for(int i=0; i<n-1;i++){
        int yy;
        cin>>yy;
        y.push_back(yy);
    }
    cout<<minCostToBreakGrid(n, m, x, y)<<endl;
    return 0;
}