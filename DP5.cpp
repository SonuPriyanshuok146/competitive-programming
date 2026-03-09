#include<bits/stdc++.h>
using namespace std;

/*
Count occurence of Anagrams
Given a word pattern and a string text consisting of lowercase characters, the task is to return the count of substrings in text which are anagrams of the pattern.
input; text = "forxxorfxdofr", pattern = "for"
output: 4
*/

int main(){
    string text = "forxxorfxdofr", pattern = "for";
    int n = text.size();
    int count = 0;
    sort(pattern.begin(), pattern.end());

    for(int i = 0; i < n; i++){
        string sub = "";
        for(int j = i; j < n; j++){
            sub = sub + text[j];
            sort(sub.begin(), sub.end());
            if(sub == pattern){
                count++;
            }
        }
    }
    cout << count<<endl;
    return 0;
}

/*
int main(){
    string text = "forxxorfxdofr", pattern = "for";
    int count = 0;
    int n = text.size();
    int m = pattern.size();
    vector<int> freq(26, 0);

    for(int i = 0; i < m; i++){
        freq[pattern[i] - 'a']++;
    }

    for(int i = 0; i < n; i++){
        int len = 0;
        vector<int>freq2(26, 0);
        for(int j = 0; j < m; j++){
            freq2[text[i+j] - 'a']++;
        }
        bool anagram = true;
        for(int k = 0; k < 26; k++){
            if(freq[k] != freq2[k]){
                anagram = false;
                break;
            }
        }
        if(anagram){
            count++;
        }
    }
    cout << count<<endl;
    return 0;
}
*/

/*
Count substring with k distinct characters
*/

/*
int main(){//TC = O(n^2) //SC = O(1)
    string s = "aba";
    int n = s.size();
    int count = 0;
    int k = 2;
    int distinct = 0;
     
    for(int i = 0; i < n; i++){
        unordered_map<int, int> m;
        for(int i = 0; i < 26; i++){
            m[i] = 0;
        }
        distinct = 0;
        for(int j = i; j < n; j++){
            if(m[s[j] - 'a'] == 0){
                m[s[j] - 'a'] = 1;
                distinct++;
            }

            if(distinct == k){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
*/

/*
Count Strictly increasing subarray.

Optimized - TC = O(n)
*/

/*
int main(){
    int arr[] = {1, 3, 3, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    int len = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            len++;
        }else{
            count += (len*(len-1))/2;
            len = 1;
        }
    }
    count += (len*(len-1))/2;
    cout <<count<<endl;
    return 0;
}
*/

/*
int main(){
    int arr[] = {1, 3, 3, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    int len = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            len++;
        }else{
            len = 1;
        }
        if(len >= 2){
            count += (len-1);
        }
    }
    cout <<count<<endl;
    return 0;
}
*/