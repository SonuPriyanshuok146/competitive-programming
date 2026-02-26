#include<bits/stdc++.h>
using namespace std;

/*
Longest Mountain subarray

Given  an array arr[] with N elements, the task is to find out
 the longest subarray which has the shape of mountain.

Note: A mountain sub-array starts with an increasing sequence,
 reaches a peak, and then follows a decreasing sequence.

input: a = [4, 3, 5, 7, 9, 6, 3, 2, 8]
output: 7
*/

int main(){ //not in corrected version
    int arr[] = {4, 3, 5, 7, 9, 6, 3, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_len = INT_MIN;
    int i, j;

    for(i = 0; i < n - 1; i++){
        int curr_len = 0;
        for(j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                curr_len++;
            }else{
                break;
            }
        }
        for(; j < n; j++){
            if(arr[i] < arr[j]){
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

/*
Number of Subarrays having product less than k

Given an array of positive numbers, calculate the number of possible continuous
subarrays having product lesser than a given number k.

input : arr[] = [1,2,3,4], k = 10
output : 1
2
3
4
1, 2
2, 3
1, 2, 3
1. Brute Force TC = O(n^2)
2. Optimized code : TC = O()

i, j -->j-i+1 subarray
concept:
a = [5, 3, 2], k = 16
win = [5]
5>16 --> 1 subarray

win = [5,3]
prod = 5*3 = 15
15 < 16, --> 2 subarrays

win = [5, 3, 2]
prod = 5*3*2 = 30
30 < k --> no 
i++
win = [3, 2]
6 < 16 --> 2 subarrays

total = 5 subarrays.

*/

/*
int main(){ //Tc = O(n)
    int arr[] = {1, 2, 3, 4};
    int k = 10;
    int ans = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    int prod = 1;
    int s, e;

    for(s = 0, e = 0; e < n; e++){
        prod = prod*arr[e];
        while(prod >= k && s < e){
            prod = prod/arr[s];
            s++;
        }
        if(prod < k){
            int win = (e-s) + 1;
            ans += win;
        }
    } 
    cout << ans;
    return 0;
}
*/

/*
int main(){
    int arr[] = {1, 2, 3, 4};
    int k = 10;
    int ans = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        int product = 1;
        for(int j = i; j < n; j++){
            product *= arr[j];

            if(product < k){
                ans++;
            }else{
                break;
            }
        }
    }
    cout << ans;
    return 0;
}
*/


/*
Replace all occurence of  substring

Given three strings s, s1 ans s2 of lengths n, m and k respectively, the task is to modify the string s by replacing all the substrings s1 with the string s2 in string s.(pattern is replaced left to right)

input: s = "abababa", s1 = "aba", s2 = "a"
output: aba
*/
/*
int main(){
    string s = "ababba";
    string s1 = "aba";
    string s2 = "a";

    int lens = s.size(), lens1 = s1.size(), lens2 = s2.size();

    string result = "";
    int i = 0;

    while(i < lens){ // TC = O(lens*lens1)
        if(s.substr(i, lens1) == s1){
            result += s2;
            i = i+lens1;
        }else{
            result += s[i];
            i++;
        }
    }
    cout << result;
    return 0;
}
*/