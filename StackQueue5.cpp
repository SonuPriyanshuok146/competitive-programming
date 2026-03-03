#include<bits/stdc++.h>
using namespace std;

/*
Sort a stack using a temporary stack
Given a stack of integers, sort it in ascending order using another temprary stack.
*/

int main(){
    stack<int> st;
    st.push(23);
    st.push(43);
    st.push(54);
    st.push(13);
    st.push(34);

    stack<int> temp;

    while(!st.empty()){
        int curr = st.top();
        st.pop();

        while(!temp.empty() && temp.top() > curr){
            st.push(temp.top());
            temp.pop();
        }
        temp.push(curr);
    }

    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }

    while(!st.empty()){
        cout<<st.top() <<" ";
        st.pop();
    }
    return 0;
}

/*
Check redundant Bracket

Given a balanced expression string s, check if it
 contains redundant parentheses. return true if
redundant, else false.
redundant parenthesis: parenthesis are redundant
if removing them does not change the expression.
Note: Expression is valid, contains operators +,
-, *, /, and no spaces.
*/

/*
#include <bits/stdc++.h>
using namespace std;

bool checkRedundant(string &s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == ')') {
            bool hasOperator = false;

            // Pop until '('
            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                    hasOperator = true;
                st.pop();
            }

            // Pop the '('
            if (!st.empty()) st.pop();

            // If no operator found, parentheses are redundant
            if (!hasOperator) return true;
        } else {
            st.push(ch);
        }
    }
    return false;
}

int main() {
    string s = "(a+(b)/c)";
    if (checkRedundant(s))
        cout << "YES";  // redundant
    else
        cout << "NO";   // not redundant
    return 0;
}
*/


/*
Find the maximum depth of nested parenthesis in a string
Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.

Input: s = "(1+(2*3)+((8)/4))+1"
Output: 3
Explanation:
Digit 8 is inside of 3 nested parentheses in the string.
*/

/*
int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    int currentdepth = 0;
    int maxdepth = 0;

    for(char ch : s){
        if(ch == '('){
            currentdepth++;
            maxdepth = max(maxdepth, currentdepth);
        }else if(ch == ')'){
            currentdepth--;
        }
        
    }
    cout << maxdepth << endl;
    return 0;
}
*/

/*
Reverse the first k element of the stack

Given an integer k 
*/

/*
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;
    int n = q.size();

    stack<int> st;
    for(int i = 0; i < k; i++){ //push first k element to stack
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){ //push stack element to queue
        q.push(st.top());
        st.pop();
    }

    for(int j = 0; j < n-k; j++){ //move first (n-k) element to back and delete front element
        q.push(q.front());
        q.pop();
    }

    while(!q.empty()){ //now print required eement
        cout << q.front() <<" ";
        q.pop();
    }

    return 0;
}
*/

/*
Reversing a Queue:
Given a queue q[], reverse the queue so that the
front element becomes the rear and the rear 
elements becomes the front, while preserving the 
order of the remaining element accordingly.
1. Can use extra space - can use a stack.
2. without using extra stack explicitly.
*/

/*
void reverseQueue(queue<int> &q){
    if(q.empty()){
        return;
    }
    int temp = q.front();
    q.pop();
    reverseQueue(q);
    q.push(temp);
}

int main(){
    queue<int> q;
    q.push(12);
    q.push(23);
    q.push(34);
    q.push(56);
    q.push(67);

    reverseQueue(q);

    while(!q.empty()){
        cout << q.front() <<" ";
        q.pop();
    }
 
    return 0;
}
*/

/*
int main(){
    queue<int> q;
    q.push(12);
    q.push(23);
    q.push(34);
    q.push(56);
    q.push(67);

    stack<int> st;

    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    while(!q.empty()){
        cout << q.front() <<" ";
        q.pop();
    }
 
    return 0;
}
*/