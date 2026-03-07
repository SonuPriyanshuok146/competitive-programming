#include<bits/stdc++.h>
using namespace std;

/*
Count Strictly increasing subarray.

*/

int main(){
    int arr[] = {1, 4, 5, 3, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int c = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){

            if(arr[j-1] >= arr[j]){
                break;
            } 
            else{
                c++;
            }
        }
    }
    cout <<c<<endl;
    return 0;
}

/*
int main(){
    int arr[] = {1, 4, 5, 3, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int c = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            bool flag = true;
            for(int k = i; k < j; k++){
                if(arr[k] >= arr[k+1]){
                    flag = false;
                    break;
                } 
            }
            if(flag == false){
                c++;
            }
        }
    }
    cout <<c<<endl;
    return 0;
}
*/

/*
Maximum sum of a subarray of size k

Given an array of integers arr[] and an integer k, find the maximum possible
sum among all contiguous subarrays of size exactly k.
A subarray ia a sequence of consequtive elements from the original array.
return the maximum sum that can be obtained from any such subarray of length k.
input: arr[] = [100, 200, 300, 400], k = 2
output: 700
*/

/*
int main(){//2:8:46
    int arr[] = {250, 250, 10, 10, 300};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    if(k > n){
        return 0;
    }

    int sum2= 0;
    int maxSum = 0;
    for(int i = 0; i < n; i++){
        if(i < k){
            sum2 += arr[i];
        }else if(i >= k){
            sum2 += arr[i] - arr[i-k];
        }
        maxSum = max(maxSum, sum2);
    }
    cout<<maxSum;
}
*/

/*
int main(){//TC = O(n) //SC = O(n)
    int arr[] = {250, 250, 10, 10, 300};
    //prefix sum = running sum 
    //psum = {250, 500, 510, 520, 820}
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int prefixSum[n] = {0};

    int currentSum = 0;

    if(k > n){
        return 0;
    }

    prefixSum[0] = arr[0];
    for(int i = 1; i < n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }

    // for(int i = 0; i < n; i++){
    //     cout<<prefixSum[i] <<" ";
    // }

    int max_sum = prefixSum[k-1];

    for(int i = 0; i < n-k; i++){
        
        int j = i+k-1;
        currentSum = prefixSum[j+1] - prefixSum[i];
        max_sum = max(max_sum, currentSum);
    }

    cout << max_sum << endl;
    return 0;
}
*/


/*
int main(){//TC = O(n*k)
    int arr[] = {-100, 200, -300, 400};
    int k = 3;
    int max_sum = INT_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);
    if(k > n){
        return 0;
    }

    for(int i = 0; i <= n-k; i++){
        int current_Sum = 0;
        for(int j = 0; j < k; j++){
            current_Sum += arr[i+j];
        }
        max_sum = max(max_sum, current_Sum);
    }
    cout << max_sum << endl;
    return 0;
}
*/