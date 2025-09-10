#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Two Sum
vector<int> twoSum(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return {left, right};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
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