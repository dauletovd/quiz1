// Problem A. 77180. Sorting
//  Input file: Output file: Time limit: Memory limit:
// standard input standard output 1 second
// 256 megabytes
// Write a program which sorts an array of elements. The size of an array is not given.
// Input
// Input contains some elements and ends with 0, it means that if 0 appears in array you should end your program. Look for examples.
// Output
// Output sorted array of elements.


#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    int x;

    while (cin >> x){
        if (x == 0) break;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (vector <int> :: iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    return 0;
}