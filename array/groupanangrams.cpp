"My first approach is the brute force approach.
 I'll compare every string with every other string to check whether they are anagrams."
"I'll start with the first string, which is eat. Then I'll compare it with every remaining string."
Interviewer: "How will you check whether two strings are anagrams?"
"To check whether two strings are anagrams, I'll sort both strings and compare them. 
If both sorted strings are equal, then they are anagrams."
"After comparing eat with all strings,
 I'll move to the next unprocessed string and repeat the same process until all strings are grouped."
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        int n =strs.size();
        unordered_map<string,vector<string>>mp;"I'm creating a hash map where the key will be the sorted string 
        and the value will be a vector containing all original strings that have the same sorted form."
        for(int i=0; i<n; i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            mp[temp].push_back(strs[i]);
        }
        for(auto &it:mp){
            result.push_back(it.second);
        }
        return result;
    }
};
// git add .
// git commit -m "Add Best Time to Buy and Sell Stock"
// git push