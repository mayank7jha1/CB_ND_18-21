// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);

int main() {

  int T;
  cin >> T;
  while (T--)
  {
    string str;
    cin >> str;

    cout << encode(str) << endl;
  }
  return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string s) {
  string ans = "";
  int count = 1;
  //abbbbbcccd
  //a1b5c3;
  ans = ans + s[0];
  //ans=a;
  for (int i = 1; i < s.length(); i++) {
    if (s[i] == s[i - 1]) {
      count++;
    } else {
      ans = ans + to_string(count); //a1b5c3
      ans = ans + s[i]; //a1b5c3d;
      count = 1;
    }
  }
  ans = ans + to_string(count);
  return ans;
}
/* to_string();//integer ko string bana deta hain:

int a=3;
to_string(a);*/

