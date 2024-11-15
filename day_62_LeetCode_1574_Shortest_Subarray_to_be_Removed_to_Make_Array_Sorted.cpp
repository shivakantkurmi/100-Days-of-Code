/* Approach
Step 1: Find the first element from the left that is out of order
Intuition: We want to find the first element that breaks the increasing order from the left. This will help us identify the start of the unsorted subarray.

Step 2: Check if the array is already sorted
Intuition: If the entire array is already sorted, we can return 0 as no subarray needs to be removed.

Step 3: Find the first element from the right that is out of order
Intuition: We want to find the first element that breaks the increasing order from the right. This will help us identify the end of the unsorted subarray.

Step 4: Find the minimum and maximum values in the unsorted subarray
Intuition: We need to know the range of values in the unsorted subarray to determine which elements need to be included.

Step 5: Return the length of the shortest subarray that needs to be removed
Intuition: The length of the shortest subarray is the difference between the length of the entire array and the length of the longest subarray that can be kept */

class Solution {  
public:  
    int findLengthOfShortestSubarray(std::vector<int>& arr) {  
        int n = arr.size();  
        int left = 0;  
        int right = n - 1;  
        while (left + 1 < n && arr[left] <= arr[left + 1]) {  
            left++;  
        }  
        if (left == n - 1) {  
            return 0;  
        }   
        while (right - 1 >= left && arr[right] >= arr[right - 1]) {  
            right--;  
        }  
        int ans = max(n - right, left + 1);  
        int i = 0, j = right;  
        while (i <= left && j < n) {  
            if (arr[i] <= arr[j]) {  
                ans =max(ans, i + 1 + (n - j));  
                i++;  
            } else {  
                j++;  
            }  
        }  
        return n - ans;  
    }  
};
