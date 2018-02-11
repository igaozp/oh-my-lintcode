#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    /*
     * @param A: sorted integer array A
     * @param B: sorted integer array B
     * @return: A new sorted integer array
     */
    vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
        vector<int> C(A.size() + B.size());
        int a = 0;
        int b = 0;
        int c = 0;
        while (a < A.size() && b < B.size()) {
            if (A[a] < B[b]) {
                C[c] = A[a];
                a++;
                c++;
            } else {
                C[c] = B[b];
                b++;
                c++;
            }
        }

        while (a < A.size()) {
            C[c] = A[a];
            c++;
            a++;
        }
        while (b < B.size()) {
            C[c] = B[b];
            c++;
            b++;
        }
        return C;
    }
};

int main() {
    Solution s;
    vector<int> A = {1, 2, 3};
    vector<int> B = {2, 3, 4};
    vector<int> C = s.mergeSortedArray(A, B);

    for (int i : C) {
        cout << i << "\t";
    }
    return 0;
}