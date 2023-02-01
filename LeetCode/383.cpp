class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ransom[26]={0};
        if(ransomNote.size()>magazine.size()) return false;

        for(int i=0;i<ransomNote.length();i++){
            ransom[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++){
            ransom[magazine[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(ransom[i]>0) return false;
        }
        return true;
    }
};
