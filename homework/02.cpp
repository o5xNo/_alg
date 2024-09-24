#include <iostream>
#include <vector>

using namespace std;

void printPermutation(const vector<int>& perm, int x) {

    int a=1;
    cout<<"{";
    for (int i : perm) {
        cout << i;
        if (a!=x) cout <<",";
        a++;
    }
    cout<<"}";
    cout << endl;
}

void permute(vector<int>& nums, int start) {
    if (start == nums.size()) {
        printPermutation(nums,nums.size());
        return;
    }

    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        permute(nums, start + 1);
        swap(nums[start], nums[i]);
    }
}

int main() {
    int x;
    cin >>x;

    for(int i=0;i<x;i++)
    {
        vector<int> nums(i+1);
        for(int j=0;j<i;j++)
        {
            nums[j]=j+1;
        }
        permute(nums, 0);
    }
    return 0;
}
