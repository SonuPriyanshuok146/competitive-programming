#include<iostream>
using namespace std;

int main(){
    //variable declarations
    // int x = 10;
    // double y = 20.5;
    // char z = 'A';
    // bool flag = true;
    // string str = "Hello, World!";

    // cout << "Integer: " << x << endl;
    // cout << "Double: " << y << endl;
    // cout << "Character: " << z << endl;
    // cout << "Boolean: " << (flag ? "true" : "false") << endl;
    // cout << "String: " << str << endl;

    /*
    question1: print 1 to 10 on screen, with every number of new line
    */

    // for(int i = 1; i <= 10; i++){
    //     cout<<i<<endl;
    // }

    /*
    question2: print all the even numbers between 1 to 10, each seperated by a space.
    */

    // for(int i = 1; i <= 10; i++){
    //     if(i % 2 == 0 && i != 10){
    //         cout << i << " ";
    //     }else if(i == 10){
    //         cout << i;
    //     }
    // }
    // cout <<endl;

    /*
    question3: print all the the odd numbers from 2 to 20, each separated by "@"
    */

    // for(int i = 2; i <= 20; i++){
    //     if(i % 2 != 0 && i != 19){
    //         cout << i << "@";
    //     }else if(i == 19){
    //         cout << i;
    //     }
    // }
    // cout <<endl;

    /*
    Question4: Initialize length and breadth of a rectangle, and then print its area on the screen.
    */
    // double length = 5;
    // double breadth = 3;
    // double area = length * breadth;
    // cout << "Area of the rectangle: " << area << endl;

    /*
    taking user input
    take int as input from user, and print the double of it.
    */

    // int n;
    // cout << "Enter a number: ";
    // cin >> n ;
    // cout <<"Double of "<<n <<" is "<< 2*n << endl;

    /*
    question 5 Given an integer, write a code to print the sum of all the digits of that integer
    */

    // int n;
    // cout << "Enter the integer: ";
    // cin >> n;
    // int temp = n;
    // int sum = 0;
    // while (temp != 0){
    //     sum += temp % 10;
    //     temp /= 10;
    // }
    // cout <<"Sum of digits of number is "<< sum << endl;

    /*
    que 6
    Given an integer, check if it represents a valid binary representation or not
    */

    // int n;
    // cout << "Enter the integer: ";
    // cin >> n;

    // int temp = n;
    // while(temp != 0){
    //     int digit = temp % 10;
    //     if(digit % 10 != 0 && digit % 10 != 1){
    //         cout << "Number is not a Binary Number." << endl;
    //         return 0;
    //     }
    //     temp /= 10;
    // }
  
    // cout <<"Number is Binary Number." <<endl;


    /*
    Question 7:
        Given two integer write a code to swap them.
        1. with using extra variable
        2. without using extra variables.
    */

    // int m, n;
    // cout << "Enter the two integer: ";
    // cin >> m >> n;
    // cout <<"Before Swap:-\nnum1 = " << m << "\nnum2 = " << n << endl;

    // cout <<"\n--- Swap with using Variable ---\n";

    // int temp = m;
    // m = n;
    // n = temp;
    // cout <<"After Swap:-\nnum1 = " << m << "\nnum2 = " << n << endl;

    // cout <<"\n--- Swap without using Variable ---\n";
    // m = m + n;
    // n = m - n;
    // m = m - n;
    // cout <<"After Swap:-\nnum1 = " << m << "\nnum2 = " << n << endl;

    // cout <<"\n--- Swap using XOR operator ---\n";
    // m = m^n;
    // n = m^n;
    // m = m^n;
    // cout <<"After Swap:-\nnum1 = " << m << "\nnum2 = " << n << endl;

    /*
    question 9
    Given three number print the maximum and minimum number
    */

    int a = 10, b = 23, c = -3;
    if(a > b && a > c){
        cout << a << "is largest number.\n";
    }else if(b > c){
        cout << b << "is largest number.\n";
    }else{
        cout << b << "is largest number.\n";
    }

    // minimum of three number
    if(a < b && a < c){
        cout << a << "is smallest number.\n";
    }else if(b < c){
        cout << b << "is smallest number.\n";
    }else{
        cout << c << "is smallest number.\n";
    }

    return 0;
}