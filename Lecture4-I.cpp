//Lecture4 I - Conditional Statements, If Else, Switch Case Pt I

#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cout << "Input 4 Integers a, b, c, and d : " <<  endl;
    cin >> a >> b >> c >> d;
    
    // true as 1
    // false as 0
    cout << "a>b && c>d : " << (a>b && c>d) << ", ";
    cout << "a>b || c>d : " << (a>b || c>d);
    return 0;
}