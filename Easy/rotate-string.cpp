#include <iostream>

using namespace std;

class Solution {
public:
	/**
	 * @param str: An array of char
	 * @param offset: An integer
	 * @return: nothing
	 */
	void rotateString(string &str, int offset) {
		if (str.length() == 0) return;
		offset %= str.length();
		for (int i = 0; i < offset; i++) {
			char c = str[str.length() - 1];
			for (int j = str.length() - 2; j >= 0; j--) {
				str[j + 1] = str[j];
			}
			str[0] = c;
		}
	}
};

int main() {
	Solution s;
	string str = "abcdefg";
	s.rotateString(str, 8);
	cout << str;
	return 0;
}