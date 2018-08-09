class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> map;
        for (size_t i = 0; i < strs.size(); ++i) {
            string str = strs[i];
            sort(str.begin(), str.end());
            map[str].push_back(strs[i]);
        }
        // 遍历unorder_map, element.fisrt=key, element.second=value
        for (auto element : map)
            res.push_back(element.second);

        return res;
    }
};