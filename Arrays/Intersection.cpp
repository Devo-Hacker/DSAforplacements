#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//intersection of unsorted array
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i= 0;
        int j = 0;
        vector<int> intersectionArray;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] < nums2[j]){
                i++;
            
            }
            else if(nums2[j] < nums1[i]){
                j++;
                
            }
            else{
                if (intersectionArray.empty() || intersectionArray.back() != nums1[i]) {
                     intersectionArray.push_back(nums1[i]);
                }       
                i++;
                j++;
                
            }
        }
        return intersectionArray;
    }
};

//for sorted array you just need to remove the 
//sort(nums1.begin(), nums1.end());
//         sort(nums2.begin(), nums2.end());
// part
// and for non unique elements you need to remove 
// if (intersectionArray.empty() || intersectionArray.back() != nums1[i]) {
//                      intersectionArray.push_back(nums1[i]);
//                 }  
// part and just need to write
// intersectionArray.push_back(nums1[i]);
// inside else condition