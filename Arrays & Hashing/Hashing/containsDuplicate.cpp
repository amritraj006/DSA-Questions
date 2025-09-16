#include <unordered_set>
#include <iostream>

using namespace std;

bool ContainsDuplicate(vector<int>& arr) {
    unordered_set<int> seen;
    for (int i : arr) {
        if (seen.count(i)) {
            return true;
        }
        seen.insert(i);
    }
    return false;
}

int main() {
    vector<int> arr = {2,3,5,4,54,4};
    if (ContainsDuplicate(arr)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;

    }

}