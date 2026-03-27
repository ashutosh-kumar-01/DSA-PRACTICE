// infix evaluation with brackets  
#include <iostream>
#include <stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2; // for * and /
}
int solve(int val1, int val2, int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2; // for '/'
}
int main(){
    string s = "(7+9)*4/8-3"; //infix expression
    // we need two stacks
    stack<int> val;
    stack<int> op;
    for(int i=0;i<s.length();i++){
        // check if s[i] is a digit (0-9)
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48); // convert char to int and push to val stack
        }
        else { // s[i] it is an operatio
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    // work
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.pop(); // pop the '('
            }
            else if(prio(s[i])>prio(op.top())) op.push(s[i]); 
            
            else{ //priority(s[i]) <= priority(op.top())
                while(op.size()> 0 && prio(s[i]) <= prio(op.top())){
                    // i have to do val1 op val2
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }    
        }
    }
    // the operator stack can have values.
    // so make it empty
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    cout<<val.top()<<endl; // the final answer will be at the top of val stack 
    cout<<(7+9)*4/8-3<<endl; // for checking the answer
}