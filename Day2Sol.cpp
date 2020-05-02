class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int result=0;
        for(int j=0;j<=J.length();j++){
            result += count(S.begin(), S.end(), J[j]);
        }
        return result;
    }
};