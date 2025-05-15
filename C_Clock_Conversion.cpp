#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int hour = stoi(s.substr(0, 2));
        int minute = stoi(s.substr(3, 2));

        string qtr;
        if (hour >= 12) {
            qtr = "PM";
        } else {
            qtr = "AM";
        }

        if (hour == 0) {
            hour = 12;
        } else if (hour > 12) {
            hour = hour - 12;
        }

        cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << qtr << endl;
    }

    return 0;
}
