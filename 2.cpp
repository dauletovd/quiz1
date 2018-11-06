// Problem B. 77425. From Left to Right
//  Input file: Output file: Time limit: Memory limit:
// standard input standard output 1 second
// 256 megabytes
// You are given a single integer number N. Print all its digits one by one, in the usual order, seperated by space.
// Input
// Input contains an integer N;
// Output
// Output all its digits separated by space.
// Example
// Note
// While solving this problem, you cannot use strings, lists, arrays. Only recursion is allowed.

#include <iostream>
using namespace std;
void recFunc(int N){
    if (N == 0) return;
    recFunc(N / 10);
    cout << N % 10 << " ";
}


int main(){
    int N;
    cin >> N;
    recFunc(N);
    return 0;
}