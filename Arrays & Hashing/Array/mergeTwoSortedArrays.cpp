#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

//Merge two Sorted Arrays O(n+m) -> Time Complexity, O(1) -> Space Complexity
void mergeTwoSortedArrays(vector<int>& arr1, int n, vector<int>& arr2, int m) {
    int i = n - 1;          // Last valid element in arr1
    int j = m - 1;          // Last element in arr2
    int index = n + m - 1;  // Last index of arr1 (after resize)
    arr1.resize(n + m);    
    
    // Resize arr1 to hold elements of both arrays
    while (i >= 0 && j >= 0) {
        if (arr1[i] > arr2[j]) {
            arr1[index--] = arr1[i--];
        } else {
            arr1[index--] = arr2[j--];
        }
    }

    // If arr2 still has elements left
    while (j >= 0) {
        arr1[index--] = arr2[j--];
    }
}



int main() {
    vector<int> arr1 = {1,3,4};
    vector<int> arr2 = {2,3,6};
    int n = 3; // Number of valid elements in arr1
    int m = arr2.size();

    mergeTwoSortedArrays(arr1, n, arr2, m);

    for (int num : arr1) {
        cout << num << " ";
    }

    return 0;
}