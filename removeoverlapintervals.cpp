bool compare(vector<int>&a,vector<int>&b)
{
    if(a[0]==b[0])
    {
        return a[1]>b[1];
    }
    return a[0]<b[0];
}
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),compare);
        int count=1,start=intervals[0][0],end=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(start<=intervals[i][0]&&end>=intervals[i][1])
            {
                continue;
            }
            else{
                start=min(start,intervals[i][0]);
                end=max(end,intervals[i][1]);
                count++;
            }
        }
        return count;
    }
};
