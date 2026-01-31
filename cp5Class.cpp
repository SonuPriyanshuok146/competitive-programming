#include<bits/stdc++.h>
using namespace std;

int main(){
    //Given a positive number, check if it is even or odd
    int n;
    cout << "Enter the positive Number: ";
    cin >> n;
    if(n % 2 == 0){
        cout << "Even Number."<<endl;
    }else{
        cout << "Odd Number."<<endl;
    }
    return 0;
}

/*
int main(){
    // Given an array of integers, find the minimum element in it.
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }else  if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    cout << "Largest element: "<<maximum<<endl;
    cout << "Smallest element: "<<minimum<<endl;
    return 0;
}
*/

/*
int main(){
    // Given an array of integers, find the minimum element in it.
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }
    cout << "Largest element: "<<maximum<<endl;
    return 0;
}
*/

/*
int main(){
    // Given an array of integers, find the minimum element in it.
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int minimum = INT_MAX;
    for(int i = 0; i < n; i++){
        minimum = min(minimum, arr[i]);
    }
    cout << "Smallest element: "<<minimum<<endl;
    return 0;
}
*/

/*
int main(){
    //Given an array of integers, find the average of all the numbers in it.
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int X : arr){
        sum += X;
    }
    cout << "Average: " <<(double)sum/n <<endl;

    return 0;
}
*/

/*
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    vector<int> arr(n);
    cout<<"Enter the element of array:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int x : arr){
        sum += x;
    }
    cout<<"Sum of element of array: "<<sum<<endl;
    return 0;
}
*/

/*
int main(){
    //given an array of integers, find the sum of all the elements in it.
    int n;
    cout<<"Enter the size of array: ";
    cin >>n;
    int arr[n];
    cout<<"Enter the Array element: \n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << "Sum of array element is: "<<sum<<endl;
    return 0;
}
*/

/*
int main(){
    //given an array of integers, find the sum of all the elements in it.
    int arr[] = {23, 45, 55,65, 43};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << "Sum of array element is: "<<sum<<endl;
    return 0;
}
*/

/*
bool isPrime(int data){
    if(data < 2) return false;
        bool flag = false;
    for(int j = 2; j <= sqrt(data); j++){
        if(data % j == 0){
            flag = true;
            break;
        }
    }
    if(!flag){
        return true;
    }
}

int main(){
    //Display prime number between start and end range
    int start = 1, end = 1000;
    for(int i = start; i <= end; i++){
        if(isPrime(i)){
            cout << i <<endl;
        }
    }
    return 0;
}
*/

/*
int main(){
    //Display prime number between start and end range
    int start = 1, end = 1000;
    for(int i = start; i <= end; i++){
        if(i < 2) continue;
        bool flag = false;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << i <<" ";
        }
    }
    return 0;
}
*/

/*
int main(){
    // pattern printing: 6- reverse full pyramid
     
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int k = 0;
    for(int i = 1; i <= n; i++){
        //number of spaces on the ith rows
        for(int j = 0; j <= n-i; j++){
            cout <<"  ";
        }
        //number of start at the ith rows
        for(int k = 0; k < 2*i - 1; k++){
            cout<<"* ";
        }
         cout<<endl;
    }
    return 0;
}
*/