class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> result;
        string cur = "";
        int num = 0;

        for (char c : s) {
            if (isdigit(c)) {
                num = num * 10 + (c - '0'); // build multi-digit number
            } else if (c == '[') {
                counts.push(num);
                result.push(cur);
                num = 0;
                cur = "";
            } else if (c == ']') {
                int repeat = counts.top(); counts.pop();
                string prev = result.top(); result.pop();
                string temp = "";
                for (int i = 0; i < repeat; i++) temp += cur;
                cur = prev + temp;
            } else {
                cur += c; // normal character
            }
        }
        return cur;
    }
};