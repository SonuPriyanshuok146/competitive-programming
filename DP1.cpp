#include<bits/stdc++.h>
using namespace std;

/*
Counting frequency of array elements

Given an array arr[] of non-negative integers which may contain duplicate elements. return
the frequency of each distinct element present in the array.
*/

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
Merge two sorted arrays

Given two sorted arrays arr1[] of size n and arr2[]
of size m. merge these two arrays.
after the merge, the first n smallest elements of 
the combined sorted array should be stored in arr1
[], and the remaining m largest elements should
be stored in arr2[]. after the merging process, 
both arr1[] and arr2[] contains the remaining
sorted in non-decreasing order.
*/

/*
int main(){//TC = O(m+n)
    int arr1[] = {1, 3, 4, 5};
    int arr2[] = {2, 4, 6, 8};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int temp[m+n];
    int i = 0, j = 0, k = 0;

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            temp[k++] = arr1[i++];
        }else if(arr1[i] > arr2[j]){
            temp[k++] = arr2[j++];
        }else{
            temp[k++] = arr1[i++];
        }
    }

    while(i < n){
        temp[k++] = arr1[i++];
    }

    while(j < m){
        temp[k++] = arr2[j++];
    }

    for(int i = 0; i < n; i++){
        arr1[i] = temp[i];
    }
    for(int i = 0; i < m; i++){
        arr2[i] = temp[n+i];
    }


    cout<<"arr1: ";
    for(int x = 0; x < n; x++){
        cout<<arr1[x]<<" ";
    }
    cout << endl;

    cout<<"arr2: ";
    for(int y = 0; y < m; y++){
        cout<<arr2[y]<<" ";
    }
    return 0;
}
*/

/*
int main(){//TC = O((n+m)log(n+m))
    int arr1[] = {1, 3, 4, 5};
    int arr2[] = {2, 4, 6, 8};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    int temp[m+n];

    for(int i = 0; i < n; i++){
        temp[i] = arr1[i];
    }
    for(int i = 0; i < m; i++){
        temp[n+i] = arr2[i];
    }

    sort(temp, temp+n+m);

    for(int i = 0; i < n; i++){
        arr1[i] = temp[i];
    }
    for(int i = 0; i < m; i++){
        arr2[i] = temp[n+i];
    }

    cout<<"arr1: ";
    for(int i = 0; i < n; i++){
        cout<<arr1[i]<<" ";
    }
    cout << endl;

    cout<<"arr2: ";
    for(int i = 0; i < m; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}
*/

/*
Frequency calculator
*/

/*
int main(){
    int arr[] = {1, 2, 1, 2, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    for(auto x : freq){
        cout << x.first <<"  Occurs "<<x.second<<"  times"<<endl;
    }
    return 0;
}
*/

/*
Unordered map --> Hashmap
*/

/*
int main(){
    unordered_map<string, string> m = {
        {"s1", "Priyanshu Kumar"},
        {"s2", "Sonu Kumar"}
    };

    for(auto i : m){
        cout <<"PRN: "<<i.first<<", Passenger's Name: "<<i.second<<endl;
    }
    return 0;
}
*/

/*
int main(){
    unordered_map<int, string> m = {
        {12456, "Priyanshu Kumar"},
        {278965, "Sonu Kumar"}
    };

    for(auto i : m){
        cout <<"PRN: "<<i.first<<", Passenger's Name: "<<i.second<<endl;
    }
    return 0;
}
*/

/*
int main(){

    priority_queue<int, vector<int>, greater<int>> pq; //Min-heap

    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout <<"Size of Priority queue: " <<pq.size() <<endl;

    cout << "element of prority queue min heap: " <<endl;
    while(!pq.empty()){
        cout<<pq.top() <<" ";
        pq.pop();
    }

    return 0;
}
*/

/*
int main(){

    priority_queue<int> pq; //Max-heap

    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout <<"Size of Priority queue: " <<pq.size() <<endl;

    cout << "element of prority queue: " <<endl;
    while(!pq.empty()){
        cout<<pq.top() <<" ";
        pq.pop();
    }

    return 0;
}
*/