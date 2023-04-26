class Solution {
    public int arraySign(int[] nums) {
        
        int prod=1,mcount=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0){
                return 0;
            }
            if(nums[i]<0){
                mcount++;
            }
        }
        if(mcount%2==0){
            return 1;
        }
        return -1;
    }
}
