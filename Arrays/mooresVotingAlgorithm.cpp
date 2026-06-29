#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int en;
        for(int i = 0; i<nums.size(); i++){
            if(cnt == 0){
                cnt = 1;
                en = nums[i];
            }
            else if(nums[i] == en){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cont =0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == en){
                    cont++;
                }
            }
            if(cont > (nums.size() / 2)){
                return en;
            }
        return -1;
    }
};

//mojority element question