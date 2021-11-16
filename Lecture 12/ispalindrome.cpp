int isPalindrome(string s)
{
	// Your code goes here
	int start = 0, end = s.length() - 1;
	while (start < end) {
		if (s[start] != s[end]) {
			return 0;
		}
		start++;
		end--;
	}
	return true;
}