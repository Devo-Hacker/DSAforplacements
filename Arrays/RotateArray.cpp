#include<iostream>
#include<vector>
using namespace std;

//left rotate array by one place
vector<int> rotateArray(vector<int> &arr, int n){
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}

//left rotate array by k places
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n=nums.size();
         k%=n;
         reverse(nums.begin(), nums.begin()+k);
         reverse(nums.begin()+k,nums.end());
         reverse(nums.begin(),nums.end());
    }
};

//right rotate array by k places
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n=nums.size();
         k%=n;
         reverse(nums.begin(), nums.end());
         reverse(nums.begin(),nums.begin()+k);
         reverse(nums.begin()+k,nums.end());
    }
};