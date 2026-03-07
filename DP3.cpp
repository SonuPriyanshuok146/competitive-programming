#include<bits/stdc++.h>
using namespace std;

/*
String to integer

Given a string s, convert it into integer format without utilizing any built-in functions.
*/

int main(){
    string s = "-12a3bcd0e0";
    int n = s.size();
    int data = 0;
    bool flag = false;

    for(int i = 0; i < n; i++){
        if(s[i] == '-'){
            flag = true;
            continue;
        }
        if(s[i] >= '0' && s[i] <= '9'){
            int digit = s[i] - '0';
            data = data*10 + digit;
        } 
    }
    if(flag){
        cout << -data<<endl;
    }else{
        cout << data<<endl;
    }

    return 0;
}

/*
int main(){
    string s = "-123";
    int n = s.size();
    int data = 0;
    bool flag = false;

    for(int i = 0; i < n; i++){
        if(s[i] == '-'){
            flag = true;
            continue;
        }
        int digit = s[i] - '0';
        data = data*10 + digit;
    }
    if(flag){
        cout << -data<<endl;
    }else{
        cout << data<<endl;
    }

    return 0;
}
*/


/*
Roman to integer conversion
GIven a string s representing a Roman numerical,
 find it's corresponding integer value.
 I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000
*/

/*
int main(){
    string s = "MCMIV";
    unordered_map<char, int> value = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int dec = 0;

    int n = s.size();
    for(int i = 0; i < n-1; i++){
        if(value[s[i]] < value[s[i+1]]){
            dec -= value[s[i]];
        }else{
            dec += value[s[i]];
        }
    }
    dec += value[s[n-1]]; //add last numerical

    cout << dec <<endl;
    return 0;
}
*/

/*
Common slot of meeting of two persons

you are given two list of availability time slots slt1[][]
and slt2[][], for two people. each slot is represented as [start, end], and it is gurantee that within each list, no two slot overlap (i.e. for any two intervals, either start1 > end1).
given a meeting duration d, return the earliest common time slot of length at least d. if no such slot exist return an empty array.
*/

/*

vector<int> meetingSlot(vector<vector<int>> &slt1, vector<vector<int>> &slt2, int d){
    int i = 0, j = 0;
    while(i < slt1.size() && j < slt2.size()){
        int start = max(slt1[i][0], slt2[j][0]);
        int end = min(slt1[i][1], slt2[j][1]);

        if((end - start) >= d){
            return {start, start+d};
        }

        if(slt1[i][1] < slt2[j][1]){
            i++;
        }else{
            j++;
        }
    }
    return {};
}

int main(){ //TC = O(n + m)
    vector<vector<int>> slt1 = {
        {10, 50},
        {60, 120},
        {140, 210}
    };
    vector<vector<int>> slt2 = {
        {0, 15},
        {60, 70}
    };
    int d = 8;

    vector<int> res = meetingSlot(slt1, slt2, d);

    if(!res.empty()){
        cout << "["<<res[0]<<", "<<res[1]<<"]";
    }else{
        cout << "No common Slot found.!"<<endl;
    }

    return 0;
}
*/

/*
Find duplicate
Given an array arr[] of n elements that contains elements from 0 to n-1
with any of these numbers appearing any number of times. The task is to
find the repeating numbers.
*/

/*
int main(){ //TC = O(n)
    int arr[] = {1, 2, 3, 6, 3, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[n] = {0};

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    for(int i = 0; i < n; i++){
        if(freq[i] > 1){
            cout << i <<" ";
        }
    }

    return 0;
}
*/