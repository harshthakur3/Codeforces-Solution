#include <bits/stdc++.h>
using namespace std;
void decToBinary(int n) 
{ 
    int binaryNum[32];
    int b = 0;
    int i = 0; 
    while (n > 0) { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--){ 
        b += binaryNum[j]; 
    }
    if(b%2 == 0) cout << "EVEN" << endl;
    else cout << "ODD" << endl;
} 

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    decToBinary(n); 
	}

}
