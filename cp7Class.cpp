#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {3, 5, 1, -4, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);
    int smallest = INT_MAX;
    int secsmallest = INT_MAX;
    int thirdSmallest = INT_MAX;
    for(int i = 0; i<n; i++){
        if(a[i] < smallest){
            thirdSmallest = secsmallest;
            secsmallest = smallest;
            smallest = a[i];
        }else if(a[i] != smallest && a[i] < secsmallest){
            thirdSmallest = secsmallest;
            secsmallest = a[i];
        }else if(a[i] != smallest && a[i] != secsmallest && a[i] < thirdSmallest){
            thirdSmallest = a[i];
        }
    }
    cout <<thirdSmallest<<endl;
    return 0;
}

/*
void sortarr(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    //given an array of integer, find the 3rd smallest element in it.
    int n;
    cout<<"Enter the size of Array: ";
    cin >> n;
    cout<<"Enter the element of Array: ";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sortarr(arr);

    cout << "Third Smallest element in array is: "<<arr[2];

    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}
*/

/*
void reverse(int a[], int st, int end){
    int l = st;
    int r = end;
    while(l < r){
        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        l++;
        r--;
    }
}

int main(){
    // given an array of integers, reverse the array in group of k.
    int a[] = {3, 5, 1, 4, 7, 8, 5, 8};
    int k = 3;
    int n = sizeof(a) / sizeof(a[0]);
    int l = 0;
    for(int i = 0; i < n; i += k){
        int st = i;
        int end = min(i+k-1, n-1); //handle last window
        reverse(a, st, end);
    }
    for(int i = 0; i < n; i++){
        cout << a[i] <<" ";
    }
    return 0;
}
*/

/*
int main(){
    //given an array of integers put all the 1s to the end of the array, while mainitaning the relative position of all the other elements.
    int a[] = {3,1,5,6,1,1,2,1,4};
    int n = sizeof(a)/sizeof(a[0]);
    
    int idx = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != 1){
            a[idx++] = a[i];
        }
    }

    while(idx < n){
        a[idx++] = 1;
    }
    for(int i = 0; i < n; i++){
        cout << a[i] <<" ";
    }
    return 0;
}
*/

/*
int main(){
    //given an array of 0 and 1 find the longest consecutive sequence of all 1s or all 0s
    int n;
    cout<<"Enter the size of Array: ";
    cin >> n;
    cout<<"Enter the element of Array: ";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count0 = 0;
    int count1 = 0;
    int maxLen0 = 0;
    int maxLen1 = 0;
    for(int i = 1; i < n; i++){

        if(arr[i] == 0 && arr[i-1] == 0){
            count0++;
        }else if(arr[i] == 0){
            count0 = 1;
        }
        if(maxLen0 < count0){
            maxLen0 = count0;
        }

        if(arr[i] == 1 && arr[i-1] == 1){
            count1++;
        }else if(arr[i] == 0){
            count1 = 1;
        }
        if(maxLen1 < count1){
            maxLen1 = count1;
        }
    }
    cout << "Size of 0's " << maxLen0<<endl;
    cout << "Size of 1's " << maxLen1<<endl;
    return 0;
}
*/

/*
void reverse(vector<int>& arr, int l, int r){
    while(l < r){
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp; 
        l++;
        r--;
    }
}

int main(){
    //rotate array by d in left rotation
    int n;
    cout<<"Enter the size of Array: ";
    cin >> n;
    cout<<"Enter the element of Array: ";
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int d;
    cout<<"Enter the size to rotate: ";
    cin >> d;

    reverse(arr, 0, n-1);
    reverse(arr, 0, n-d-1);
    reverse(arr, n-d, n-1);


    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}
*/
