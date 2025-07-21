#include<bits/stdc++.h>
#include<limits>
#include<climits>
using namespace std;

// Important notes
/*
* whenever a division is happening by a number the time complexity would be log of that number, let's say, to find the digits of a number 7334, you would need to divide it by 10, so time complexity will be log10(7334), or log10(n)
*/


class Solution {
    public:
        int countDigit(int n) {
            int digits = 0;
            while(n > 0){
                n /= 10;
                digits++;
            }
            // cout << "digits: " << digits << endl;
            return digits;
        }
        int reverse(int x) {
            int rev = 0 ;
                while(x != 0) {
                    int rem = x % 10;
                    if(rev > INT_MAX/10 || (rev == INT_MAX/10 && rem > 7)){
                        return 0;
                    }
                    if(rev < INT_MIN/10 || (rev == INT_MIN/10 && rem < -8 )){
                        return 0;
                    }
                    rev = rev * 10 + rem;
                    x /= 10;
        }
        return rev;
        }
        int armStrong(int x) {
            if(x < 0){
                return false;
            }
            int dup = x;
            int arm = 0;
            while(x > 0){
                int rem = x % 10;
                if(arm > INT_MAX/10 || (arm == INT_MAX/10 && rem > 7)){
                    return 0;
                }
                arm = arm + (rem * rem * rem);
                x /= 10;
            }
            if(dup == arm){
                return true;
            }else {
                return false;
            }
        }
        void printAllDivisors(int x){
            if (x < 0){
                cout << "No Divisors";               
            }
            for(int i = 1; i <= x; i++ ){
                if(x % i == 0){
                    cout << i;
                    if(i != x){
                        cout << ", ";
                    } 
                }
            }
        }
        void printAllDivisors_2(int x){
            if (x < 0){
                cout << "Value is 0";
            }
            vector<int> arr;
            // int n = sqrt(x);
            // loop runs from 1 to sqrt(n), so TC= O(n), n represent the whole numbers from 1 to n
            for(int i = 1; i*i <= x; i++){
                if(x % i == 0) { 
                    cout << i;
                    arr.push_back(i);
                    if(i != x/i){
                        arr.push_back(x/i);
                    }
                }
            }
            cout << endl;
            // internal sorting function takes O(n log n), n: number of factors, that got into list(vector)
            sort(arr.begin(), arr.end());
            // this loop runs for number of factors time, O(number of factors)
            for(auto it: arr){
                cout << it << ", ";
            }
            // total time complexity: O(n) + O(n log n) + O(n), here n are different numbers.
        }
        int primeNumber(int n){
            if (n <= 0){
                return false; 
            }
            for(int i = 2; i*i <= n; i++){
                if(n % i == 0) return false;
            }
        return true;
            }
        void gcdOrHcf(int n1, int n2) {
            for(int i = min(n1, n2); i >= 1; i--){
                if(n1 % i == 0 && n2 % i == 0){
                    cout << "GCD: " << i << endl;
                    break;
                }
            }
        }
        int gcdOrHcfEuclideon(int n1, int n2){
            while( n1 > 0 && n2 > 0){
                if(n1 > n2){
                    n1 = n1 % n2;
                }else {
                    n2 = n2 % n1; 
                }
            }
            if(n1 == 0){
                return n2;
            }else {
                return n1;
            }
        }
    };





// printing all the digits in user's input
void printDigits(int value) {

    if(value < 0) {
        cout << "Negative number";
        return;
    }

    if(value  == 0){
        cout << "Number 0";
        return;
    }

    // let's find number of digits
    // int digits = 0;
    // int temp = value;
    // while(temp > 0){
    //     temp /= 10;
    //     digits++;
    // }

    // int divisor = pow(10, digits - 1);
    // while (divisor > 0){
    //     int digit = value / divisor;
    //     cout << digit << " ";
    //     value %= divisor;
    //     divisor /= 10;
    // }
    // cout << endl;
    
    while (value > 0){
        cout << value%10 << " ";
        value = value/10;
    }
    
    
    return;

}
 

// print number of digits that are present in given number
int countDigits(int value) {
    int cnt = log10(value);
    return cnt+1;
}


int main() {

    int input1, input2;
    cin >> input1 >> input2;
    Solution obj;
    cout << "Gcd: " << obj.gcdOrHcfEuclideon(input1, input2);
}