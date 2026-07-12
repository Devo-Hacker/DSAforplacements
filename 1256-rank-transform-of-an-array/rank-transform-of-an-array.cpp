class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> newArr = arr;
        sort(newArr.begin(), newArr.end());
        unordered_map<int, int> rank;
        int currentRank = 1;

        for (int num : newArr){
            if(!rank.count(num)){
                rank[num] = currentRank++;
            }
        }
        for( int &num: arr){
            num = rank[num];
        }
        return arr;
    }
};