class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        int n = a.size();
        int i = 0, j = n - 1;
        while (i < j) {
            if (a[i] % 2 == 1 and a[j] % 2 == 0) {
                swap(a[i], a[j]);
                i++, j--;
            } else if (a[i] % 2 == 0) {
                i++;
            } else if (a[j] % 2 == 1) {
                j--;
            }
        }
        return a;
    }
};