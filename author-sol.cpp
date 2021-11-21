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
	/* 
	
	there will be three (3) cases:
	
	case 1: all characters are the same
	output: 0
	
	case 2: the given string is not a palindrome
	output: n
	
	case 3: the given string is a palindrome
	output: n - 1, because we simply need to remove 1 character to 
	convert it into a non-palindromic string
	
	*/	
	string s;
	cin >> s;
	int n = s.size();
	bool same = true;
	for (int i = 0; i + 1 < n; i++) {
		if (s[i] != s[i + 1]) {
			same = false;
		}
	}
	int ans = 0;
	if (!same) {
		ans = (!Palindrome(s) ? n : n - 1);
	}
	cout << ans << '\n';
	return 0;
}
