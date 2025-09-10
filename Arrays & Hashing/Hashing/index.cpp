#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    unordered_map<int, int> hashMap;
    hashMap.insert({1, 100});
    hashMap.insert({2, 200});

    cout << hashMap.find(1)->second << endl; // Outputs 100
    cout << hashMap.find(2)->second << endl; // Outputs 200
}