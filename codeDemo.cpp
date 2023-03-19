// Learning C++
// Exercise 01_03
// Hello World, by Hayat Adeyemo
#include <iostream>
#include <string>

using namespace std;
using std::ofstream;

int main(){
    string str;
    cout << "Please enter your name: ";
    cin >> str;
    cout << "Hello, " << str << "!" << endl;
    return (0);
}