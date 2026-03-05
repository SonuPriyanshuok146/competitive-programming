#include<bits/stdc++.h>
using namespace std;

/*
Minimum and maximum element using recrusion
*/

int minelement(int arr[], int i, int small, int n){

    if(i == n){
        return small;
    }

    return minelement(arr , i+1 , min(small, arr[i]), n);
}

int maxelement(int arr[], int i, int large, int n){
    if(i == n){
        return large;
    }

    return maxelement(arr, i+1, max(large, arr[i]), n);
}

int main(){
    int arr[] = {1, 4, 3, -5, -4, 8, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int mini = minelement(arr, 0, INT_MAX,n);
    int maxi = maxelement(arr,0, INT_MIN, n);
    cout <<"Smallest: "<<mini<<endl;
    cout <<"Largest: "<<maxi<<endl;
    return 0;
}

/*
Factorial of a Number
*/

/*
int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int num;
    cout << "Enter the positive number: ";
    cin >> num;  

    int result = factorial(num);
    cout <<"Factorial of "<<num<<": "<<result;
}
*/

/*
Find first n fibonacci number
*/

/*
int fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int num;
    cout << "Enter the num: ";
    cin >> num;

    for(int i = 0; i < num; i++){
        cout << fibonacci(i) <<" ";
    }
    return 0;
}
*/

/*
Sum of digit of a number using recruision
*/

/*
int sum(int num){
    if(num == 0){
        return 0;
    }
    return num%10 + sum(num/10);
}

int main(){
    int num = 12345;

    int result = sum(num); 

    cout << "The Sum of digits of number: "<<result<<endl;
    return 0;
}
*/

/*
Program for length of a string using recursion

Given a string calculate length of the string using recursion.
*/

/*
int strlength(string str){
    if(str == ""){
        return 0;
    }
    return strlength(str.substr(1)) + 1;
}

int main(){
    string str = "abcdef";
    cout <<"Length of string: " << strlength(str) <<endl;
    return 0;
}
*/

/*
int strlength(string str, int i){
    if(str[i] == '\0'){
        return 0;
    }
    return strlength(str, i+1) + 1;
}

int main(){
    string str = "abcdef";
    int length = strlength(str,0);
    cout <<"Length of string: " << length <<endl;
    return 0;
}
*/


/*
print reverse of a string using recrusion
*/

/*
// void reversed(string s, int n){
//     if(n == -1){
//         return;
//     }
//     cout << s[n];
//     reversed(s,n-1);
// }

string reversed(string s, int n){
    if(n<0){
        return "";
    }
    return s[n] + reversed(s, n-1);
}

// string reversed(string s){
//     if(s.size() == 0){
//         return s;
//     }
//     return reversed(s.substr(1)) + s[0];
// }

int main(){
    string s = "Reverse a string using Recursion";
    int n = s.size();
    cout << reversed(s, n - 1);
    return 0;
}
*/

/*
2. mean of array using recrusion
*/

/*
int meanSum(int arr[], int n){
    if(n == -1){
        return 0;
    }
    return arr[n] + meanSum(arr, n-1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = meanSum(arr, n-1);
    cout << "Mean: " << (double)sum/n << endl;
    return 0;
}
*/

/*
Sum of the first N natural number using recrusion
*/

/*
int firstSumN(int n){
    if(n == 0){
        return 0;
    }
    return firstSumN(n-1) + n;
}

int main(){
    int n;
    cout << "Enter the n: ";
    cin >> n;

    int sum = firstSumN(n);

    cout <<"Sum of 1 to n: " <<sum<<endl;
    
    return 0;
}
*/