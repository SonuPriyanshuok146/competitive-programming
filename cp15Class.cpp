#include<bits/stdc++.h>
using namespace std;

/*
Equal Odd-Even Sum After removal

Given an integer array arr[], how many indices can be removed such that the sum of elements at even indices equals the sum of elements at odd indices in resulting array. 

input: arr[] = [2, 1, 6, 4];
output: 1

1- Brute force: 

*/

int main(){ //TC = O(n^2)
    int arr[] = {2,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for(int i = 0; i < n; i++){
        int evenS = 0;
        int oddS = 0;
        int idx = 0;
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            if(idx % 2 == 0){
                evenS += arr[j];
            }else{
                oddS += arr[j];
            }
            idx++;
        }
        if(evenS == oddS){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}


/*
Maximum Subarray Sum -->> v.v.v imp

given an integer arr[], find the subarray (containing at least one element) which has the maximum possible sum, and return that sum.
Note: A subarray is a continuous part of an array.
1. Brute force. --> O(n^2)
2. Optimised. --> O(n) --> Kadane's Algo
*/

/*
int main(){ //TC = O(n^2)
    int arr[] = {2, 6, -7, 13, 0, 4};
    int max_sum = INT_MIN;
    int curr_sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        curr_sum = max(arr[i], (curr_sum + arr[i]));
        max_sum = max(max_sum, curr_sum);
    }

    cout<< " Maximum Subarray Sum = "<< max_sum << endl;

    return 0;
}
*/

/*
int main(){ //TC = O(n^2)
    int arr[] = {2, 6, -7, 13, 0, 4};
    int sum = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        int currSum = 0;
        for(int j = i; j < n; j++){
            currSum += arr[j];
            sum = max(sum, currSum);
        }
    }

    cout<< " Maximum Subarray Sum = "<< sum << endl;

    return 0;
}
*/