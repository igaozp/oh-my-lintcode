//
// Created by igaozp on 2017/12/7.
//

class Solution {
public:
    /*
     * @param n: an integer
     * @return: an integer f(n)
     */
    int fibonacci(int n) {
        return tail_fibonacci(n, 0, 1);
    }

    int tail_fibonacci(int n, int a, int b) {
        if (n == 1) {
            return a;
        }
        return tail_fibonacci(n - 1, b, a + b);
    }
};