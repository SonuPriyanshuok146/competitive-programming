#include<bits/stdc++.h>
using namespace std;

/*
Missing ranges of numbers

You have an inclusive interval [lower, upper] and a sorted array of integer arr[], all of which lie within this interval.
 A number X is considered missing if X is in the range [lower, upper] but not present in arr.
  your task is to return the smallest set of sorted ranges that includes
all issing numbers, ensuring no element from arr is within any range, and every missing number is covered exactly once.
*/

int main(){
    int arr[] = {14, 15, 20, 30, 31, 45};
    int lower = 10, upper = 50;
    int res[upper-lower+1];
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 0;

    if(arr[0] - lower > 1){
        cout << "[" << lower <<", "<<arr[0] - 1 <<"]";
    }

    for(int i = 0; i < n-1; i++){
        if(arr[i+1] - arr[i] > 1){
            cout << "[" << arr[i] + 1 <<", "<<arr[i+ 1] - 1 <<"]";

        }
        
    }

    if(upper - arr[n-1] > 0){
        cout << "[" << arr[n-1] + 1 <<", "<<upper <<"]";

    }
    return 0;
}

/*
int main(){
    int arr[] = {14, 15, 20, 30, 31, 45};
    int lower = 10, upper = 50;
    int res[upper-lower+1];
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 0;

    if(arr[0] - lower > 1){
        for(int j = lower; j < arr[0]; j++){
            res[k++] = j; 
        }
    }

    for(int i = 0; i < n-1; i++){
        if(arr[i+1] - arr[i] > 1){
            for(int m = arr[i] + 1 ; m < arr[i+1]; m++){
            res[k++] = m;
        }
        }
        
    }

    if(upper - arr[n-1] > 0){
        for(int j = arr[n-1] + 1; j <= upper; j++){
            res[k++] = j; 
        }
    }

    for(int i = 0; i < k; i++){
        cout << res[i] <<" ";
    }
    return 0;
}
*/

/*
Rearrange Array Elements by sign
given an array arr[] of size n, task is to rearrange it in alternate positive and negative manner without changing the relative order of positive and negative numbers. in case of extra positive/negative numbers, they appear at the end of the array.
Note rearranged array should start with a positive number and 0(zero) should be consider as aa positive number.
*/
/*
int main(){//TC = O(n) //SC = O(n)
    int arr[] = {3,4,5,-1,4,-3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positive[n];
    int negative[n];

    int p = 0;
    int q = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            positive[p++] = arr[i];
        }else{
            negative[q++] = arr[i];
        }
    }
    int i = 0, j = 0;
    while(i < p && j < q){
        cout << positive[i++] << " ";
        cout << negative[j++] << " ";
    }
    while(i < p){
        cout << positive[i++] << " ";
    }
    while(j < q){
        cout << negative[j++] << " ";
    }
    return 0;
}
*/

/*
//Count substrings with equal number of 0s 1s and 2s
int main(){
    string str = "0102010";
    int n = str.size();
    int ans = 0;
    
    for(int i = 0; i < n ; i++){
        int count0 = 0, count1 = 0, count2 = 0;
        for(int j = i; j < n; j++){
                if(str[j] == '0'){
                count0++;
            }else if(str[j] == '1'){
                count1++;
            }else if(str[j] == '2'){
                count2++;
            }
            if(count0 == count1 && count1 == count2 && count0 > 0){
            ans++;
            cout << str.substr(i, j-i+1) <<endl;
        }
            
        }
    }
    cout << "Total substring: "<<ans <<endl;
    return 0;
}
*/