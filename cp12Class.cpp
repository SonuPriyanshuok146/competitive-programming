#include<bits/stdc++.h>
using namespace std;

/*
    Fizz BuZZ
    Given an integer n, for every positive integer i <= n, the task is to print
    "FizzBuzz" if i is divisible by 3 and 5,
    "Fizz" if i is divisible by 3,
    "Buzz" if i is divisible by 5
    i as a string, if none of the conditions are true.
    
*/

int main(){
    int n;
    cout<<"Enter the Integer number: ";
    cin >> n;
    for(int i = 0; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            cout <<"FizzBuzz"<<endl;
        }else if(i % 3 == 0){
            cout<<"Fizz" <<endl;
        }else if(i % 5 == 0){
            cout<<"Buzz" <<endl;
        }else{
            cout << to_string(i) <<endl;
        }
    }
    return 0;
}

/*
    check if the given two strings are pangram of each other

    Given a string s, the task is to check if it is a pangram or not.
    A pangram is a sentence containing all lowercse letters of the english alphabet.
*/
/*
int main(){ //TC = O(n)
    string str = "The quick brown fox jumps over the lazy dog.";
    bool freq[26] = {false};
    for(char c : str){
        if(c >= 'a' && c <= 'z'){
            freq[c - 'a'] = true;
        }else if(c >= 'A' && c <= 'Z'){
            freq[c - 'A'] = true;
        }
    }
    for(bool present : freq){
        if(!present){
            cout << "Given String is not a Pangram";
            return 0;
        }
    }
    cout << "Given string is a pangram"<<endl;
    return 0;
}
*/


/*
    check if the given two strings are anagrams of each other

    Given two non-empty strings s1 and s2 of lowercase letters, determine if they are anagrams - i.e., if they contain the same characters with the same frequencies.
*/

/*
int main(){ // TC = O(nlogn + mlogm)
    
    string str1 = "hello";
    string str2 = "olehl";

    if(str1.size() != str2.size()){
        cout<<"Not a anagram!!"<<endl;
        return 0;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2){
        cout<<"They are Anagrams"<<endl;
    }else{
        cout << "Not a anagram!!" <<endl; 
    }
    

    return 0;
}
*/



/*
int main(){ //TC = O(n)
    
    string str1 = "hello";
    string str2 = "olehl";

    if(str1.size() != str2.size()){
        cout<<"Not a anagram!!"<<endl;
        return 0;
    }
    int freq1[26] = {0};
    int freq2[26] = {0};

    for(int i = 0; i < str1.size(); i++){
        freq1[str1[i] - 'a']++;
        freq2[str2[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++){
        if(freq1[i] != freq2[i]){
            cout << "Not a anagram!!" <<endl;
            return 0;
        }
    }
    cout<<"They are Anagrams"<<endl;

    return 0;
}
*/