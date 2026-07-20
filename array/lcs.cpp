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

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len=1;
        int currele = INT_MIN;
       int count=1;
       if(nums.size()==0){
        return 0;
       }
        for(int i=0; i<nums.size(); i++){
             
                if(nums[i]-1==currele){
                        count++;
                        currele =nums[i];
                      len =max(len,count);
                }
                else if(nums[i]!=currele){
                    currele = nums[i];
                    count=1;
                }
                  
        }
        return len;
    }
};