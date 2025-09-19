#include <unordered_set>
#include <iostream>

using namespace std;

bool ContainsDuplicate(vector<int>& arr) {
    unordered_set<int> seen;
    for (int i : arr) {
        if (seen.count(i)) return true;
        seen.insert(i);
    }
    return false;
}

//Two Pointer
bool ContainsDuplicate2(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = 1;
    while (right < arr.size()) {
        if (arr[left] == arr[right]) {
            return true;
        }
        left++;
        right++;
    }
    return false;
}

bool isSortedArray(vector<int>& arr) {
    for (int i=1; i<arr.size(); i++) {
        int key = arr[i];
        if (key < arr[i-1]) {
            return false;
        }
    }
    return false;
}

bool isSortedArray2(vector<int>& arr) {
    int left = 0;
    int right = 1;
    while (right < arr.size()) {
        if (arr[left] > arr[right]) {
            return false;
        }
        left++;
        right++;
    }
    return true;
}



int main() {
    vector<int> arr = {2,3,5,4,54,4};
    if (ContainsDuplicate(arr)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;

    }

    if (isSortedArray(arr)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}