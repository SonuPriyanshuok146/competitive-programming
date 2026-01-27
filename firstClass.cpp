#include<iostream>

int main(){
    std::cout << "Hello Sir!\n"; //here \n is escape character
    std::cout << "1" <<std::endl;
    std::cout << "2" <<std::endl;
    /*
    cout << "3" <<endl;
    */
    return 0;
}



#include<iostream>
using namespace std; //it have responsibility to tell compiler about cin, cout

int main(){
    // cout << "Hello Sir!\n"; //here \n is escape character
    // cout << "1" <<endl;
    // cout << "4" <<endl; //same as '4' but prefer "4"
    // cout<< "(1+2)" <<endl; //1+2
    // cout<< (1+2) <<endl; //3
    // cout<< 6 <<endl;
    // cout << "Aditya" <<endl;
    /*
    cout << "3" <<endl;
    */

    // cout << 2/3 <<endl;
    // cout << 3.0/2.0 <<endl;
    // cout << 4.0/3 <<endl;

    //Data types in c++ 
    /*
        int --> 1, 2, 3, 4, -4, 0
        double --> 1.4, -3.9, 4.0, 0
        bool --> true, false
        char --> 'a', 'b', 'D', 'E', 'A'
        string --> "a", "afbjk345", "89902", "Aditya Jain"
    */

    //Variables in C++
    int a = 5; //decleare and initialize
    // cout<< a <<endl;
    int b;
    cout << b << endl; //here it give garbage value of b
    b = 5;
    return 0;
}