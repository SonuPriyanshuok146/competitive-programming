#include<bits/stdc++.h>
using namespace std;

/*
valid Parenthesis in an expression

Given a string s containing three types of bracket {}, (), [].
Determine whether the expression are balanced or not.
our expression is valid if each opening bracket have closing bracket of the same type, the pair are properly ordered and no bracket closes before its matching the opening bracket
*/

int main(){
    string arr = "[()()]{}";
    stack<char> s;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == '[' || arr[i] == '(' || arr[i] =='{'){
            s.push(arr[i]);
        }else{
            if(s.empty()){
                cout <<"Not Balanced!";
                return 0;
            }
            char top = s.top();
            if(arr[i] == ')' && top != '(' ||
                arr[i] == '}' && top != '{' ||
                arr[i] == ']' && top != '['){
                cout << "Not Balanced!";
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty()){
        cout << "Balanced expression." << endl;
    }else{
        cout << "Not Balanced!" <<endl;
    }
    
    return 0;
}

/*
Sum of all Subarrays
Given an integer array arr[], compute the sum of all possible sub-arrays of the array. a sub-array is a contiguous part of the array.
1- Brute force code.
*/

/*
int main(){//TC = O(n*n)
    int arr[] = {1, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    long long totalSum = 0;

    for(int i = 0; i < n; i++){
        totalSum += arr[i]*(i+1)*(n-i);
    }
    
    cout <<"Sum of all Subarrays: " <<totalSum <<endl;
    return 0;
}
*/

/*
Longest Mountain subarray

Given  an array arr[] with N elements, the task is to find out
 the longest subarray which has the shape of mountain.

Note: A mountain sub-array starts with an increasing sequence,
 reaches a peak, and then follows a decreasing sequence.

input: a = [4, 3, 5, 7, 9, 6, 3, 2, 8]
output: 7
*/

/*
int main(){//TC = O(n)
    int arr[] = {4, 3, 5, 7, 9, 6, 3, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    if(n < 3){
        cout << 0 <<endl;
        return 0;
    }

    int c = 0;
    for(int i = 1; i < n-1;){
        //find peak at i
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            int j = i;
            int count = 0;

            while(arr[i] > arr[i+1] && (i < n-1)){
                count++;
                i++;
            }
            while(arr[j] > arr[j-1] && (j > 0)){
                count++;
                j--;
            }
            c= max(c, count);
        }else{
            i++;
        }
    }
    if(c > 0){
        cout << c+1 << endl;
    }
    
    return 0;
}
*/

/*
int main(){
    int arr[] = {4, 3, 5, 7, 9, 6, 3, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_len = INT_MIN;
    int i = 0;
    int length = 0;

    while(i < n-1){
        if(arr[i] > arr[i+1] && length == 0){
            i++;
        }else{
            if(arr[i] < arr[i+1]){
                length++;
                i++;
            }else if(arr[i] > arr[i+1]){
                length++;
                max_len = max(length, max_len);
                i++;
                if(arr[i] < arr[i+1]){
                    length = 1;
                    i++;
                }
            }
        }
    }
    cout << max_len+1<<endl;
    return 0;
}
*/

/*
int main(){ //TC = O(n^2)
    int arr[] = {4, 3, 5, 7, 9, 6, 3, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_len = INT_MIN;
    int i, j;

    for(i = 0; i < n; i++){
        int curr_len = 1;
        for(j = i+1; j < n; j++){
            if(arr[i] < arr[j]){
                curr_len++;
            }else{
                break;
            }
        }
        for(; j < n; j++){
            if(arr[i] >= arr[j]){
                curr_len++;
            }else{
                break;
            }
        }
        max_len = max(max_len, curr_len);
    }
    cout<<max_len;
    
    return 0;
}
*/