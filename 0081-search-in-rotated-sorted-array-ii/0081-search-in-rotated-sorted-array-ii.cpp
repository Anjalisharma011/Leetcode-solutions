class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[mid]>nums[right]){
                if(target>=nums[left] && target<nums[mid]){
                    right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
        else if(nums[mid]<nums[right]){
                    if(target>nums[mid] && target<=nums[right]){
                        left=mid+1;
                    }  else{right=mid-1;}}else{right--;}}return false;}};


/*. class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0, end = static_cast<int>(nums.size()) - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                return true;
            }
            if (nums[mid] > nums[end]) {
              
                if (target >= nums[start] && target < nums[mid]) { */
                    