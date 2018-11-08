// Problem F. 77040. Winner
//  Input file: Output file: Time limit: Memory limit:
// standard input standard output 1 second
// 256 megabytes
// Bekzat is a jury of olympiad. In order to define winners, he wants to determine a winner of this olympiad. But he hasn’t time and needs your help. You have to find a winner and print it. If there are several winners print latest encountered one. Look at an example.
// Input
// In the first line given (1 ≤ n ≤ 1000), number of participants. The next n lines given surnames, names of students and their score.
// Output
// Print winner’s surname, name and score.

#include <iostream>
#include <map>
#include <string>
using namespace std;

int makeint(string b){
    int res = 0, x = 1;
    for (int i = b.size() - 1; i >= 0; i--){
        res += ((int(b[i]) - 48) * x);
        x *= 10;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    string a, b, c;
    int score;
    map <int, string> m;
    map <int, string> :: iterator it;


    for (int j = 0; j <= n; j++){
        getline(cin, a);
        for (int i = 0; i < a.size(); i++){
            if(a[i] >= '0' && a[i] <= '9'){
                b = b + a[i];
            }
            else{
                c = c + a[i];
            }
        }
        score = makeint(b);
        it = m.find(score);
        if (it != m.end()){
            m[score] = c;
        }
        m.insert(make_pair(score,c));
        b = "";
        c = "";
    }

    map <int, string> :: reverse_iterator r_it = m.rbegin();
    cout << r_it -> second << r_it -> first << endl;
    return 0;
}
