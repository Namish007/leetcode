class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()  && 
            abs(mp[nums[i]] -i)<=k)//check if ot is present in map or not and abs(i-j)<=k   
            return true;
            else{
                mp[nums[i]] = i;//{number,index}
            }
           
        }
        return false;
    }
};

/* by sliding window

unordered_set<int> mp;

for(int num:nums){
if(st.find(nums[i]!= st.end()){
return true;
}
st.insert(nums[i]);

if(st.size()> k){
st.erase(nums[i - k]);

}
}return false;*/