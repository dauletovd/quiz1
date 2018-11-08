// Problem D. 77044. Attendance
//  Input file: Output file: Time limit: Memory limit:
// standard input standard output 1 second
// 256 megabytes
// Zharaskhan is a teacher. He teaches Sociology. In this lesson n students attended and their names are unique. He has a problem with memorizing names of people and forgets attendance list. He asked m unique names which he remembers. Print the name of people who attended this lesson in order of which Zharaskhan asked.
// Input
// In the first line given (1 ≤ n ≤ 10000), number of attended students. The next n lines given names of students. It is guaranteed that their names are unique. In the next line given (1 ≤ m ≤ 10000), the number of names which Zharaskhan asked. The next m lines given names of students. It is guaranteed these names are also unique.
// Output
// For each Zharaskhan’s query, print name from query if and only if person with this name attended the lesson.


#include<iostream>
#include<vector>

using namespace std;


int main(){
    int n;
    cin >> n;
    string a[n];
    
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int m;
    cin >> m;
    string b[m];

    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            if (b[j] == a[i]){
                cout << b[j] << endl;
                break;
            }
        }
    }

    return 0;
}