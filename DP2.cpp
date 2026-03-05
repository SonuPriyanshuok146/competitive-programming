#include<bits/stdc++.h>
using namespace std;

/*
Find duplicate
Given an array arr[] of n elements that contains elements from 0 to n-1
with any of these numbers appearing any number of times. The task is to
find the repeating numbers.
*/

/*
int main(){
    int arr[] = {1, 2, 3, 6, 3, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > 1){
            bool flag = false;
            for(int k = 0; k < i; k++){
                if(arr[k] == arr[i]){
                    flag = true;
                    break;
                }
            }
            if(flag == false){
                cout << arr[i] <<" ";
            }
        }
    }
    return 0;
}
*/


int main(){
    int arr[] = {1, 2, 3, 6, 3, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }
    for(auto x: freq){
        if(x.second > 1){
            cout <<x.first <<" ";
        }
    }

    return 0;
}


/*
Given a non-empty array of integers, every element appears twice except for one. find that single one
*/


/*
int main(){
    int arr[] = {2, 1, 5, 3, 1, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int single = 0;

    for(int i = 0; i < n; i++){
        single ^= arr[i];
    }
    cout <<"Single time appear element is: "<<single;
    return 0;
}
*/



/*
int main(){//TC =O(n)
    int arr[] = {2, 1, 5, 3, 1, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int, int> freq;
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }
    for(int i = 0; i < n; i++){
        if(freq[arr[i]] == 1){
            cout <<"Single time appear element is: "<<arr[i];
            return 0; 
        }
    }
    cout<<"No such element appear single time."<<endl;
    return 0;
}
*/


/*
int main(){//TC = O(n^2)
    int arr[] = {2, 1, 5, 3, 1, 5, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    

    for(int i = 0; i < n; i++){
        int single = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                single++;
            }
        }
        if(single == 1){
            cout <<"Single time appear element is: "<<arr[i];
            return 0;
        }
    }
    cout<<"No such element appear single time."<<endl;
    return 0;
}
*/

/*
Counting frequency of array elements

Given an array arr[] of non-negative integers which may contain duplicate elements. return
the frequency of each distinct element present in the array.
*/

/*
int main(){//TC = O(nlog(n))
    int arr[] = {10, 20, 10, 5, 20,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n);
    int count = 0;

    for(int i = 0; i < n-1; i++){
        count = 1;
        while(arr[i] == arr[i+1]){
            count++;
            i++;
        }
        cout <<arr[i]<<"--"<<count<<endl;
    }
    return 0;
}
*/

/*
int main(){//TC = O(n^2)
    int arr[] = {10, 20, 10, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited[n] = {false};
    int count = 0;

    for(int i = 0; i < n; i++){
        if(visited[i] == true){
            continue;
        }

        count = 1;
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
                visited[j] = true;
            }
        }
        cout <<arr[i]<<" -> "<<count<<endl;
    }
    return 0;
}
*/

/*
int main(){//TC = O(n)
    int arr[] = {10, 20, 10, 5, 20};

    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> result;

    for(int i = 0; i < n; i++){
        result[arr[i]]++;
    }

    cout <<"[";
    for(auto x : result){
        cout <<"["<<x.first<<", "<<x.second<<"]"<<" ";
    }
    cout<<"]";
    return 0;
}
*/



/*
Fibonacci using dp
*/
/*
int main(){
    int n;
    cout <<"Enter number n: ";
    cin>>n;
    int dp[n+1] = {-1};
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2; i < n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    for(int i = 0; i < n; i++){
        cout << dp[i]<<" ";
    }
    return 0;
}
*/