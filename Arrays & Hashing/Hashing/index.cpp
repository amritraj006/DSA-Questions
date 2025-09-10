#include <iostream>
#include <unordered_map>
#include <vector>
#include <set>
using namespace std;

//is contains duplicate

bool isContainsDuplicate(vector<int>& nums) {
    set<int> st;
    for (int i : nums) {
        if (st.find(i) != st.end()) {
            return true;
        }
        st.insert(i);

    }
    return false;
}

bool isContainsDuplicate2(vector<int>& nums) {
    unordered_map<int, int> hashMap;
    for (int i : nums) {
        hashMap[i]++;
        if (hashMap[i] > 1) {
            return true;
        }
    }
    return false;
}



int main() {
    unordered_map<int, int> hashMap;
    hashMap.insert({4, 100});
    hashMap.insert({2, 200});
    hashMap.insert({3, 300});
    hashMap.end()->second;

    cout << hashMap.find(4)->first << endl; // Outputs 4
    cout << hashMap.find(2)->second << endl; // Outputs 200
    cout << hashMap.find(3)->second << endl; // Outputs 300

    for (auto it = hashMap.begin(); it != hashMap.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}