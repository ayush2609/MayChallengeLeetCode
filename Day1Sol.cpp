// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    long long int firstBadVersion(int n) {
        long long int m=1;
        long long int answer = check(m,n);
        return answer;
    } 
    int check(long long int m ,long long int n){
        if(m==n)
            return m;
        if(isBadVersion((m+n)/2)) 
            return check(1,(m+n)/2);
            else 
                return check((m+n)/2+1,n);
    }
};