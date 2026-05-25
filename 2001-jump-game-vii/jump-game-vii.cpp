class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.length();

        vector<bool> dp(n, false);
        dp[0] = true;

        int reachableCount = 0;

        for (int i = 1; i < n; i++){
            if (i - minJump >= 0 && dp[i - minJump]) {
                reachableCount++;
            }
            if (i - maxJump - 1 >= 0 && dp[i - maxJump - 1]) {
                reachableCount--;
            }

            dp[i] = (reachableCount > 0 && s[i] == '0');
        }

        return dp[n - 1];
    }
};