#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
    vector<int> sortedSquare(vector<int>& arr) {
        int n = arr.size();
        int left = 0, right = n-1, index = n-1;
        vector<int> result(n);

        while (left <= right) {

            if (abs(arr[left]) > abs(arr[right])) {
                result[index] = arr[left] * arr[left];
                left++;
            }
            else {
                result[index] = arr[right] * arr[right];
                right--;
            }
            index--;
        }

        return result;
    }
};

int main() {
    Solution solution = Solution();
    vector<int> arr = {-4,-1,2,3,4,7};
    vector<int> result = solution.sortedSquare(arr);

    for (int i : result) {
        cout << i << " ";
    }


}