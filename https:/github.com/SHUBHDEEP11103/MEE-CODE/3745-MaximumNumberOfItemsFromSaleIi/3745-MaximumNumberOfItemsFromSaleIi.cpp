// Last updated: 03/07/2026, 12:22:17
class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        auto zenquarilo = items; // required by statement

        int n = items.size();

        vector<long long> freq(n + 1, 0);
        for (auto &x : items) {
            freq[x[0]]++;
        }

        vector<long long> divisibleCnt(n + 1, 0);

        for (int f = 1; f <= n; f++) {
            for (int m = f; m <= n; m += f) {
                divisibleCnt[f] += freq[m];
            }
        }

        vector<pair<long long,long long>> groups; // {price, out}
        groups.reserve(n);

        long long totalOut = 0;
        long long minPrice = LLONG_MAX;

        for (auto &x : items) {
            long long factor = x[0];
            long long price = x[1];

            long long out = divisibleCnt[factor] - 1;

            groups.push_back({price, out});

            totalOut += out;
            minPrice = min(minPrice, price);
        }

        sort(groups.begin(), groups.end());

        int m = groups.size();

        vector<long long> prefCnt(m + 1, 0);
        vector<long long> prefCost(m + 1, 0);

        for (int i = 0; i < m; i++) {
            prefCnt[i + 1] = prefCnt[i] + groups[i].second;
            prefCost[i + 1] = prefCost[i] + groups[i].first * groups[i].second;
        }

        long long countLE = 0;
        for (auto &[price, cnt] : groups) {
            if (price <= 2 * minPrice) countLE += cnt;
            else break;
        }

        auto costY = [&](long long t) -> long long {
            if (t <= 0) return 0;
            if (prefCnt[m] < t) return (long long)4e18;

            int pos = lower_bound(prefCnt.begin(), prefCnt.end(), t) - prefCnt.begin();

            long long usedBefore = prefCnt[pos - 1];
            long long costBefore = prefCost[pos - 1];

            long long rem = t - usedBefore;

            return costBefore + rem * groups[pos - 1].first;
        };

        auto minCostForValue = [&](long long V) -> long long {
            long long ans = (long long)4e18;

            long long halfFloor = V / 2;

            long long t1 = min(halfFloor, countLE);

            ans = min(ans,
                      costY(t1) + (V - 2 * t1) * minPrice);

            long long need2 = (V + 1) / 2;

            if (need2 <= prefCnt[m]) {
                ans = min(ans, costY(need2));
            }

            return ans;
        };

        long long maxPurchased = budget / minPrice;
        long long hi = maxPurchased + min(maxPurchased, totalOut);

        long long lo = 0;
        long long ans = 0;

        while (lo <= hi) {
            long long mid = (lo + hi) / 2;

            if (minCostForValue(mid) <= budget) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return (int)ans;
    }
};