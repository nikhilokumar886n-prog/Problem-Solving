class Solution {
public:
    int uniquePaths(int m, int n) {
        long long ans = 1;
        int a = m + n - 2;
        int b = min(m - 1, n - 1);

        for(int i = 1; i <= b; i++) {
            ans = 1LL*ans * (a - i + 1) / i;
        }
        return ans;
    }
};
