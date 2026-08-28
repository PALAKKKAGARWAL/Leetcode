class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> arr;
        int rows=intervals.size();
        
        sort(intervals.begin(),intervals.end());
        
        for(int i=0;i<rows;i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            int j=i+1;
            while(j<rows&& end>=intervals[j][0]){
              end=max(end,intervals[j][1]);
              j++;
            }
            arr.push_back({start,end});
            i=j-1;
        }
        
            return arr;
        }
    
};