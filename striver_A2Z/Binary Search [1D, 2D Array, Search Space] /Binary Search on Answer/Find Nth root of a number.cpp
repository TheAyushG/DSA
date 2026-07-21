class Solution {
public:
    double multiply(double num, int n) {
        double ans = 1.0;
        for (int i = 1; i <= n; i++) {
            ans = ans * num;
        }
        return ans;
    }

    int nthRoot(int n, int m) {
        // Edge case: 0th root of anything undefined here, but m = 0 -> root is 0
        if (m == 0) return 0;

        double low = 1, high = m;
        double eps = 1e-6;

        while ((high - low) > eps) {
            double mid = (low + high) / 2.0;

            if (multiply(mid, n) < m) {
                low = mid;
            } else {
                high = mid;
            }
        }

        int ans = round(low);

        if (multiply(ans, n) == m) {
            return ans;
        }
        return -1;
    }
};
