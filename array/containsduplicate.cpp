class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n =nums.size();
        map<int,int>mp;
        mp[nums[0]] = 0;
        for(int i=1; i<n; i++){
                if(mp.find(nums[i])!=mp.end()){
                        if(abs(mp[nums[i]]-i)<=k){
                            return true;
                        }
                        else{
                            mp[nums[i]]=i;
                        }
                }
                else{
                    mp[nums[i]] = i;
                }
        }
        return false;

    }
};