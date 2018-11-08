#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    int n, k, x;
    cin >> n >> k;

    for (int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    cout << v[k] << endl;

    return 0;
}