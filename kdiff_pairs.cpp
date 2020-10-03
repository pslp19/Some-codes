class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int cnt=0;
        int len=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=len-1;i>=0;i--)
        {
            if(i+1<len&&nums[i]==nums[i+1]){
                continue;
            }
            else{
                for(int j=i-1;j>=0;j--)
                {
                    if(j<i-1&&nums[j]==nums[j+1]){
                        continue;
                    }
                    else{
                        if((nums[i]-nums[j])>k){
                            break;
                        }
                        else{
                            if((nums[i]-nums[j])==k){
                                cnt++;
                            }
                        }
                    }
                }
            }
        }
        return cnt;
    }
};

//O(n)-T.C
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>cnt;
        for(int x:nums)
        {
            cnt[x]+=1;
        }
        int ans=0;
        for(auto [b,_]:cnt)
        {
            if((k>0&&cnt.count(b-k))||(k==0&&cnt[b]>=2)){
                ans+=1;
            }
        }
        return ans;
    }
};
