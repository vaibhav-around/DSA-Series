#include<bits/stdc++.h>
using namespace std;


class HashingWithMap{
// private members
int myVersion(){
    // declaring variable for number of data to be input
    int dataSetNumbers;
    cin >> dataSetNumbers; // taking in range
    

    // precomputation (optional)
    map<string,int> hashMap;
    // looping over range
    for(int i = 0; i < dataSetNumbers; i++){
        string item;
        cin >> item;
        hashMap[item] += 1;
    }

    // fetching
    int range;
    cin >> range;
    while(range--){
        string value;
        cin >> value;
        cout << value << ": " << hashMap[value] << endl;
    };

    

    return 0;
}
int myNumericVersion(){
    int number;
    map<int,int> mpp;
    cin >> number;
    while(number--){
        int num;
        cin >> num;
        mpp[num] += 1;
    }

    // fetching
    int range;
    cin >> range;
    while(range--){
        int  num;
        cin >> num;
        cout << num << ": " << mpp[num] << endl;
    }

    // highest and lowest number in map
    cout << "Lowest Number: " << mpp.begin()->first << endl;
    cout << "Highest Number: " << prev(mpp.end())->first << endl;

};
public: 
void callPublic(){
    myNumericVersion();
}
};

class Myclass{
private:
    int numberHashing(){
        int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // precomputation
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int timesSearch;
    cin >> timesSearch;
    while(timesSearch--){
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
        return 0;
    }

    int characterHashing(){
        int n;
        cin >> n;
        vector<char> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        vector<int> hashMap(129);
        for(int i = 0; i < n; i++){
            hashMap[arr[i]] += 1;
        }

        int searchCount;
        cin >> searchCount;
        while(searchCount--){
            char value;
            cin >> value;
            cout << hashMap[value] << endl;
        }
        return 0;
    }

    int stringHashing(){
        // this function is made for smallcase characters only

        // dataset declaration and fetching
        string str;
        cin >> str;

        // precompute, getting a hash array ready
        int hashMap[26] = {0};
        for(int i = 0; i < str.size(); i++){
            // processsing location
            int loc = str[i] - 'a';
            hashMap[loc] += 1;
        }

        // search processing
        int searchDuration;
        cin >> searchDuration;
        while(--searchDuration){
            char c;
            cin >> c;
            int loc = c - 'a';
            cout << hashMap[loc] << endl;
        }
        return 0;
    }

    int WholeAsciiHashing(){
        string str;
        cin >> str;

        // precompute
        vector<int> arr(256,0);
        for(int i = 0; i < str.size(); i++){
            arr[str[i]] += 1;
        }

        // fetching
        int searchIteration;
        cin >> searchIteration;
        while(--searchIteration){
            char searchChar;
            cin >> searchChar;
            cout << searchChar << ": " << arr.at(searchChar) << endl;
        }
        return 0;
    }
public:
   void callPublic(){
    WholeAsciiHashing();
   }
};


int main(){
    HashingWithMap obj;
    obj.callPublic();
    return 0;
}