#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

//Two Sum

vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> mp; // value -> index
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (mp.find(complement) != mp.end() && !mp.empty()) {
            return {mp[complement], i};
        }
        mp[arr[i]] = i;
    }
    return {};
}


int main() {
    vector<int> arr = {2,3,1,5,6};
    //1,2,3,5,6
    sort(arr.begin(), arr.end());
    int target = 6;

    vector<int> answer = twoSum(arr, target);
    for (int index : answer) {
        cout << index << " ";
    }


    return 0;
}