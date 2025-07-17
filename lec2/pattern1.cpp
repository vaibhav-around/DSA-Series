#include <bits/stdc++.h>
using namespace std;


void printPattern(int n) {
     for (int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
            cout << " * ";
        }
        cout << endl;
    }
}


int main(){
    int n;
    cout << "Enter Number of Lines: " << endl;
    cin >> n;
    printPattern(n);
    return 0;
}