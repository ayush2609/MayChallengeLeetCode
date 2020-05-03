class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();  
        int m = magazine.size();
        int freq[26],freq1[26]; 
        memset(freq, 0, sizeof(freq)); 
        memset(freq1, 0, sizeof(freq1)); 
        for (int i = 0; i < n; i++) {
            freq[ransomNote[i] - 'a']++;
        }
        for (int i = 0; i < m; i++) {
            freq1[magazine[i] - 'a']++;
        }
        int flag = 0;
        for(int i=0;i<26;i++) {
            if(freq[i] > freq1[i]) {
                flag = 1;
                break;
            }
        };
    if(flag == 0)
        return true;
    else
        return false;
    }
};