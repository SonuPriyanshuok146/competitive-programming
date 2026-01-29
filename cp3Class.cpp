#include<bits/stdc++.h>
using namespace std;

int main(){
    // write a code to find the power of given number a,b --> a^b without using pow function
    int num1, num2;
    cout <<"Enter the number: ";
    cin >> num1 >> num2;

    if (num2 < 0) {
        cout << "Negative powers not supported with integers." << endl;
        return 0;
    }

    long long power = 1;
    for(int i = 1; i<=num2; i++){
        power = power*num1;
    }
    cout << "Power of " << num1 <<"^"<<num2 <<" is "<<power<<endl;
    return 0;
}

/*
int main(){
    //given a number n, print the multiplication table of it, till its first 10 multiples.
    int num;
    cout <<"Enter the number: ";
    cin >> num;

    for(int i = 1; i <= 10; i++){
        cout << num <<" x " << i << " = " << num * i << endl;
    }
    return 0;
}
*/

/*
int main(){
    //given a positive number, find its factorial.
    int num;
    cout <<"Enter the number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    long long fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact*i;
    }
    cout<<"Factorial of "<< num <<" is "<<fact;

    return 0;
}
*/

/*
int main(){
    // given a number, print all its divisors between 1 to 100
    int num;
    cout <<"Enter the number: ";
    cin >> num;
    int count = 0;


    cout<<"Divisor of " << num << " : ";
    for(int i = 1; i <= min(num, 100); i++){
        if(num % i == 0){
            cout << i << " ";
            count++;
        }
    }
    cout <<"\nNumber of divisor in (1 to 100): "<< count <<endl;
    return 0;
}
*/

/*
int main(){
    // given a positive number, check if it is a prime number or not
    int num;
    cout <<"Enter the number: ";
    cin >> num;

    if (num <= 1) {
        cout << "Number is not a prime number." << endl;
        return 0; 
        }

    bool flag = false;
    for(int i = 2; i <= (int)pow(num, 0.5); i++){
        if(num % i == 0){
            cout<<"Number is not a prime number."<<endl;
            flag = true;
            break;
        }
    }
    if(!flag){
            cout<<"Number is a prime number."<<endl;
    }
    return 0;
}
*/

/*
int main(){
    //To check number is armstrong
    int num;
    cout <<"Enter the number: ";
    cin >> num;
    int temp = num;
    int ans = 0;
    int len = 0;

    while(temp != 0){
        temp = temp/10;
        len++;
    }
    temp = num;
    cout<<len<<endl;

    while(temp != 0){
        int q = temp % 10;
        ans += (int) pow(q, len);
        temp /= 10;
    }
    if(num == ans){
        cout <<"Given number is Armstrong.\n";
    }
    else{
        cout <<"Given number is not Armstrong.\n";
    }
    return 0;
}
*/

/*
int main(){
    // check if the given number is pallindrome or not ?
    int num;
    cout <<"Enter the number: ";
    cin >> num;
    int org_num = num;
    int rev_num = 0;
    while(num != 0){
        rev_num = rev_num*10 + num %  10;
        num = num / 10;
    }
    if(rev_num == org_num){
        cout << "Number is Pallindrome.";
    }else{
        cout << "Number is not Pallindrome.";
    }
    return 0;
}

*/


/*
int main(){
    //given three integers, find the minimum and maximum among them.
    int a = 1, b = 5, c = 3;

    int mn = a, mx = a;

    if(b > mx){
        mx = b;
    }else if(b < mn){
        mn = b;
    }

    if(c > mx){
        mx = c;
    }else if(c < mn){
        mn = c;
    }

    cout << "Minimum = " << mn << "\nMaximum = " <<mx <<endl;

    cout << endl << "Using keyword find maximum and minimum" << endl;
    int maximum = max(max(a,b),c);
    int minimum = min(min(a,b), c);

    cout << "Minimum = " << minimum << "\nMaximum = " <<maximum <<endl;
}
*/