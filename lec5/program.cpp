// Recursion : Whean a function calls itself, until a specified condition is met.  
#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

int f1 () {
    if (cnt == 3) return 0;
    cout << "before Call stack: " << cnt << endl;
    cnt++;
    f1();
    cout << "After Call stack!" << endl;
}


// Time complexities 
/*
Print name 5 times: O(n), because function runs for n times, 1 to 5.

*/

// Space complexites, stack complexity
/*
Print name 5 times: O(n), because functions enters the stack to wait n times.

*/


// basic questions of recursion

// print name 5 times
int printName5times(string str) {
    if(cnt == 5) {
        return 0;
    }
    cout << str << endl;
    cnt++;
    printName5times(str);
}

// print name 5 times updated, self stopping version
int printName5times_1(int n, string str) {
    if(n > 5) {
        return 0;
    }
    cout << str << endl;
    printName5times_1(n+1,str);
}


// print linear 1 to n
int one_N(int n){
    if(cnt >= n){
        return 0;
    }
    cout << cnt+1 << endl;
    cnt++;
    one_N(n);
}

// print linear 1 to n using backtracking, what we use here, is that, steps after recursion cal in function.
int one_N_B(int i){
    if(i < 1){
        return 0;
    }

    one_N_B(i-1);
    cout << i << " ";
}


// print linear n to 1
int n_One(int n){
    if(n <= 0){
        return 0;
    }
    cout << n << endl;
    n--;
    n_One(n);
}

// print linear n to 1 using backtracking. but I am using 2 var, which I think is wasting space complexity, i need to decrease it if possible.
int n_One_B(int i, int n){
    if(i > n){
        return 0;
    }
    n_One_B(i+1,n);
    cout << i << " ";
}


int main () {
    int num;
    string str;
    cin >> num >> str;
    n_One_B(1,num);
    return 0;
}