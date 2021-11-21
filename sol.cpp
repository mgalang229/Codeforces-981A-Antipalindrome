#include <bits/stdc++.h>

using namespace std;

bool Palindrome(string s) {
	for (int i = 0; i < (int) s.size() / 2; i++) {
		if (s[i] != s[(int) s.size() - 1 - i]) {
			return false;
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.size();
	int best = 0;
	// form different substrings and find 
	// the substring with the maximum size
	for (int i = 0; i < n; i++) {
		string temp = string(1, s[i]);
		for (int j = i + 1; j < n; j++) {
			temp += s[j];
			if (!Palindrome(temp)) {
				best = max(best, (int) temp.size());
			}
		}
	}
	cout << best << '\n';
	return 0;
}
