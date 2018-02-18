#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	/**
	 * @param n: An integer
	 * @return: A list of strings.
	 */
	vector<string> fizzBuzz(int n) {
		vector<string> result(n);
		for (int i = 1; i <= n; i++) {
			if (i % 3 == 0 && i % 5 == 0) {
				result[i - 1] = "fizz buzz";
			} else if (i % 3 == 0) {
				result[i - 1] = "fizz";
			} else if (i % 5 == 0) {
				result[i - 1] = "buzz";
			} else {
				result[i - 1] = to_string(i);
			}
		}
		return result;
	}
};

int main() {
	Solution s;
	vector<string> vec = s.fizzBuzz(15);
	for (auto i = 0; i < vec.size(); i++) {
		cout << vec[i] << "\n";
	}
	return 0;
}