#include<bits/stdc++.h>
using namespace std;

int main(){ //O(n)
    //given an array of only 2s, 3s and 4s move all the 2s before all 3s and all the 3s before all 4s

    int a[] = {2,3,4,2,3,4,4,2};
    int n = sizeof(a) / sizeof(a[0]);

    int cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for(int i = 0; i<n; i++){
        if(a[i] == 2){
            cnt2++;
        }else if(a[i] == 3){
            cnt3++;
        }else if(a[i] == 4){
            cnt4++;
        }
    }
    for(int i = 0; i <cnt2; i++){
        a[i] = 2;
    }
    for(int i = cnt2; i < cnt2 + cnt3; i++){
        a[i] = 3;
    }
    for(int i = cnt2 + cnt3; i < n; i++){
        a[i] = 4;
    }


    for(int i = 0; i < n ; i++){
        cout << a[i] << " ";
    }
    return 0;
}


/*
int main(){
    //given an array of only 2s, 3s and 4s move all the 2s before all 3s and all the 3s before all 4s

    int a[] = {2,3,4,2,3,4,4,2};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < n-1; i++){ // TC = O(n) -- bubble sort
        for(int j = i+1; j < n ; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i = 0; i < n ; i++){
        cout << a[i] << " ";
    }
    return 0;
}
*/

/*
int main(){
    //given an array of non negative integers, the array represent a number, you have to add +1 to the number and print the new array
    //note input is given in such a manner that the size of the array will not change
    int a[] = {8,9,9,9};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i = n-1; i >= 0; i--){
        if(a[i] < 9){
            a[i] = a[i] + 1;
            break;
        }else {
            a[i] = 0;
            // a[i-1] = a[i-1] +1;
        }
    }
    for(int i = 0; i <n ; i++){
        cout << a[i] << " ";
    }
    return 0;
}
*/

/*
int main(){  //O(n)
    int arr[] = {2,-10,-20,4,5,3,6,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int f_min = 0, f_max = 0, s_min = 0, s_max = 0;

    for(int i = 0; i<n; i++){
        if(arr[f_min] > arr[i]){
            f_min = i;
        }
        if(arr[f_max] < arr[i]){
            f_max = i;
        }
    }

    for(int i = 0; i<n; i++){
        if(i != f_min){
            s_min = min(s_min, arr[i]);
        }
        if(i != f_max){
            s_max = max(s_max, arr[i]);
        }
    }


    cout << max(arr[f_min]*s_min, arr[f_max]*s_max);
    return 0;
}
*/

/*
int main(){  //O(nlogn)
    //this not handle duplicate element
    int arr[] = {2,-10,-20,4,5,3,6,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int mx = INT_MIN, mn = INT_MAX;
    int smx = INT_MIN, smn = INT_MAX;

    for(int i = 0; i<n; i++){
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
    }

    for(int i = 0; i <n; i++){
        if(arr[i] != mx){
            smx = max(smx, arr[i]);
        }
    }

    for(int i = 0; i <n; i++){
        if(arr[i] != mn){
            smn = min(smn, arr[i]);
        }
    }

    cout << max(mn*smn, mx*smx);
    return 0;
}
*/

/*
int main(){  //O(nlogn)
    int arr[] = {2,-10,-20,4,5,3,6,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr+n);//sort array in ascending order
    cout << max(arr[0]*arr[1], arr[n-1]*arr[n-2]);
    return 0;
}
*/

/*
int main(){
    //given an array of integers, find the maximum product of the two different elements in it.
    int arr[] = {2,4,5,3,6,9,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mul = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int curr = arr[i]*arr[j];
            mul = max(mul, curr);
        }
    }
    cout << mul;
    return 0;
}
*/