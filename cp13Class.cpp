#include<bits/stdc++.h>
using namespace std;

/*
Split array into three equal sum segment:
Given an integer array arr[], the task is to divide the array into three non-empty contiguous segments with equal sum. in order words, we need to return an index pair [i, j], such that sum(arr[0...i]) = sum(arr[i+1...j]) = sum(arr[j+1...n-1]).
*/

pair<int, int> spilitSumCheck(int arr[], int n){//TC = O(n)
    int sum = 0;
    int sum1 = 0;
    int idx1 = -1;
    int idx2 = -1;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    if(sum % 3 != 0){
        return {-1, -1};
    }
    int target = sum / 3;
    for(int j = 0; j < n; j++){
        sum1 += arr[j];
        if(sum1 == target && idx1 == -1){
            idx1 = j;
        }else if(sum1 == 2*target && idx2 == -1){
            idx2 = j;
            break;
        }
    }
    if(idx1 == -1 || idx2 == -1) return {-1, -1};
    return {idx1, idx2};
}

int main(){
    int arr[] = {4,3,1,6,2,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    auto res = spilitSumCheck(arr, n);

    cout << res.first <<" "<<res.second<<endl;
    return 0;
}

/*
Product of Array Except self
    Given an array arr[] of n integers, construct a product array res[] (of the same size) such that res[i] is equal to the product of all the elements of arr[] except arr[i].
*/

/*
int main(){
    int arr[] = {4,3,2,6,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res[n] = {0};
    int count = 0;
    int prod = 1;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            count++;
            continue;
        }
        prod *= arr[i];
    }

    for(int i = 0; i < n; i++){
        if(count > 1){
            res[i] = 0;
        }else if(count == 1){
            if(arr[i] == 0){
            res[i] = prod;
            break;
            }
        }else{
            res[i] = prod / arr[i];
        }
    }

    for(int k = 0; k < n; k++){
        cout << res[k] << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
int main(){ // drawback gives incorrect answer if there is atleast one zero and give correct if no zero present.
    int arr[] = {2,4,5,6,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res[n];
    int totalMul = 1;
    for(int i = 0; i < n; i++){
        totalMul *= arr[i];
    }

    for(int i = 0; i < n; i++){
        res[i] = totalMul / arr[i];
    }

    for(int k = 0; k < n; k++){
        cout << res[k] << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
int main(){
    int arr[] = {2,4,5,6,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res[n];
    for(int i = 0; i < n; i++){
        int product = 1;
        for(int j = 0; j < n; j++){
            if(i == j){
                continue;
            }
            product *= arr[j];
        }
        res[i] = product;
    }
    for(int k = 0; k < n; k++){
        cout << res[k] << " ";
    }
    cout << endl;
    return 0;
}
*/