
#include <vector>

#include <algorithm>

#include <cstdint>

  
//@jordinario
class Solution {

public:

    int uniqueXorTriplets(std::vector<int>& nums) {

        int maxv = 0;

        for (int v : nums) {

            maxv |= v;

        }

        if (maxv == 0) return 1;

  

        int n = 1;

        int shift = 0;

        while (n <= maxv) {

            n *= 2;

            shift++;

        }

  

        std::vector<int64_t> f(n, 0);

        for (int v : nums) {

            f[v] = 1;

        }

  

        auto fwht = [&]() {

            for (int k = 1; k * 2 <= n; k *= 2) {

                for (int i = 0; i < n; i += k * 2) {

                    for (int j = 0; j < k; ++j) {

                        int64_t u = f[i + j];

                        int64_t v = f[i + j + k];

                        f[i + j] = u + v;

                        f[i + j + k] = u - v;

                    }

                }

            }

        };

  

        fwht();

  

        for (int i = 0; i < n; ++i) {

            f[i] = f[i] * f[i] * f[i];

        }

  

        fwht();

  

        int count = 0;

        for (int i = 0; i < n; ++i) {

            if ((f[i] >> shift) > 0) {

                count++;

            }

        }

  

        return count;

    }

};