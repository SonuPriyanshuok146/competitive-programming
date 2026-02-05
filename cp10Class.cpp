#include<bits/stdc++.h>
using namespace std;

int main(){
    //Given a sorted array of integers, bring all the unique occurences at the beginning
    int arr[] = {4, 4, 5, 5, 5, 69, 78};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i = 0;

    for(int j = 1; j < n; j++){
        if(arr[i] != arr[j]){
            arr[++i] = arr[j];
        }
    }
    int len = i+1;
    cout<<len<<endl;
    for(int i = 0;i < len; i++){
        cout << arr[i] << " ";
    }

}

/*
int main(){ //TC = O(n) and SC = O(n)
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int duplicate;
    int miss;
    int freq[n+1];

    for(int i = 0; i <=n ; i++){
        freq[i] = 0;
    }

    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    for(int i = 0; i <= n; i++){
        if(freq[i] == 2){
            duplicate = i;
        }
    }

    for(int i = 1; i <= n; i++){
        if(freq[i] == 0){
            miss = i;
        }
    }

    cout << "Missing: "<< miss <<"\nDuplicate: "<<duplicate;
    return 0;
}
*/

/*
int main(){//TC = O(nlogn)
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int duplicate = -1;
    int givenSum = 0;

    for(int i = 0; i < n-1; i++){
        if(arr[i+1] == arr[i]){
            duplicate = arr[i];
            break;
        }
    }

    for(int i = 0; i < n; i++){
        givenSum += arr[i];
    }
    int num = (n*(n+1) / 2) -givenSum + duplicate;

    cout << "Missing element: "<<num << endl;
    cout << "Dupilcated element is: "<<duplicate << endl;
    return 0;
}
*/

/*
int main(){
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int freq[n+1] = {0};

    //Count frequency
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }
    int duplicate, missing;
    for(int i = 0; i < n; i++){
        if(freq[i] == 0){
            missing = i;
        }
        if(freq[i] > 1){
            duplicate = i;
        }
    }
    cout << "Missing: "<< missing <<"\nDuplicate: "<<duplicate;
    return 0;
}
*/


/*
int main(){//TC = O(n^2)
    //Missing and repeating in an array
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicate;
    int givenSum = 0;
    for(int i = 0; i < n; i++){
        bool flag = true;
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                duplicate = arr[i];
                flag = false;
                break;
            }
        }
        if(!flag){
            break;
        }
    }
    for(int i = 0; i < n; i++){
        givenSum += arr[i];
    }

    int num = (n*(n+1) / 2) -givenSum + duplicate;
    cout << "Missing: "<< num <<"\nDuplicate: "<<duplicate;
    return 0;
}
*/


/*
int main(){ //Time Complexity = O(n)
    //Stock buy ans Sell - Multiple transaction allowed
    int prices[] = {100, 180, 260, 310, 40, 535, 695};
    //Output: 865
    //(310-100) + (535-40) + (695 - 535) = 865
    int n = sizeof(prices) / sizeof(prices[0]);

    int profit = 0;
    for(int i = 1; i < n; i++){
        if(prices[i] > prices[i-1]){
            profit += prices[i] + prices[i-1];
        }
    }
    cout << profit;
    
    return 0;
}
*/