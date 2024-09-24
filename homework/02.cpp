#include <iostream>
#include <vector>

using namespace std;

void myprint(const vector<int>& perm, int x) {

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

void mysort(vector<int>& nums, int start) {
    if (start == nums.size()) {
        myprint(nums,nums.size());
        return;
    }

    for (int i = start; i < nums.size(); ++i) {
        swap(nums[start], nums[i]);
        mysort(nums, start + 1);
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
        mysort(nums, 0);
    }
    return 0;
}
