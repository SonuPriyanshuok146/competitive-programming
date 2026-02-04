#include<bits/stdc++.h>
using namespace std;

/*
Stock Buy and Sell - Max one transaction allowed

Give an array prices[] of non-negative integers, representing the prices of the stocks
on different days, find the maximum profit possible by buying ans selling the stocks on different days when at most 
one transaction is allowed. Here one transaction means 1 buy + 1 sell. if it is not possible to make a profit then
return 0.
Note: stock must be bought before being sold

Input: prices[] = [7, 10, 1, 3, 6, 9, 2]
output: 8

Input: prices[] = [7, 6, 4, 3, 1]
output: 0
*/

int main(){ // time complexity O(n)
    int prices[] = {7, 10, 1, 3, 6, 9, 2};
    int n = sizeof(prices) / sizeof(prices[0]);

    int minprice = INT_MAX;
    int maxprofit = 0;


    for(int i = 0; i < n ;i++){
        minprice = min(minprice, prices[i]);
        maxprofit = max(maxprofit, prices[i] - minprice);
    }
    cout << maxprofit<<endl;
    return 0;
}


/*
int main(){
    int prices[] = {7, 10, 1, 3, 6, 9, 2};
    int n = sizeof(prices) / sizeof(prices[0]);

    int profit = 0;

    for(int i = 0; i < n ;i++){
        for(int j = i+1; j < n; j++){
            if(prices[i] < prices[j]){
                int ans = prices[j] - prices[j];
                profit = max(ans, profit);
            }
        }
    }
    cout << profit<<endl;
    return 0;
}
*/

/*
int main(){//brute force approach // time complexity = O(nlogn)
    //Given an distinct integer find the maximum possible product of three number.
    int arr[] = {3, 4, 6, -3, -4, -9, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int maxi = INT_MIN, smax = INT_MIN, tmax = INT_MIN, min = INT_MAX, smin = INT_MAX;

    for(int i = 0; i < n; i++){
        if(arr[i] > maxi){
            tmax = smax;
            smax = maxi;
            maxi = arr[i];
        }
        if(arr[i] != maxi && arr[i] > smax){
            tmax = smax;
            smax = arr[i];
        }
        if(arr[i] != maxi && arr[i] != smax && arr[i] > tmax){
            tmax = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            smin = min;
            min = arr[i];
        }
        if(arr[i] != min && arr[i] < smin){
            smin= arr[i];
        }
    }

    int product1 = maxi*smax*tmax;
    int product2 = maxi*min*smin;

    int ans = max(product1, product2);
    cout << ans;
}
*/

/*
int main(){//brute force approach // time complexity = O(nlogn)
    //Given an distinct integer find the maximum possible product of three number.
    int arr[] = {3, 4, 6, -3, -4, -9, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr+n);

    int product1 = arr[n-1]*arr[n-2]*arr[n-3];
    int product2 = arr[0]*arr[1]*arr[n-1];

    int ans = max(product1, product2);
    cout << ans;
}
*/

/*
int main(){//brute force approach // time complexity = O(n^3)
    //Given an distinct integer find the maximum possible product of three number.
    int arr[] = {3, 4, 6, -3, -4, -9, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mx = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                mx = max(mx, arr[i]*arr[j]*arr[k]);
            }
        }
    }
    cout << mx;
}
*/

/*
int main(){
    int arr[] = {4,10,6,3,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxLeader = arr[n-1];

    cout<< "Leaders: ";
    cout << maxLeader << " ";

    for(int i = n-2; i >= 0; i-- ){
        if(arr[i] >= maxLeader){
            maxLeader = arr[i];
            cout << maxLeader << " ";
        }
    }
    return 0;
}
*/

/*
int main(){ //TC: O(n^2)
    // Given an array arr[] of size n, the task is to find all the leaders in the array, An element is a leader if it is greater than or equal to all the elements to its right side.
    int a[] = {4, 10, 6, 3, 5};

    int n = sizeof(a) / sizeof(a[0]);
    
    for(int i = 0; i < n; i++){
        bool Leader = true;
        for(int j = i+1; j < n; j++){
            if(a[j] > a[i]){
                Leader = false;
                break;
            }
        }
        if(Leader){
            cout << a[i] << " ";
        }
    }

    return 0;
}
*/