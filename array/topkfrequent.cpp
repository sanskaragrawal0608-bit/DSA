class Solution {
public:
typedef pair<int,int>P;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int &num:nums){
            mp[num]++;
        }
        priority_queue<P,vector<P>,greater<P>>pq;
        for(auto &it:mp){
            int x =it.first;
            int y =it.second;
            pq.push({y,x});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>result;
        while(!pq.empty()){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;

    }
};
