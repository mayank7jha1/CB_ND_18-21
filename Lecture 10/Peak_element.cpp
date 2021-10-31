class Solution {
public:
    int findPeakElement(vector<int>& a) {
        //  int n=a.size();
        int ans = -1;
        int s = 0, e = n - 1;
        while (s <= e) {
            int mid = (s + e) / 2;
            if (mid + 1 == n or a[mid] >= a[mid + 1]) {
                e = mid - 1;
                ans = mid;
            } else {
                s = mid + 1;
            }
        }
        return ans;


        int n = a.size();
        int ans = 0;
        int s = 0, e = n - 1;
        while (s <= e) {
            int mid = (s + e) / 2;
            if ( mid + 1 < n and a[mid] < a[mid + 1]) {
                s = mid + 1;
            } else if (mid + 1 == n or a[mid] >= a[mid + 1]) {
                e = mid - 1;
                ans = mid;
            }
        }
        return ans;

    }
};