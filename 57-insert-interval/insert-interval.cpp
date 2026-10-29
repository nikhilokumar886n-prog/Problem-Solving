class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& v, vector<int>& k) {
        int n = v.size();
        vector<vector<int>> ans;

        if (n == 0) {
            ans.push_back(k);
            return ans;
        }

        int p = -1, q = -1;

        for (int i = 0; i < n; i++) {
            if (k[0] <= v[i][1]) {
                p = i;
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if (v[i][0] <= k[1]) {
                q = i;
            }
        }

        // Case 1: Completely before all intervals
        if (q == -1) {
            ans.push_back(k);

            for (int i = 0; i < n; i++) {
                ans.push_back(v[i]);
            }
        }

        // Case 2: Completely after all intervals
        else if (p == -1) {
            for (int i = 0; i < n; i++) {
                ans.push_back(v[i]);
            }

            ans.push_back(k);
        }

        // Case 3: No overlap, insert between intervals
        else if (p > q) {
            for (int i = 0; i < p; i++) {
                ans.push_back(v[i]);
            }

            ans.push_back(k);

            for (int i = p; i < n; i++) {
                ans.push_back(v[i]);
            }
        }

        // Case 4: Overlap starts from first interval
        else if (p == 0) {
            ans.push_back({min(k[0], v[p][0]), max(k[1], v[q][1])});

            for (int i = q + 1; i < n; i++) {
                ans.push_back(v[i]);
            }
        }

        // Case 5: Overlap in middle or extends to last interval
        else {
            for (int i = 0; i < p; i++) {
                ans.push_back(v[i]);
            }

            ans.push_back({min(k[0], v[p][0]), max(k[1], v[q][1])});

            for (int i = q + 1; i < n; i++) {
                ans.push_back(v[i]);
            }
        }

        return ans;
    }
};