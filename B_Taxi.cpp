#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < n; ++i) {
        int size;
        cin >> size;
        if (size == 1) a++;
        else if (size == 2) b++;
        else if (size == 3) c++;
        else if (size == 4) d++;
    }
    
    int taxis = d;
    int mini = min(a,c);
    taxis += mini;
    if(a == c){
        taxis += (b + 1)/2;
    }
    else if( a < c){
        taxis += (b + 1)/2 - mini + c;
    }
    else if( a > c){
        if(b%2 == 0 && (a - c)%4 == 0){
            taxis += b/2 + (a - c)/4;
        }
        else if(b%2 == 0 && (a - c)%4 != 0){
            taxis += b/2 + (a - c)/4 + 1;
        }
        else if(b%2 != 0 && (a - c) < 3){
            taxis += (b + 1)/2;
        }
        else if(b%2 != 0 && (a - c) >= 3){
            if((a - c - 2)%4 == 0){
            taxis += (b + 1)/2 + (a - c - 2)/4;
            }
            else {
                taxis += (b + 1)/2 + (a - c - 2)/4 + 1;
            }
        }
    }
    

    cout << taxis << endl;

    return 0;
}
