#include<bits/stdc++.h>
using namespace std;


/*
First negative integer in every window of size k.

Given an array and a position integer k, find the
first negative integer for each window(contiguous 
subarray) of size k. If a window does not contain 
a negative integer, then print 0 for that window.
*/

int main(){
    int arr[] = {-8, 2, 3, -6, 1};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int p = 0;
    int temp[n-k+1];

    for(int i = 0; i <= n-k; i++){
        int negc = 0;
        int negative;
        for(int j = 0; j < k ; j++){
            if(arr[i+j] < 0){
                negc++;
                negative = arr[i+j];
                break;
            }
        }
        if(negc == 0){
            temp[p++] = 0;
        }else if(negc > 0){
            temp[p++] = negative;
        }
    }
    for(int i = 0; i<n-k+1; i++){
        cout << temp[i] <<" ";
    }
    return 0;
}

/*
Interleaving Queue Halves
Given a queue q[] of even size. Rearrange the
elements by interleaving the first halves with the
second halves.
*/

/*
int main(){
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(9);
    q.push(3);
    q.push(1);

    int n = q.size();
    int mid = n / 2;

    queue<int> temp1;
    queue<int> temp2;

    for(int i = 0; i < mid; i++){
        temp1.push(q.front());
        q.pop();
    }

    for(int j = mid; j < n; j++){
        temp2.push(q.front());
        q.pop();
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            q.push(temp1.front());
            temp1.pop();
        }else{
            q.push(temp2.front());
            temp2.pop();
        }
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
*/

/*
Flipping bits with K-window

Given a binary arr[], find minimum number of 
operations to convert all 0s to 1s. In one
operation, we can select a subarray (window) of 
length k and flip all its bits. if it is 
impossible, return -1.
*/

/*
int main(){//TC = O(n*k)
    int arr[] = {1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    int count = 0;

    for(int i = 0; i <= n-k; i++){
        if(arr[i] == 0){
            for(int j = i; j < i+k; j++){
                arr[j] = arr[j]^1;
            }
            count++;
        }
    }

    for(int x : arr){
        if(x == 0)
        {
            cout<< -1 <<endl;
        }
    }

    cout << count << endl;
    return 0;
}
*/