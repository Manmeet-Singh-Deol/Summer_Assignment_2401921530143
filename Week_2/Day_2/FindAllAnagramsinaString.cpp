class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (p.size() > s.size()) return result;

        vector<int> freqP(26, 0), freqS(26, 0);
        for (char c : p) {
            freqP[c - 'a']++;
        }
        for (int i = 0; i < p.size(); i++) {
            freqS[s[i] - 'a']++;
        }

        if (freqS == freqP) result.push_back(0);
        for (int i = p.size(); i < s.size(); i++) {
            freqS[s[i] - 'a']++;                 
            freqS[s[i - p.size()] - 'a']--;    

            if (freqS == freqP) result.push_back(i - p.size() + 1);
        }
        return result;
    }
};