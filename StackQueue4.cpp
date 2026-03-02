#include<bits/stdc++.h>
using namespace std;

/*
Check if two strings after processing  # character are equal or not

Given two strings s1 and s2, let us assume that
while typing the strings there were some backspaces
encountered which are represented by #. the task 
is to determine whether the result strings after 
processing the backspace character would be equal or not.
*/

int main(){
    string s1 = "equ#al";
    string s2 = "e#qu#al";

    string r1 = "", r2 = "";

    int n1 = s1.size();
    int n2 = s2.size();

    for(int i = 0; i < n1; i++){
        if(s1[i] != '#'){
            r1 = r1 + s1[i];
        }
    }

    for(int i = 0; i < n2; i++){
        if(s2[i] != '#'){
            r2 = r2 + s2[i];
        }
    }

    cout << "R1 is : " << r1 << endl;
    cout << "R2 is : " << r2 << endl;

    if(r1 == r2){
        cout << "YES" << endl;
    }else{
        cout << "NO" <<endl;
    }
    return 0;
}

/*
Remove all duplicate adjacent characters from a string using stack

Given a string, str, task is to remove all the duplicate adjacent characters from the given string.

input: str = "azxxzy"
output: azzy --> ay
*/

/*
int main(){
    string str = "azxxzy";
    stack<char> st;

    for(char ch : str){
        if(!st.empty() && st.top() == ch){
            st.pop();
        }else{
            st.push(ch);
        }
    }

    string result;
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(), result.end());

    cout<<result <<endl;

    return 0;
}
*/

/*
Reverse individual words
Given string str, we need to print the reverse of individual words.

input: Hello world
output: olleH dlrow
*/

/*
int main(){//TC = O(n)
    string s = "Balance Yourself!";
    int n = s.size();
    stack<char> st;
    stack<char> temp;

    for(int i = 0; i < n; i++){
        if(s[i] == ' '){
            while(st.size()> 0){
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }else{
            st.push(s[i]);
        }
    }
    while(st.size() > 0){
        cout << st.top();
        st.pop();
    }
    
    return 0;
}
*/

/*
Delete middle element of stack
Given a stack with push(), pop(), and empty() operations,
The task is to delete the middle element of it
without using any additional data structure.

input: hello
output: oleh
*/

/*
int main(){//1:04: 00
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    int n = s.size();
    int mid = n / 2;

    stack<int> temp;
    for(int i = 0; i < mid; i++){
        temp.push(s.top());
        s.pop();
    }
    s.pop();

    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }

    cout << "Stack after deleting middle:\n";
    cout << "[";
    while(!s.empty()){
        cout << s.top();
        s.pop();
        if(!s.empty()){
            cout << ",";
        }
    }
    cout << "]";

    return 0;
}
*/

/*
Reverse a string using stack
Given a string str, the task is to reverse it using stack.

1. you can use another string
*/

/*
int main(){
    string str = "Balance";

    stack<char> st;

    for(int i = 0; i < str.size(); i++){
        st.push(str[i]);
    }
    string str1(str.size(), ' ');
    for(int j = 0; j < str.size(); j++){
        str1[j] = st.top();
        st.pop();
    }
    cout <<"Reversed String: " <<str1 <<endl;

    return 0;
}
*/