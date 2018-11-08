#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    
    map <string, string> m;
    string city , country;
    for (int i = 0; i < n; i++){
        cin >> country;
        cin >> k;
        for (int j = 0; j < k; j++){
            cin >> city;
            m[city] = country;
        }
    }

    int a;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> city;
        if (m[city] == ""){
            cout << "Unknown" << endl;
        }
        else{
            cout << m[city] << endl;
        }
    }

    return 0;
}