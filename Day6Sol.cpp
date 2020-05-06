class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n= nums.size();
        int count = 1, max_count = -1, temp = nums[0], ele, flag=0; 
        if(n==1) {
            return nums[0];
        }
        for(int i=1;i<n;i++) 
        { 
            if(temp==nums[i])  
            count++; 
            else { 
                count = 1; 
                temp = nums[i]; 
            } 
            if(max_count<count) 
            { 
                max_count = count; 
                ele = nums[i];   
                if(max_count>(n/2)) 
                { 
                    flag = 1; 
                    break; 
                } 
            } 
        }
        if(flag) {
            return ele;
        } else return -1;
    }
};