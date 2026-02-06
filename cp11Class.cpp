#include<bits/stdc++.h>
using namespace std;

int main(){
    //given  a sentence where words are separated by space.
    //create another sentence where the order of the words is reverse

    string s = "Never fell shame on our apperance";
    int n = s.size();
    for(int i = n-1; i >= 0; i--){
        if(s[i] == ' '){
            for(int j = i + 1; j < n; j++){
                cout << s[j];
            }
            cout << " ";
            n = i; // to set cursor to require position
        }
    }
    for(int i = 0; i < n; i++){
        cout << s[i];
    }
    return 0;
}

/*
int main(){
    //given  a sentence where words are separated by space.
    //create another sentence where the order of the words is reverse

    string s = "Never fell shame on our apperance";
    int n = s.size();
    for(int i = n-1; i >= 0; i--){
        if(s[i] == ' '){
            for(int j = i + 1; j < n; j++){
                cout << s[j];
            }
            cout << " ";
            n = i; // to set cursor to require position
        }
    }
    for(int i = 0; i < n; i++){
        cout << s[i];
    }
    return 0;
}
*/

/*
int main(){// TC = O(n^2) SC = O(1)
    //find the first non- repeating character in the given array
    //if all the character are repeating then print invalid
    //ip = "racecars" // output: e
    string s = "racecars";
    int n = s.size();

    for(int i = 0; i < n; i++){
        int count = 0;
        bool flag = true;
        for(int j = 0; j < n; j++){
            if(s[i] == s[j]){
                count++;
            }
        }
        if(count == 1){
            cout << s[i] <<endl;
            return 0;
        }
    }
    cout << "Invalid" << endl;
    return 0;
}
*/

/*
int main(){
    //find the first non- repeating character in the given array
    //if all the character are repeating then print invalid
    //ip = "racecars" // output: e
    string s = "racecars";
    int n = s.size();
    for(int i = 0; i < n; i++){
        bool flag = true;
        for(int j = i+1; j < n; j++){
            if(s[i] == s[j]){
                flag = false;
                continue;
            }
        }
        if(flag){
            cout << s[i] <<endl;
            return 0;
        }
    }
    cout << "Invalid" << endl;
    return 0;
}
*/

/*
int main(){//TC = O(n) SC = O(1)
    //part2 - you can use extra space.
    string s = "Artificial Intelligence";
    int n = s.size();
    int left = 0;
    int right = n-1;
    while(left < right){
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        right--;
        left++;
    }

    cout << s;
}
*/

/*
int main(){//TC=O(n) | SC = O(n)
    //part1 - you can use extra space (reverse).
    string s = "Artificial Intelligence";
    string rev = "";
    int n = s.size();
    int k = n-1;
    for(int i = 0; i < n; i++){
        rev += s[k--];
    }

    cout << rev;
}
*/

/*
int main(){
    //given a string s, check if it is palindrome or not.
    string s = "maddam";
    int n = s.size();
    bool flag = true;
    string s1 = "";
    for(int i = n-1; i >= 0; i--){
        s1 += s[i];
    }
    if(s != s1){
        cout << "Not Palindrome";
    }else{
        cout << "Palindrome";
    }
    return 0;
}
*/

/*
int main(){//Time Complexity = O(n) : SC = O(1)
    //given a string s, check if it is palindrome or not.
    string s = "maddam";
    int n = s.size();
    bool flag = true;
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n-1-i]){
            flag = false;
            break;
        }
    }
    if(!flag){
        cout << "Not Palindrome";
    }else{
        cout << "Palindrome";
    }
    return 0;
}
*/

/*
int main(){
    //given a string, print all the characters that are present at odd indices (starting from 0), print them in same order as they appear in the given string
    string s = "Balance Yourself";
    int n = s.size();
    for(int i = 1; i < n; i += 2){
        cout << s[i] << " ";
        
    }
    return 0;
}
*/

/*
int main(){
    //given a string, print all the characters that are present at odd indices (starting from 0), print them in same order as they appear in the given string
    string s = "Balance Yourself";
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(i % 2 != 0){
            cout << s[i] << " ";
        }
        
    }
    return 0;
}
*/

/*
int main(){
    //given a string, print all the characters that are present at even indices (starting from 0), print them in same order as they appear in the given string
    string s = "Balance Yourself";
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout << s[i] << " ";
        }
        
    }
    return 0;
}
*/

/*
int main(){
    //given a string, print all the characters that are present at even indices (starting from 0), print them in same order as they appear in the given string
    string s = "Balance Yourself";
    int n = s.size();
    for(int i = 0; i < n; i += 2){
        cout << s[i] << " ";
    }
    return 0;
}
*/

/*
int main(){
    string s = "Aditya Jain";
    int n = s.size();

    // for(int i = 0; i < n; i++){
    //     cout << s[i] << " ";
    // }

    //Range based loop
    for(char ch : s){
        cout << ch <<" ";
    }

    return 0;
}
*/