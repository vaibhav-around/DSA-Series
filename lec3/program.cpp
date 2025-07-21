#include<bits/stdc++.h>
using namespace std;
#include <unordered_set>

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

// list : dynamic, no random access allowed, just like vector
void listArea() {

    // basic declaration
    list<int> ls;

    // pusing a value at back
    ls.push_back(2);
    ls.emplace_back(5);


    // pushing a value at front
    ls.push_front(3);
    ls.emplace_front(1);


    cout << *(ls.begin()) << endl;

}

// dequeues : dynamic, changes could be made at front, end and anywhere as random access is allowed
void dequeArea() {
    deque<int> dq;

    // back operations
    dq.push_back(3);
    dq.emplace_back(4);

    // front operations
    dq.push_front(2);
    dq.emplace_front(1);

    // popping elements
    dq.pop_back();
    dq.pop_front();

    // accessing elements directly
    dq.front();
    dq.back();

    // others
    dq.begin(); // gets iterator address of 1st value of container
    // cout << "first element: " << *(dq.begin()) << endl;

    dq.end();
    // cout << "last element: " << *(dq.end()) << endl;
    
    // size
    cout << "size: " <<  dq.size() << endl;

    // cout << "element: " << dq[3] << endl;

}


// stack : it's a  linear data structure, that works on last in first out principle, random access not allowed, main fucntion: push, pop, top
void stackArea(){

    // basic operation
    stack<int> st;
    // creating empty containers
    stack<int> st2, st3;
    st.push(1);
    st.push(2);
    st.push(3);

    st.top(); // 3

    st.pop(); // top = 2

    // others
    cout << "is empty: " << st.empty() << endl;

    cout << "top element: " << st.top() << endl;

    st.swap(st2);

    cout << "is empty: " << st.empty() << endl;


}

// queue: work's on first in first out principle, FIFO
void QueueArea() {

    queue<int> q;

    // Add elements
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    cout << "Back: " << q.back() << endl;   // 30

    // Remove front element
    q.pop();

    cout << "Front after pop: " << q.front() << endl; // 20

    // Check if empty
    if (q.empty()) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue size: " << q.size() << endl; // 2
    }
    

}


// priority Queue: non-linear data structure, principle is like value in biggest out

void priorityQueueArea() {

    priority_queue<int> pq;

    pq.push(3); // {3}
    pq.push(2); // {2,3}
    pq.push(7); // {2,3,7}
    pq.emplace(8); // {2,3,7,8}

    cout << "Top Most Priority queue element: " << pq.top() << endl;
    pq.pop();
    cout << "Top Most Priority queue element: " << pq.top() << endl;

    // to create priority queue of Minimum number on top
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(3); // {3}
    pq2.push(2); // {2,3}
    pq2.push(7); // {2,3,7}
    pq2.emplace(8); // {2,3,7,8}

    cout << "Top Most Priority queue element: " << pq2.top() << endl;
    pq2.pop();
    cout << "Top Most Priority queue element: " << pq2.top() << endl;

}


// set : non linear ds, everthing is stored in sorted order, duplicates are not allowed in it.
void setArea(){
    set<int> st;
    st.insert(3); // {3}
    st.insert(1); // {1,3}
    st.insert(3); // {1,3}
    st.insert(4); // {1,3,4}

    cout << "first value: " << *(st.begin()) << endl;
    cout << "Last value: " << *(--st.end()) << endl;
    cout << "Last value: " << *::prev(st.end()) << endl;

    if(st.empty()){
        cout << "Set is empty" << endl;
    }else{
        cout << "Size of Set is: " << st.size() << endl;
    }

    // using iterators
    // auto it = st.find(1); // points to starting value address.

    // it = st.find(5); // 5 doesn't exist so it will point like end()
    // cout << "Last Value: " << *(--it) << endl;
    
    
    // for(it;it != st.end(); it++){
    //     cout << "Values: " << *(it) << endl;
    // }


    // erasing value

    // st.erase(1); // {3,4}
    // for(auto it = st.begin();it != st.end(); it++){
    //     cout << "Values: " << *(it) << endl;
    // }

    // st.erase(8); // 8 doesn't exists
    // for(auto it = st.begin();it != st.end(); it++){
    //     cout << "Values: " << *(it) << endl;
    // }

    // counting is values exists
    // int cnt = st.count(6);
    // if(cnt){
    //     cout << "Value exists" << cnt << endl;
    // }else{
    //     cout << "Someting happened: " << cnt << endl;
    // }


    
    for(auto it = st.begin();it != st.end(); it++){
        cout << "Values: " << *(it) << endl;
    }
    // lower_bound, upper_bound

    cout << "lowest value: " << *(st.lower_bound(1)) << endl;

    auto it = st.upper_bound(3);
    cout << "higest value according to key: " << *(it) << endl;

}


// multiset: sorted order, duplicates are allowed
void multiSetArea() {
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.emplace(3);
    ms.emplace(3);
    ms.emplace(3);
    ms.emplace(3);
    ms.emplace(3);
    ms.emplace(3);

    // for(auto it = ms.begin(); it != ms.end(); it++){
    //     cout << "Item: " << *(it) << endl;
    // }

    ms.erase(1); // will erase all the elements
    // for(auto it = ms.begin(); it != ms.end(); it++){
    //     cout << "Item: " << *(it) << endl;
    // }

    // ms.erase(ms.find(3), ++ms.find(3)); // deletes 3 where it's first found and the 3 more items after 3
    // for(auto it = ms.begin(); it != ms.end(); it++){
    //     cout << "after deleting 3: " << *(it) << endl;
    // }


    // more better approach to delete a range
    // find starting iterator
    // auto it1 = ms.find(3);
    // find till where you want to delete
    // auto itend = next(it1, 3);

    // ms.erase(it1,itend); // will delete 3 elements, from first 3 to 3 at 3rd index
    // for(auto it = ms.begin(); it != ms.end(); it++){
    //     cout << "after deleting 3: " << *(it) << endl;
    // }



}


// unordered set: values should be unique, but no sorted, lower bound and upper bound doesn't work
void unorderedSet() {
    // 1. Declaration and Initialization
    // An unordered_set stores unique elements in no particular order.
    // Elements are hashed to determine their storage location.
    unordered_set<int> us;
    cout << "--- Unordered_Set Operations ---" << endl;

    // 2. Insertion: insert()
    // Inserts an element into the unordered_set.
    // If the element already exists, it is not inserted (as elements must be unique).
    // Returns a pair: {iterator to element, bool indicating if insertion took place}.
    cout << "\n1. Insertion (us.insert()):" << endl;
    us.insert(10); // {10}
    us.insert(5);  // {10, 5} (order not guaranteed)
    us.insert(20); // {10, 5, 20}
    us.insert(5);  // No change, 5 is already present
    us.insert(15); // {10, 5, 20, 15}

    cout << "Elements after insertions: ";
    // Iterating through an unordered_set:
    // The order of iteration is not guaranteed and can change across runs or compilers.
    for (int val : us) {
        cout << val << " ";
    }
    cout << endl;
    cout << "Size after insertions: " << us.size() << endl; // Expected: 4

    // 3. Checking Size: size() and emptiness: empty()
    cout << "\n2. Size and Empty Check (us.size(), us.empty()):" << endl;
    cout << "Current size of unordered_set: " << us.size() << endl;
    if (us.empty()) {
        cout << "Unordered_set is empty." << endl;
    } else {
        cout << "Unordered_set is NOT empty." << endl;
    }

    // 4. Searching for an element: find() and count()
    // find(): Returns an iterator to the element if found, or us.end() if not found.
    // count(): Returns 1 if the element exists, 0 otherwise (since elements are unique).
    cout << "\n3. Searching (us.find(), us.count()):" << endl;
    int search_val_found = 10;
    int search_val_not_found = 99;

    // Using find()
    auto it_found = us.find(search_val_found);
    if (it_found != us.end()) {
        cout << search_val_found << " found using find()." << endl;
    } else {
        cout << search_val_found << " NOT found using find()." << endl;
    }

    auto it_not_found = us.find(search_val_not_found);
    if (it_not_found != us.end()) {
        cout << search_val_not_found << " found using find()." << endl;
    } else {
        cout << search_val_not_found << " NOT found using find()." << endl;
    }

    // Using count()
    if (us.count(search_val_found)) {
        cout << search_val_found << " found using count()." << endl;
    } else {
        cout << search_val_found << " NOT found using count()." << endl;
    }

    if (us.count(search_val_not_found)) {
        cout << search_val_not_found << " found using count()." << endl;
    } else {
        cout << search_val_not_found << " NOT found using count()." << endl;
    }

    // 5. Deletion: erase()
    // Can erase by value or by iterator.
    // Returns the number of elements erased (1 if found, 0 if not).
    cout << "\n4. Deletion (us.erase()):" << endl;
    int erase_val_success = 15;
    int erase_val_fail = 100;

    size_t erased_count = us.erase(erase_val_success); // Erase 15
    cout << "Erased " << erased_count << " instance(s) of " << erase_val_success << endl;

    erased_count = us.erase(erase_val_fail); // Try to erase 100
    cout << "Erased " << erased_count << " instance(s) of " << erase_val_fail << endl;

    cout << "Elements after erasing: ";
    for (int val : us) {
        cout << val << " ";
    }
    cout << endl;
    cout << "Size after erasing: " << us.size() << endl; // Expected: 3

    // 6. Clearing the unordered_set: clear()
    cout << "\n5. Clearing (us.clear()):" << endl;
    us.clear();
    cout << "Size after clearing: " << us.size() << endl; // Expected: 0
    if (us.empty()) {
        cout << "Unordered_set is now empty." << endl;
    }
}



// map : stores items in format of key and value, key and value could be pairs, keys should be unique and sorted
// O(n)
void mapArea() {
    map<int,int> mpp1;
    map<pair<int,int>,int> mpp2;

    mpp1[2] = 3;
    mpp1.emplace(9,3);
    mpp1.insert({8,2});

    // insertion in mpp2
    mpp2.emplace(make_pair(1,3),3);
    mpp2.emplace(make_pair(3,4),4);
    mpp2.emplace(make_pair(2,3),5);

    // iteration over mpp2
    // for(auto pair: mpp2){
    //     cout << "{" <<  "{ " << pair.first.first << ", " << pair.first.second << "} " << ", " << pair.second << "}" << endl;
    // }

    // for (auto pair : mpp1){
    //     cout << "Key: " << pair.first << ", value: "<< pair.second << endl;
    // }

    // accessing values
    // cout << "Value of key: " << mpp1[8] << endl; // expected: 2

    // auto it = mpp1[8]; // mpp1 will return value not iterator object.

    auto it = mpp1.find(8); // return iterator object which references to the item of key and value
    
    
    if(it != mpp1.end()){
    cout << it->first;
    }

}



// multimap : stores items in format of key and value, key and value could be pairs, keys should not be unique and sorted


// unorderedmap : stores items in format of key and value, key and value could be pairs, keys should be unique and not sorted
// works in O(1), worst => O(n)



// ================================================ Algorithms =====================================================

bool comp (pair<int,int> p1,pair<int,int> p2) {
    if(p1.second > p2.second) return true;
    else if(p1.second < p2.second) return false;

    // if they are same
    if(p1.first > p2.first) return true;
    return false;
}

void algo1 () {

    // sorting with array
    // array<int, 5> a= {4,45,34,23,64};

    // cout << "First Item: " << a[0] << endl;

    // sort(a.begin(), a.end(), greater<int>);

    // cout << "Sorted Array: " << endl;

    // for(auto it:a){
    //     cout << "element: " << it << endl;
    // }


    // use of greater<int> class,
    // vector<int> a = {1,3,3,5,6,7,8,9};
    // sort(a.begin(), a.end(), greater<int>());

    // for(auto it: a){
    //     cout << "item: " << it << endl;
    // }

    // define a pair
    // pair<int,int> a[] = {{2,3},{5,3},{1,2},{6,3},{8,2}};

    // sort the pair first according to second element
    // if second element is equal, then sort according to first element.

    // sort(a, a+5, comp);
    // for(auto it: a) { 
    //     cout << "{" << it.first << "," << it.second << "}" << endl;
    // }

    // builtin_popcount(), return the number of bits in a variable
    // int num = 7;
    // int cnt = __builtin_popcount(num);
    // cout << "7: " << cnt << endl;

    // if number type is a bit different
    // long long num2 = 7;
    // int cnt2 = __builtin_popcountll(num2);
    // cout << "ll7: " << cnt2 << endl;


    // permutation in strings
    // A permutation of a string is a re-arrangement of its characters. If a string has n distinct characters, then there are n! (n factorial) possible permutations

    // string s = "123";

    // do{
    //     cout << "Permutation: " << s << endl;
    // }while(next_permutation(s.begin(), s.end()));

    // finding max element
    array<int, 6> a  = {1,3,6,3,2,1};

    int maxElement = *max_element(a.begin(),a.end());

    cout << "Max element: " << maxElement << endl;

}



int main(){


    algo1();
    return 0;
}