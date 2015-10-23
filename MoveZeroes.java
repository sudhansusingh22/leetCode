public class Solution {
    public void moveZeroes(int [] nums){
		if(nums.length>1){
		for (int i = 0; i < nums.length; i++) {
			int j = nums[i];
			if(j==0){
				for (int j2 = i; j2 < nums.length-1; j2++) {
					nums[j2] = nums[j2+1];
				}
				nums[nums.length-1]=0;
			}
		}
		
		boolean flag = true;
		for (int i = 0; i < nums.length-1; i++) {
			if(nums[i]==0 && nums[i+1]!=0) {
				flag = false;
				break;
			}
		}
		if(flag ==false)moveZeroes(nums);;

	}
 	}
 	public void moveZeroesNew(int[] nums){
		int count=0;
		if(nums.length>1){
			for (int i = 0; i < nums.length; i++) {
				if(nums[i]!=0){
					nums[count]=nums[i];
					if(i>count)
						nums[i]=0;
					count++;
				}
				
			}
		}
	}
}
