/* You will be given a vector of strings. You must sort it alphabetically (case-sensitive, and based on the ASCII values of the chars) and then return the first value.

The returned value must be a string, and have "***" between each of its letters.

You should not remove or add elements from/to the array.
*/

#include <vector>
#include <string>
#include <sstream>

using namespace std;

string twoSort(vector<string> s) {
    sort(s.begin(), s.end());
    stringstream ss;
    ss << s[0][0];
    for (int i = 1; i < s[0].size(); i++) {
      ss << "***" << s[0][i];
    }
    return ss.str();
}
