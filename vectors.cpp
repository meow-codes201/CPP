#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v2(5,0); // creates a vector of size 5 with all elements initialized to 0
    cout << v1[0];
    for(int i  : v2){
        cout << i << " ";
    }

    vector<char> v3 = {'a','b','c','d','e'};
    for(char c : v3){
        cout << c << "\n";
    }


vector<string> v = {"mercedes","bmw","audi","rolls royce","tesla"};

// vector functions 

//1. size() - returns the number of elements in the vector
cout << v.size() << "\n"; //5

//2.front() - returns the first element of the vector
cout << v.front() << "\n"; //mercedes

//3.back() - returns the last element of the vector
cout << v.back() << "\n"; //tesla

//4. at() - returns the element at the specified index
cout << v.at(1) << "\n"; //bmw

//5.push_back() - to add an element at the end of the vector
v.push_back("mustang");
cout << v.back() << "\n"; //mustang


    return 0;
}