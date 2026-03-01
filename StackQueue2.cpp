#include<bits/stdc++.h>
using namespace std;

/*
Sum of all Subarrays
Given an integer array arr[], compute the sum of all possible sub-arrays of the array. a sub-array is a contiguous part of the array.
1- Brute force code.
*/

int main(){//TC = O(n*n)
    int arr[] = {1, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);
    int totalSum = 0;

    for(int i = 0; i < n; i++){
        int currentSum = 0;
        for(int j = i; j < n; j++){
            currentSum += arr[j];
            totalSum += currentSum;
            cout <<"curr: "<<currentSum <<" --total_sum: "<<totalSum <<endl;
        }
        // totalSum += currentSum;
    }
    
    cout <<"Sum of all Subarrays: " <<totalSum <<endl;
    return 0;
}

/*
Create a releastic example of the queue of strings.
use the push, pop, front, back and empty functions in the example.
*/

/*
int main(){
    queue<string> ticket;
    ticket.push("Amtritsar to Delhi.");
    ticket.push("Delhi to Bhopal.");
    ticket.push("Bhopal to Nagapur.");

    cout<<"First ticket: "<<ticket.front()<<endl;
    cout <<"Last ticket: "<<ticket.back() <<endl;
    cout << "Number of ticket: "<<ticket.size()<<endl;

    // Completing journeys one by one
    while (!ticket.empty()) {
        cout << "Currently traveling: " << ticket.front() << endl;
        ticket.pop();
        // journey completed
        if (!ticket.empty()) {
            cout << "Next ticket: " << ticket.front() << endl;
        } else {
            cout << "All journeys completed!" << endl;
        }
    }

    cout <<"Is final destination reached: "<< (ticket.empty() ? "Yes" : "No") <<endl;
    return 0;
}
*/

/*
int main(){
    queue <int> num;
    num.push(5);
    num.push(3);
    num.push(2);
    num.push(4);

    cout <<num.front() << endl;
    cout <<num.back() << endl;
    cout << num.size() << endl;

    num.front() = 10; //Updated the element
    cout <<num.front() << endl;

    num.back() = 50; //Updated the element
    cout <<num.back() << endl;

    num.pop();
    cout<< num.front() <<endl;

    cout <<"Size: " << num.size()<< endl;
    cout << num.empty() << endl;

    return 0;
}
*/

/*
Create a realistic example of stack of strings.
use the push, pop, top, size, and empty functions in this example.
*/
/*
int main(){
    stack<string> str;
    str.push("Balance");
    str.push("Yourself!");

    cout << str.top() << endl;
    cout << "Size: " << str.size() << endl;

    str.pop();

    cout << str.top() << endl;
    cout << "Size: " << str.size() << endl;

    cout << "Is any word present: " << str.empty() << endl;

    return 0;
}
*/

/*
int main(){
    // cannot create stack in c++ like this
    // stack<int> st = {4, 3, 2};

    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(5);
    st.push(4);

    cout << st.top() << endl;

    //cout << st.pop(); //st.pop() its doesnot return anything

    st.pop();
    cout << st.top() << endl;
    cout <<"Size : " << st.size() << endl;

    st.push(10);
    cout << st.top() << endl;

    cout <<"Size : " << st.size() << endl;

    cout << st.empty() << endl;

    return 0;
}
*/