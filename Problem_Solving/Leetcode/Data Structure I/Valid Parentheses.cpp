class Solution {
public:
    bool isValid(string s) {
        
        stack<char>st;
    // loop through the string
    for (int i=0; i<s.size(); i++){

        if (s[i]=='(' || s[i]=='{' || s[i]=='['){
            // push the parenthesis to the stack

            st.push(s[i]);

        }
        else if (s[i]==')' || s[i]=='}' || s[i]==']'){
            // if the stack is empty
            if (st.empty()){
                // return false
                
                return false;
            }
            // if the top of the stack is not equal to the current parenthesis
           else if (st.top()=='(' and s[i] == ')'){
                st.pop();
            }
            else if (st.top()=='{' and s[i] == '}'){
                st.pop();
            }
            else if (st.top()=='[' and s[i] == ']'){
                st.pop();
            }
            // if the top of the stack is equal to the current parenthesis
            else{
                // pop the top of the stack
                return false;
            }
        }
    }

     if (st.empty())return true;
    else{
        return false;
    }
        
    }
};
