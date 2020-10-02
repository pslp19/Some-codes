class Solution {
public:
    void solve(vector<vector<int>>&subs,vector<int>v,vector<int>&candidates,int target,int ind)
    {
        if(target==0){
            subs.push_back(v);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=ind;i<candidates.size();i++)
        {
            if(candidates[i]<=target){
                v.push_back(candidates[i]);
                solve(subs,v,candidates,target-candidates[i],i);
                v.pop_back();
            }
            else{
                break;
            }
        }
        return;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>subs;
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        solve(subs,v,candidates,target,0);
        return subs;
    }
};
