class Solution {
public:
bool ls(vector<int>&nums,int x){
for(int i=0; i<nums.size(); i++){
if(nums[i]==x){
    return true;
}
}
return false;
}
    int longestConsecutive(vector<int>& nums) {
        int n =nums.size();
        if(n==0){
            return 0;
        }
        int len =1;
        for(int i=0; i<n; i++){
            int count=1;
            int x =nums[i];
            while(ls(nums,x+1)==true){
                x =x+1;
                count = count+1;
                
            }
            len = max(len,count);
        }
        return len;
    }
};