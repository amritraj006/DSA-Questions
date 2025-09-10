#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    unordered_map<int, int> hashMap;
    hashMap.insert({4, 100});
    hashMap.insert({2, 200});
    hashMap.insert({3, 300});

    cout << hashMap.find(4)->first << endl; // Outputs 4
    cout << hashMap.find(2)->second << endl; // Outputs 200
    cout << hashMap.find(3)->second << endl; // Outputs 300

    for (auto it = hashMap.begin(); it != hashMap.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}