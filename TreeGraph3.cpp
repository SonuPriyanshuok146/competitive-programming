#include<bits/stdc++.h>
using namespace std;

/*
Print n to 1 using recursion
*/

/*
void print(int n){
    if(n == 0){
        return;
    }
    
    cout << n <<" ";
    print(n-1);
    return;
}

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin >> n;
    print(n);
    return 0;
}
*/

/*
Print 1 to n using recursion
*/

/*
void print(int n){
    if(n == 0){
        return;
    }
    
    print(n-1);
    cout << n <<" ";
    return;
}

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin >> n;
    print(n);
    return 0;
}
*/

/*
Maximum Depth or Height of a Binary Tree
*/

/*
class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int height(Node *root){//height = max number of edge from root to leaf
    if(root == nullptr){
        return -1;
    }
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    
    return 1+max(leftHeight, rightHeight);
}

int main(){
    Node *root = new Node(12);
    root->left = new Node(8);
    root->right = new Node(18);
    root->left->left = new Node(5);
    root->left->right = new Node(11);

    cout <<"Height of Given Tree: "<< height(root);
    return 0;
}
*/

/*
3 Sum - Triplet sum in array
Given an array arr[] and an integer sum, check 
sum of any three distinct element is equal to k
*/

/*
int main(){
    int arr[] = {1, 4, 45, 6, 10, 8};
    int target = 13;
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr+n); //TC = O(nlog(n))

    for(int i = 0; i < n - 2; i++){ //TC = O(n^2)
        int left = i+1;
        int right = n-1;

        while(left < right){
            int sum = arr[i] + arr[left] + arr[right];
            if(sum == target){
                cout <<" Triplet are: "<<"["<<arr[i]<<", "<<arr[left]<<", "<<arr[right]<<"]"<<endl;
                return 0;
            }else if(sum > target){
                right--;
            }else{
                left++;
            }
        }
        
    }
    cout <<"Triplet is not present."<<endl;
    return 0;
}
*/

/*
int main(){
    int arr[] = {1, 4, 45, 6, 10, 8};
    int target = 13;
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if((arr[i] + arr[j] + arr[k]) == target){
                    cout <<" Triplet are: "<<"["<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<"]"<<endl;
                    return 0;
                }
            }
        }
    }
    cout <<"Triplet is not present."<<endl;
    return 0;
}
*/

/*
Count pairs with absolute difference equal to k
*/

/*
int main(){ //TC = O(nlog(n))
    int arr[] = {8, 16, 12, 16, 4, 0};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr, arr+n);
    
    int i = 0, j = 0;
    int count = 0;

    while(j < n){
        int diff = arr[j] - arr[i];
        if(diff < k){
            j++;
        }else if(diff > k){
            i++;
        }else{
            int a = arr[i], b = arr[j];
            int c1 = 0, c2 = 0;

            while(i < n && arr[i] == a){
                i++;
                c1++;
            }

            while(j < n && arr[j] == b){
                j++;
                c2++;
            }

            if(a == b){
                count += (c1*(c1-1)/2);
            }else{
                count += (c1*c2);
            }
        }
    }
    cout<< "Number of Pairs is: " << count<<endl;
    return 0;
}
*/

/*
int main(){ //TC = O(n^2)
    int arr[] = {8, 16, 12, 16, 4, 0};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(abs(arr[i] - arr[j]) == k){
                count++;
            }
        }
    }
    cout<< "Number of Pairs is: " << count<<endl;
    return 0;
}
*/