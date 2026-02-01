#include<bits/stdc++.h>
using namespace std;

int main(){
    //Given an array of integers, rotate the array by d positions on the left.
    //time complexity = O(n)
    //space complexity = O(n)
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int d = 3; //number of positions to rotate

    vector<int> rotate_arr(n);
    for(int i = 0; i <n-d; i++){
        rotate_arr[i] = arr[i+d];
    }
    int k = 0;
    for(int j = n-d; j < n; j++){
        rotate_arr[j] = arr[k++];
    }
    for(int i = 0; i < n; i++){
        cout << rotate_arr[i] << " ";
    }
    return 0;
}

/*
int main(){
    //given an array of integers, rotate the array by d position on the left by d
    //time complexity is O(n*d)
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int d = 3; //number of positions to rotate
    cout << "left Rotated Array"<< endl;
    while(d != 0){
        int temp = arr[0];
        for(int i = 0; i<n-1; i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = temp;
        d--;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
*/

/*
int main(){
    //given an array of integers, rotate the array by d position on the left by d
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int d = 3; //number of positions to rotate
    cout << "left Rotated Array"<< endl;
    vector<int> temp(d);
    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }
    for(int i = 0; i< n-d; i++){
        arr[i] = arr[i + d];
    }
    int k = 0;
    for(int i = n-d; i<n; i++){
        arr[i] = temp[k++];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
*/

/*
int main(){
    //given an array of integer, left rotate the array by 1 position
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "left Rotated Array"<< endl;
    int temp = arr[0];
    for(int i = 0; i< n-1; i++){
        
        arr[i] = arr[i + 1];
    }
    arr[n-1] = temp;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
*/

/*
int main(){
    //given an array of integers, reverse it.
    //part2- without any other array
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    for(int i = 0; i < n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    cout <<"Reverse Array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

*/

/*
int main(){
    //given an array of integers, reverse it.
    //part1- can create a new array to store reverse
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> rev_arr(n);

    for(int i = 0; i < n; i++){
        rev_arr[i] = arr[n-1-i];
    }
    cout <<"New Reverse Array: ";
    for(int i = 0; i < n; i++){
        cout << rev_arr[i] << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
int main(){
    //given an array of integer, find the second largest element in it.
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int larg = INT_MIN;
    int seclarg = INT_MIN;
    for(int i = 0; i < n; i++){
        
        if(arr[i] > larg){
            seclarg = larg;
            larg = arr[i];
        }else if(arr[i] > seclarg && arr[i] != larg){
            seclarg = arr[i];
        }
    }
    cout << "Second Largest element: " <<seclarg<<endl;
    return 0;
}
*/