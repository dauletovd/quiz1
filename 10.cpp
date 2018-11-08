#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
    int n, x;
    string s;
    deque <string> d;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> s >> x;
        if (x == 1) d.push_front(s);
        else {
            d.push_back(s);
        }
    }

    for (int i = 0; i < n; i++){
        cout << d[i] << " ";
    }
    return 0;
}
