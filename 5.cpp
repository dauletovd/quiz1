// Problem E. 77037.Two sequences
//  Input file: Output file: Time limit: Memory limit:
// standard input standard output 1 second
// 256 megabytes
// Write a program for two sequences, that consist of natural numbers which will determine which numbers occur in each of the sequences, and which of the numbers from 1 to n — do not occur in any of them.
// Input
// In the first line given n, (1 ≤ n ≤ 10000). In the second line given elements of the first sequence a, (1 ≤ ai ≤ 1000)and ends with 0. In the third line given elements of the second sequence b, (1 ≤ bi ≤ 1000 and ends with 0. Look for examples.
// Output
// In the first line output numbers in increasing order without repetitions, which occur in each of the sequences. In the second line output numbers from 1 to n in increasing order, which do not occur in any of two sequences.


#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;

    set<int> a;
    set<int> b;
    set<int> c;
    set<int> d;
    
    int x;
    while (cin >> x){
        if (x == 0) break;
        a.insert(x);
        d.insert(x);
    }

    while (cin >> x){
        if (x == 0) break;
        b.insert(x);
        d.insert(x);
    }

    set<int> :: iterator ita = a.begin();
    set<int> :: iterator itb = b.begin();

    for (ita = a.begin(); ita != a.end(); ita++){
        for (itb = b.begin(); itb != b.end(); itb++){
            if (*ita == *itb){
                c.insert(*ita);
                break;
            }
        }
    }
    set<int> :: iterator itc = c.begin();
    set<int> :: iterator itd = d.begin();
    for (itc = c.begin(); itc != c.end(); itc++){
        cout << *itc << " ";
    }
    cout << endl;

    for (int i = 1; i <= n; i++){
        if (i != *itd){
            cout << i << " ";
        }
        if (i == *itd){
            itd++;
        }
    }      

    return 0;
}