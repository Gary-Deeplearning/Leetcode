class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        unordered_map<char, int> map;
        int maxLen = 0;
        int curLen = 0;
        int index = 0;
        for (size_t i = 0; i < size; ++i) {
            // 判断这个字符是否已经存在map里面
            if (map.find(s[i]) == map.end()) {  // 不存在
                curLen++;
                map[s[i]] = i;
            }
            else if (map.find(s[i]) != map.end() && map[s[i]] >= index) {
                // 如果已经存在，则说明目前遍历到的这个字符是重复的，则获取这个字符的开始的下标
                // 同时map[s[i]]还要>=index，表示是在当前计算的字符串里面
                index = map[s[i]] + 1;  // 从index+1开始重新计算长度
                maxLen = curLen > maxLen ? curLen : maxLen;
                curLen = i - map[s[i]];  // 目前的长度要修改
                map[s[i]] = i;  // 修改当前重复字符新的value

            }
            else {
                // 这一步出现了index之前的重复字符，直接覆盖成新的下标
                curLen++;
                map[s[i]] = i;
		    }
        }
        // 鉴于会有一直不重复的情况，所以还要在判断一次
        maxLen = curLen > maxLen ? curLen : maxLen;
        return maxLen;
    }
};