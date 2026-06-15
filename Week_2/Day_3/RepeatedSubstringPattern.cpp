class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        // Remove first and last character to avoid trivial match
        string trimmed = doubled.substr(1, doubled.size() - 2);
        return trimmed.find(s) != string::npos;
    }
};