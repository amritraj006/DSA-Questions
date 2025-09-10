#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int maxArea(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;
    int maxWater = 0;
    while (left < right) {
        int height = min(arr[left], arr[right]);
        int width = right - left;
        int currentWater = height * width;
        maxWater = max(maxWater, currentWater);
        if (arr[left] < arr[right]) left++;
        else right--;
    }
    return maxWater;
}

int main() {
    vector<int> arr = {1,3,2,4,24,32,12};
    int ans = maxArea(arr);
    cout << ans;
    return 0;
}