#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> productArray(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n,1);

    int prefix = 1,  suffix = 1;
    for (int i=0; i<n; i++) {
        ans[i] = prefix;
        prefix *= arr[i];
    }

    for (int i=n-1; i>=0; i--) {
        ans[i] *= suffix;
        suffix *= arr[i];
    }

    return ans;
}

int main() {
    vector<int> arr = {2,1,3,4,5};
    vector<int> result = productArray(arr);
    for (int i : result) {
        cout << i << " ";
    }

}