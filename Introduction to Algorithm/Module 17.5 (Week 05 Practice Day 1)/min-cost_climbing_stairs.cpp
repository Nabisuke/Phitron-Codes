class Solution {
public:
    int solution(int n, vector<int>& cost, vector<int>& helper)
    {
        if (n == -1) return 0;
        if (n == 0) return cost[0];
        if (n == 1) return cost[1];
        if (helper[n] != -1)
            return helper[n];

        int onestep = solution(n - 1, cost, helper) + cost[n];
        int twostep = solution(n - 2, cost, helper) + cost[n];
        helper[n] = min(onestep, twostep);
        return helper[n];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> helper(n, -1);
        return min(solution(n - 1, cost, helper), solution(n - 2, cost, helper));
    }
};
