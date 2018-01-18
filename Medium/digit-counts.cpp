//
// Created by igaozp on 2018/1/18.
//
#include <iostream>

class Solution {
public:
    /*
     * @param : An integer
     * @param : An integer
     * @return: An integer denote the count of digit k in 1..n
     */
    int digitCounts(int k, int n) {
        int count = 0;
        std::string s;

        for (int i = 0; i <= n; i++) {
            s = std::to_string(i);
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == std::to_string(k)[0]) {
                    count++;
                }
            }
        }

        return count;
    }
};

int main() {
    Solution s;
    std::cout << s.digitCounts(1, 12);
}