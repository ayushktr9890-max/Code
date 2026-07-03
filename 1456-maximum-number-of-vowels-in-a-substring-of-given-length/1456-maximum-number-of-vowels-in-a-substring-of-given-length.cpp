class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int ans=0;

        auto isVowel =[](char ch){
            return ch=='a'|| ch=='i'||ch=='e'||ch=='o'||ch=='u';
        };
        
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                count++;
            }
            ans=count;

        }
        for(int i=k;i<s.size();i++){
            if(isVowel(s[i]))count++;
            if(isVowel(s[i-k]))count--;
            ans=max(ans,count);

        }
        return ans;
    }
};