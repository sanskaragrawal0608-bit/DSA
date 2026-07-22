FIRST APP:class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            return true;
        }
        return false;
    }

};
SECOND APP:class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>result(26,0);
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0; i<s.length(); i++){
            char ch =s[i];
           result[ch-'a']++;
        }
            for(int i=0;i<t.length(); i++){
                char ch =t[i];
              result[ch-'a']--;
              if(result[ch-'a']<0){
                return false;
              }
              
               
            }
            return true;
    }
};