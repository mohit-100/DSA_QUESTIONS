#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> result;
    stack<int> numStack;

    for (int i = 0; i < nums.size(); i++) {
        while (!numStack.empty() && nums[numStack.top()] + nums[i] != target) {
            numStack.pop();
        }

        if (!numStack.empty()) {
            result.push_back(numStack.top());
            result.push_back(i);
            break;
        }

        numStack.push(i);
    }

    return result;
}

int main() {
    vector<int> arr = {3, 2, 4};
    int target = 6;
    vector<int> ans = twoSum(arr, target);
    
    if (ans.size() == 2) {
        cout << "Indices: " << ans[0] << ", " << ans[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
    
    return 0;
}
