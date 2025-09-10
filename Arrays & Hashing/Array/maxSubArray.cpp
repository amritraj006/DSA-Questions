#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int maximumSubArraySum(vector<int>& arr) {
    int maxSum = INT_MIN;
    int currSum = 0;
    for (int i : arr) {
        currSum+=i;
        maxSum = max(currSum, maxSum);

        if (currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {
    vector<int> arr = {2,-1,4,-6,2,5,1};
    int ans = maximumSubArraySum(arr);
    cout << ans;

}

//{2,-1,4,-5,2,5,1}
//First Iteration currSum+=2 currSum=2

//Second Iteration currSum+=-1 currSum=1
//Third Iteration currSum+=4 currSum=5
//Fourth Iteration currSum+=-6 currSum=-1
//Now CurrSum = 0 because currSum < 0

//Fifth Iteration currSum+=2 currSum=2
//Sixth Iteration currSum+=5 currSum=7
//Seventh Iteration currSum+=1 currSum=8
