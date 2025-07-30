#include<bits/stdc++.h>
#include<cctype>
using namespace std;


class Car{
public:
    // member varialbes
    string brand;
    string model;
    int year;

    // member methods
    void displayCarInfo(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }

    void startEngine() {
        cout << model << " engine started" << endl;
    }
};


class BankAccount{
private:
    string AccountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance){
        if(accNum.size() <= 0){
            cout << "No AccountNumber or InitialBalance Provided, Please provide a valid One!" << endl;
            return;
        }
        AccountNumber = accNum;
        if(initialBalance >= 0){
            initialBalance = 0;
        }
    }
};


class Main{

    public: 
        bool isPalindrome(string s){
            // cout << "Raw String: " << s << endl;
            // for iteration over each character
            for(int i = 0; i < s.size();){
                if(isupper(s[i])) s[i] = tolower(s[i]);
                // checking if a character is alphanumric
                if(!isalnum(s[i])){
                    s.erase(i,1);
                }else {
                    i++;
                }
            }
            cout << "Modified string: " << s << endl;
            for(int i = 0; i < s.size()/2; i++){
                if(s[i] != s[s.size() - i - 1]){
                    return false;
                }
            }
            return true;
        }
        void callPrivate(){

        }
};

int main(){
    Car car1;
    Car car2;

    // car1 object
    cout << "----------------Car 1 Info ----------------------" << endl;
    car1.brand = "BMW";
    car1.model = "X7";
    car1.year = 2023;
    car1.displayCarInfo();


    // car2 object
    cout << "----------------Car 2 Info ----------------------" << endl;
    car2.brand = "Audi";
    car2.model = "Q4";
    car2.year = 2022;
    car2.displayCarInfo();
   
    return 0;
}