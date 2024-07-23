void swap(int* a,int* b){
  int temp=*a;*a=*b;*b=temp;
}
void QuickSort(int* nums,int left,int right){
  if(left>=right){return;}
  int l=left+1,r=right,key=nums[left];
  while(1){
    while(l<=right){
      if(key<nums[l]){break;}
      l++;
    }
    while(r>left){
      if(key>nums[r]){break;}
      r--;
    }
    if(r<l){swap(&nums[left],&nums[r]);break;}
    swap(&nums[l],&nums[r]);
  }
  QuickSort(nums,left,r-1);QuickSort(nums,r+1,right);
}
