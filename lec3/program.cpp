#include<bits/stdc++.h>
using namespace std;

// pairs
void pairs() {

    // basic declaration
    pair<int, int> p = {3, 4};
    cout << p.first << endl;

    // nested declaration, I want to store 5 values in a pair
    pair<int, pair<int, pair<int, pair<int, int>>>> p2 = {3, {4,{8,{3,4}}}};

    cout << p2.second.second.second.second << endl;
    // should be 4

    // array of pairs

    pair<int,int> myarray[] = {{2,3},{3,6},{6,13},{03,46}};
    // to access the 2nd indexed pair, I would need to, which is 13
    cout << myarray[2].second << endl;
    
}

// vectors
void vectors() {
    // basic declaration and insertion
    vector<int> v;
    v.push_back(2); // 2 will be inserted into v
    v.emplace_back(3); // 3 will be inserted into v after 2.

    // cout << v[0] << endl;

    // vector + pair
    vector<pair<int,int>> v2;
    // with method pushback
    v2.push_back({2,3});
    // with method emplace back, no curly needed!
    v2.emplace_back(6,3);

    // cout << v2[1].first << endl; // output 6

    // predefined values
    vector<int> v3(5,100); // {100,*5}

    // cout << v3[3] << endl; // output 100 at index 3

    vector<int> v3_1(5); // {0,0,0,0,0}

    // cout << v3_1[3] << endl; // ouput 0 at index 3

    // to copy one vector into another

    vector<int> v4(v3);
    // cout << v4[2] << endl; // output 100

    // accessing values through their address
    vector<int>::iterator it = v3.begin(); // it has the address of 1st element of v3 vector
    // cout << "value of it: " << it << endl; // this will give error seems like you cannot access memory address like that, because iterator does not have this property << for out put stream.
   
    cout << "Accesssing address of 1st value: " <<  &(*it) << endl; // the following expressing converts iterator to the value then shows the address of that value.
    cout << "Accesssing address of iterator value: " <<  &(it) << endl; // the following expressing converts iterator to address.
   
    // looping so that we can access all 5 values
    cout << "Values: " << endl;
    for(int i = 0; i < 5; i++){
    cout << *(it) << " "; // to access a value from an address, use *()
    it++; // iterating memory address, they must have been stored consecutively
    }
    cout << endl;

    // using end()

    vector<int>::iterator last = v3.end(); // end return incremented address, from the last element, means the value of last would be one past last element
    cout << "Last value: " << *(--last) << endl;

    // some extra, good to knows
    // rend()
    vector<int>::reverse_iterator rend = v3.rend();  // reend will give me a address before 1st element of container

    cout << "Rend function: " << *(--rend) << endl;
    // rbegin 
    vector<int>::reverse_iterator rbegin = v3.rbegin();  // rbegin will give me a address after  last element of container


    // using looops to iterate over containers
    // for(vector<int>::iterator it = v3.begin(); it != v3.end(); it++){
    //     cout << "Value: " << *(it) << endl;
    // }


    // using auto
    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout << "Value: " << *(it) << endl;
    // }

    // more short
    // for(auto it:v){
    //     cout << "Value: " << it << endl;
    // }

    // deleting values
    // for(auto it = v3.begin(); it != v3.end(); it++){
    //     cout << "Value which won't get deleted: " << *(it) << endl;
    //     if(it >= v3.begin()+1 && it < v3.end()+3) // values which will be
    //     {
    //         v3.erase(it);
    //     }
    // }
    

    // v3.insert(v3.begin(), 200); // {200,100,100.....}
    // v3.insert(v3.begin()+2, 2, 200); // {100,100, 200, 200, 100, 100, 100}


    // using back 
    // cout << "Last Item: " << v3.back() << endl;



    // some extras

    // v3.pop_back(); // pops first value of container
    // v3.swap(v4); // swaps with another container
    // v3.clear(); // clearing values of container
    // v3.empty(); // returns boolean, that if a container is empty or not



    // for(auto it = v3.begin(); it != v3.end(); it++){
    //     cout << "value: " << *(it) << endl;
    // }
}

// list
void list() {

    // basic declaration
    llist<int> ls;

    // pusing a value at back
    ls.push_back(2);
    ls.emplace_back(5);


    // pushing a value at front
    ls.push_front(3);
    ls.empplace_front(1);


    cout << ls << endl;

}



int main(){

    list()

    return 0;
}