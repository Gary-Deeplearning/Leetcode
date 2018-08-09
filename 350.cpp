class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        if (nums1.size() == 0 || nums1.size() == 0)
            return result;

        map<int, int> num_map;

        for (int i = 0; i < nums1.size(); i++) {
            int num = nums1[i];
            if (num_map[num] == 0)
                num_map[num] = 1;
            else if (num_map[num] > 0)
                num_map[num] += 1;
        }
        int k = 0;
        for (int i = 0; i < nums2.size(); i++) {
            int num = nums2[i];
            if (num_map[num] > 0) {
                result.insert(result.begin()+k, num);
                k++;
                num_map[num]--;
            }
        }

        return result;
    }
};