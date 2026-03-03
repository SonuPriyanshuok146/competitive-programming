#include<bits/stdc++.h>
using namespace std;

/*
Count pairs with absolute difference equal to k
*/

int main(){ //TC = O(n^2)
    int arr[] = {8, 16, 12, 16, 4, 0};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(abs(arr[i] - arr[j]) == k){
                count++;
            }
        }
    }
    cout<< "Number of Pairs is: " << count<<endl;
    return 0;
}

/*
Sentence Palindrome

Given a sentence s, determine whether it is a 
palindrome sentence or not. A palindrome 
sentence is sequence of characters that reads 
the same forward and backward after
*/

/*
int main(){
    string s = "Abc 012..##  10cbA";
    int n = s.length();

    string cleaned = "";

    for(char ch : s){
        if(isalnum(ch)){
            cleaned += tolower(ch);
        }
    }

    string reversed = cleaned;

    reverse(reversed.begin(), reversed.end());

    cout<<cleaned <<endl;

    if(reversed == cleaned){
        cout << "Given string is Palindrome."<<endl;
    }else{
        cout << "Given String is not Palindrome"<<endl;
    }
    return 0;
}
*/

/*
int main(){
    string s = "Abc 012..##  10cbA";
    int n = s.length();

    string cleaned = "";

    for(int i = 0; i < n; i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
            cleaned += s[i];
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            cleaned += (s[i] + 32); //by adding 32 convert capital to small letter.
        }
    }

    string reversed = cleaned;

    reverse(reversed.begin(), reversed.end());

    cout<<cleaned <<endl;

    if(reversed == cleaned){
        cout << "Given string is Palindrome."<<endl;
    }else{
        cout << "Given String is not Palindrome"<<endl;
    }
    return 0;
}
*/

/*
2 Sum - pair sum closest to target

Given an array arr[] of n integers and an integer target, find a pair of elements from the array such that the sum of pair is closest to the given target.
1- Brute force --> O(n^2)
2- two pointer approach --> O(nlogn)
*/

/*
int main() {// TC = O(nlog(n))
    int arr[] = {5, 1, 8, 9, 3}, target = 11;
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n); //By default in ascending order
    int res[2] = {0, 0}; //initialize result of first and second element sum

    int min_diff = INT_MAX;
    int pair_sum = 0;

    int left = 0, right = n-1;
    int sum = 0;

    while(left < right){
        sum = arr[left] + arr[right];
        if(abs(sum-target) < min_diff){
            min_diff = abs(sum - target);
            res[0] = arr[left];
            res[1] = arr[right];
        }

        if(sum < target){
            left++;   
        }else if(sum > target){
            right--;
        }else{ //Sum == target
            break;
        }
    }

    cout << "Two elements are: " <<"["<< res[0] << ", " << res[1] << "]"<< endl;
    return 0;
}
*/

/*
int main() {// TC = O(n^2)
    int arr[] = {5, 2, 7, 1, 4}, target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n); //By default in ascending order
    int res[2] = {-1, -1}; //initialize result of first and second element sum

    int min_diff = INT_MAX;
    int pair_sum = 0;

    // Track pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            pair_sum = arr[i] + arr[j];
            int diff = abs(pair_sum-target);

            if(diff < min_diff){
                min_diff = diff;
                res[0] = arr[i];
                res[1] = arr[j];
            }else if(diff == min_diff){
                if(abs(arr[i] - arr[j]) > (res[1] - res[0])){
                    res[0] = arr[i];
                    res[1] = arr[j];
                } 
            }
        }
    }

    cout << "Two elements are: " <<"["<< res[0] << ", " << res[1] << "]"<< endl;
    return 0;
}
*/
