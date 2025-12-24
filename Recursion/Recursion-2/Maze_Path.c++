// Maze Path 
#include <iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}
int maze2(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightWays = maze2(row, col-1); //right
    int downWays = maze2(row-1, col);  //down
    return rightWays + downWays;
}
void pritPath(int sr, int sc, int er, int ec, string s){
     if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    pritPath(sr,sc+1,er,ec,s+"R"); //right
    pritPath(sr+1,sc,er,ec,s+"D");  //down
}
int main(){
    cout<<maze(1,1,5,5)<<endl;
    pritPath(1,1,3,3,"");
    cout<<maze2(3,3)<<endl;
    return 0;
}