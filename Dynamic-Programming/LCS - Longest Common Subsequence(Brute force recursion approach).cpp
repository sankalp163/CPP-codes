#include <iostream>
using namespace std;

int lcs(string s, string t) {
		// Base case
	if(s.size() == 0 || t.size() == 0) {
		return 0;
	}

		// Recursive calls
	if(s[0] == t[0]) {
		return 1 + lcs(s.substr(1), t.substr(1));
	}
	else {

		int a = lcs(s.substr(1), t);
		int b = lcs(s, t.substr(1));
		int c = lcs(s.substr(1), t.substr(1));  //This call can be avoided aince every call made in this case 
												// will already be taken care of in other calls hence this call
												//can be avoided. But still complexity will remain exponential.
		return max(a, max(b, c));
	}
}

