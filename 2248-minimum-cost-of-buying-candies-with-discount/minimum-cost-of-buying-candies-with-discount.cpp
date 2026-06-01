class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(begin(cost), end(cost),greater<int>());
        int n= cost.size();
        int count=0;
        for(int i=0; i<n; i++){
            if(i%3!=2)
                count +=cost[i];
        }
        return count;
    }
};