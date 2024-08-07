#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void printDuplicate(string s) {
  sort(s.begin(), s.end());
  int count = 0;
  for (int i = 0; i < s.length(); i++) {
    count++;
    if (s[i] != s[i + 1] || i == s.length()) {
      if (count > 1)
        cout << s[i] << ", count = " << count << endl;
      count = 0;
    }
  }
}

int main() {
  string s = "geeksforgeeks";
  printDuplicate(s);
  return 0;
}
