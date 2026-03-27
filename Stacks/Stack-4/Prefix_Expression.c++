#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int evaluatePrefix(string expr)
{
    stack<int> st;

    for (int i = expr.length() - 1; i >= 0; i--)
    {

        if (isdigit(expr[i]))
        {
            st.push(expr[i] - '0'); // convert char to int
        }
        else if (isOperator(expr[i]))
        {

            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (expr[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;
            }
        }
    }

    return st.top();
}

int main()
{
    string expr = "-+7*45+20";
    cout << "Result = " << evaluatePrefix(expr);

    return 0;
}