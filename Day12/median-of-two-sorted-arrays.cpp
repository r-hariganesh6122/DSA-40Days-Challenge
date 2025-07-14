// 🔒 LeetCode Problem: 4. Median of Two Sorted Arrays
// 📚 Topic: Binary Search on Partition
// 🔧 Core Idea:
//    - Partition both arrays into left and right halves such that:
//      max(left1, left2) <= min(right1, right2)
//    - Then median is max(left1, left2) if total size is odd
//      else (max(left1, left2) + min(right1, right2)) / 2

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Ensure nums1 is the smaller array so we do binary search on it
        // This minimizes time complexity to O(log(min(n1, n2)))
        if(nums1.size() > nums2.size()) 
            return findMedianSortedArrays(nums2, nums1);

        int n1 = nums1.size(), n2 = nums2.size();
        int l1 = 0, r1 = n1; // Binary search range on nums1
        int total = n1 + n2; // Total number of elements

        // Binary search on nums1 to find the correct partition
        while(l1 <= r1){
            int m1 = (l1 + r1) / 2;          // Partition index in nums1
            int len2 = (total + 1)/2 - m1;   // Corresponding partition index in nums2
                                             // (total+1)/2 ensures left part has more elements if total is odd

            // Edge case handling using INT_MIN and INT_MAX when partition hits array boundary
            int lp1 = (m1 == 0) ? INT_MIN : nums1[m1 - 1];  // Last element of left half in nums1
            int rp1 = (m1 == n1) ? INT_MAX : nums1[m1];     // First element of right half in nums1

            int lp2 = (len2 == 0) ? INT_MIN : nums2[len2 - 1]; // Last element of left half in nums2
            int rp2 = (len2 == n2) ? INT_MAX : nums2[len2];    // First element of right half in nums2

            // ✅ If valid partition: max of left halves ≤ min of right halves
            if(lp1 <= rp2 && lp2 <= rp1){
                // If total is odd, return the maximum from the left halves
                if(total % 2 != 0) 
                    return max(lp1, lp2);

                // If total is even, return the average of middle two elements
                return (max(lp1, lp2) + min(rp1, rp2)) / 2.0;
            }
            // ❌ Invalid partition: too many elements taken from nums1
            else if(lp1 > rp2){
                r1 = m1 - 1; // Move search space to the left
            }
            // ❌ Invalid partition: not enough elements taken from nums1
            else{
                l1 = m1 + 1; // Move search space to the right
            }
        }

        return -1; // Should never reach here if inputs are valid
    }
};
