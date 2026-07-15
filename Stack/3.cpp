#include <bits/stdc++.h>
using namespace std;

int prefixEval(string expr) {
    stack<int> st;
    for (int i = expr.size() - 1; i >= 0; i--) {
        char c = expr[i];
        
        if (isdigit(c)) {
            st.push(c - '0');
        } 
        else {
            
            int op1 = st.top(); st.pop();
            int op2 = st.top(); st.pop();
            
            switch(c) {
                case '+': st.push(op1 + op2); break;
                case '-': st.push(op1 - op2); break;
                case '*': st.push(op1 * op2); break;
                case '/': st.push(op1 / op2); break;
            }
        }
    }
    return st.top();
}

int main() {
    string s = "-+7+45+20"; 
    cout << "Result: " << prefixEval(s) << endl;
    return 0;
}
