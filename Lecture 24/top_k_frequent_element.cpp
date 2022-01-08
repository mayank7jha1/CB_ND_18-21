#define pi pair<int,int>
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        vector<int>ans;
        for (auto x : nums) {
            m[x]++;
        }
        priority_queue<pi, vector<pi>, greater<pi>>pq;

        //What is map uske ander k hi element ho?
        if (map.size() == k) {
            for (auto x : m) {
                ans.push_back(x.first);
            }
            return ans;
        }

        for (auto x : m) {
            //pi t = make_pair(x.second, x.first);
            pq.push({x.second, x.first});
            if (pq.size() > k) {
                pq.pop();
            }
        }

        while (pq.size() > 0) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};




