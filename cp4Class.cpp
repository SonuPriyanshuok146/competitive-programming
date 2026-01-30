#include<bits/stdc++.h>
using namespace std;

int main(){
    // pattern printing: 6- reverse full pyramid
     
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int k = 0;
    for(int i = n; i >= 1; i--){
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

/*
int main(){
    // pattern printing: 5- full pyramid
    //         * 
    //       * * * 
    //     * * * * * 
    //   * * * * * * * 
    // * * * * * * * * * 
     
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        //number of spaces on the ith rows
        for(int j = 1; j <= n-i; j++){
            cout <<"  ";
        }
         int k = 0;
         //number of start at the ith rows
         while(k!= 2*i - 1){
            cout <<"* ";
            k++;
         }
         cout<<endl;
    }
    return 0;
}
*/



/*
int main(){
    // pattern printing: 4- Inverted half numerical pyramid
    // 1 2 3 4 5 
    // 1 2 3 4 
    // 1 2 3 
    // 1 2 
    // 1 
     
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}
*/

/*
int main(){
    // pattern printing: 3- half numerical pyramid
    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4 
    // 1 2 3 4 5 
     
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i <<" ";
        }
        cout << endl;
    }
    return 0;
}
*/

/*
int main(){
    // pattern printing: 3- half numerical pyramid
    // 1 
    // 1 2 
    // 1 2 3 
    // 1 2 3 4 
    // 1 2 3 4 5 
     
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j <<" ";
        }
        cout << endl;
    }
    return 0;
}
*/

/*
int main(){
    
    // pattern printing: 2- Inverted Half Pyramid
    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // *
    
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = n+1-i; j >= 1; j--){
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}
*/


/*
int main(){
    //pattern printing: 1 - Half Pyramid
    // * 
    // *  * 
    // *  *  * 
    // *  *  *  * 
    // *  *  *  *  * 
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
int countdigit(int temp){
    int leng = 0;
    while(temp != 0){
        leng++;
        temp /= 10;
    }
    return leng;
}

bool armstrongNum(int num){
    int temp = num;
    int armnum = 0;
    int len = countdigit(num);
    while(temp != 0){
        int q = temp % 10;
        armnum += pow(q, len);
        temp /= 10;
    }
    return armnum == num;
}

int main(){
    //given two integer start and end find all the armstrong number between start and end including both
    int st, end;
    cout << "Enter the two number: ";
    cin >> st >> end;

    for(int i = st; i <= end; i++){
        if(armstrongNum(i)){
            cout << i << " ";
        }
    }
    return 0;
}
*/

/*
int main(){
    //Given two numbers, find their LCM using HCF
    int n, m;
    cout << "Enter the two number: ";
    cin >> n >> m;

    int LCM = max(m,n); //LCM is at least max of two numbers
    int HCF = 1;
    for(int i = min(m, n); i >= 1; i--){
        if(m%i == 0 && n%i == 0){
            HCF = i;
            break;
        }
    }
    LCM = m*n / HCF;
    cout << LCM << endl;
    return 0;
}
*/

/*
int main(){
    //Given two numbers, find their LCM
    int n, m;
    cout << "Enter the two number: ";
    cin >> n >> m;

    int mul = n*m;
    int LCM = max(m,n); //LCM is at least max of two numbers
    for(int i = min(m, n); i >=1; i--){
        if(n % i == 0 && m % i == 0){
            LCM = mul / i;
            break;
        }
    }
    cout << LCM << endl;
    return 0;
}
*/

/*
int main(){
    int n, m;
    cout << "Enter the two number: ";
    cin >> m >> n;
    int HCF = 1;
    cout << "HCF of " << m << " and "<< n <<" is ";
    for(int i = min(m, n); i >= 1; i--){
        if(m%i == 0 && n%i == 0){
            HCF = i;
            break;
        }
    }
    cout << HCF;
    return 0;
}
*/