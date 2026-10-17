class Solution {
public:
    int digit_sum(int num) {
        int sum = 0;

        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }

        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> summ;

        for (int i = 0; i < n; i++) {
            summ.push_back({nums[i], i});
        }

        sort(summ.begin(), summ.end(), [&](auto a, auto b) {
            int sumA = digit_sum(a.first);
            int sumB = digit_sum(b.first);

            if (sumA != sumB) {
                return sumA < sumB;
            }

            return a.first < b.first;
        });

        int swaps = 0;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            if (visited[i] || summ[i].second == i) {
                continue;
            }

            int cycle = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = summ[j].second;
                cycle++;
            }

            if (cycle > 0) {
                swaps += cycle - 1;
            }
        }

        return swaps;
    }
};