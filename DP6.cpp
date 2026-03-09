#include<bits/stdc++.h>
using namespace std;

/*
Intersection of intervals given by two lists

given a 2-D arrays which represent intervals. each 2-D array represents a list of intervals.
each list of intervals is disjoint and sorted in increasing order. find the
intersection or set of ranges that are common to both the lists.
Disjoint means no element is common in a list.
input: arr1[][] = {{0,4}, {5,10}, {13,20}, {24,25}}
        arr2[][] = {{1,5}, {8,12}, {15,24}, {25,26}}
output: {{1,4}, {5,5}, {8,10}, {15,20}, {24,24}, {25,25}};
*/

int main(){
    vector<vector<int>>arr1 = {{0,4}, {5,10}, {13,20}, {24,25}};
    vector<vector<int>>arr2 = {{1,5}, {8,12}, {15,24}, {25,26}};

    int n = arr1.size();
    int m = arr2.size();

    int i = 0, j = 0;

    while(i < n && j < m){
        int l = max(arr1[i][0], arr2[j][0]);
        int r = min(arr1[i][1], arr2[j][1]);

        if(l <= r){
            cout << "["<<l<<","<<r<<"]"<<endl;
        }

        if(arr1[i][1] < arr2[j][1]){
            i++;
        }else{
            j++;
        }
    }
    return 0;
}


/*
Majority Element

Given an array of size n, find the element that appears more than [n/2] times. if no such elements exist return -1.
input: arr[] = {1, 1, 2, 1, 3, 5, 1}
output: 1
*/

/*
int main(){//Tc = O(n) //SC = O(1) //Boyer–Moore approach
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    //find candidate
    int candidate = -1, count = 0;
    for(int i = 0; i < n; i++){
        if(count == 0){
            candidate = arr[i];
            count = 1;
        }else if(arr[i] == candidate){
            count++;
        }else{
            count--;
        }
    }

    //verify candidate
    count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == candidate){
            count++;
        }
    }

    if(count > n/2){
        cout<< candidate <<endl;
    }else{
        cout << -1 <<endl;
    }
    return 0;
}
*/

/*
int main(){
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = n/2;
    
    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }
    int majority = -1;
    for(auto p : freq){
        if(p.second > k){
            majority = p.first;
            break;
        }
    }
    cout << majority <<" ";
    return 0;
}
*/

/*
int main(){//Tc = O(n^2) //SC = O(1)
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = n/2;
    
    int majority = -1;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > k){
            majority = arr[i];
        }
    }
    cout << majority <<" ";
    return 0;
}
*/


/*
Count Subarray with exactly K Distinct Elements
input arr[] = {1, 2, 2, 3}
Output: 4
*/

/*
int main(){
    int arr[] = {3, 1, 2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int count = 0;
    

    for(int i = 0; i < n; i++){
        unordered_set<int> s;
        for(int j = i; j < n; j++){
            s.insert(arr[j]);

            if(s.size() > k){
                break;
            }else if(s.size() == k){
                count++;
            }
        }
    }
    cout <<count << endl;
    return 0;
}
*/