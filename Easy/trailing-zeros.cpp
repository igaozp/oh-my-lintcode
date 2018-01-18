//
// Created by igaozp on 2018/1/16.
//
#include <iostream>

class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
        long long count = 0;
        long long x = 5;
        while (n / x >= 1) {
            count += n / x;
            x = x * 5;
        }

        return count;
    }
};

int main() {
    Solution s;
    std::cout << s.trailingZeros(105);
}