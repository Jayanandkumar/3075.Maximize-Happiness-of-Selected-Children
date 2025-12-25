#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        
        long long total_happiness = 0;
        
        for (int i = 0; i < k; ++i) {
            int current_val = happiness[i] - i;
            if (current_val > 0) {
                total_happiness += current_val;
            } else {
                break;
            }
        }
        
        return total_happiness;
    }
};