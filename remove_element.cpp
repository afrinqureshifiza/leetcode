class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       int i=0;
       int k=0;
       while(i<nums.size()){
        if(nums[i]==val){
          i++;
        }
        else{
         swap(nums[i], nums[k]);
         i++;
         k++;    
        }
        
       }
       return k;
    }
};