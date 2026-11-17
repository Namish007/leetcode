class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int,int> freq;
        for(auto &i: nums)//for(vector<int> &i : nums)
        {
            for(int j:i){
                freq[j]++;
            }
        }
        int lenght=nums.size();
        vector<int> res;

        for(auto &[key, value] : freq){
            if(value ==lenght){
                res.push_back(key);
            }
        }
        return res;
    }
};