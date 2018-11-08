#include <iostream>
#include <string>
using namespace std;

void f(string s){
    if(s[0] >= 'A' && s[0] <= 'Z'){
        cout << s[0];
        return;
    }
    f(s.substr(1, s.size() - 1));
}


int main(){
    string s;
    cin >> s;
    f(s);
    return 0;
}
// /Given a string s. Find it’s first uppercase letter using recursion. If you can’t find it print -1. Input
// In the first line of the input given s. Output
// Print first uppercase letter.
