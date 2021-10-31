class Solution {
public:
    int mySqrt(int x) {
        long long s = 1, e = x;
        long long ans = 0;
        while (s <= e) {
            long long mid = (s + e) / 2;
            if ((mid * mid) <= x) {
                s = mid + 1;
                ans = mid;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }
};