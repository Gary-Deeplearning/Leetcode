class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(m);
        for (int i = 0; i < m; i++)
            temp[i] = nums1[i];
        int k = 0, l = 0;
        for (int i = 0; i < m + n; i++) {
            if (k < m && l < n) {
                if (temp[k] < nums2[l]) {
                    nums1[i] = temp[k];
                    k++;
                }
                else {
                    nums1[i] = nums2[l];
                    l++;
                }

            }
            else {
                if (k < m) {
                    nums1[i] = temp[k];
                    k++;
                }
                else {
                    nums1[i] = nums2[l];
                    l++;
                }	
            }
        }
    }
};