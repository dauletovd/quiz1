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