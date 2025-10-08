#include <stdio.h>

void moveZeroes(int* nums, int numsSize)
{
  int i;
  int j;
  int n;
  int temp;

  for(i = 0; i < numsSize; i++)
  {
    for(j = 0; j < numsSize - 1; j++)
    {
      if(nums[j] == 0)
      {
        temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }
  for(n = 0; n < numsSize; n++)
  {
    printf("%d",nums[n]);
  }
}

/*
int main(void)
{
  int n[] = {0, 1, 0, 0, 0, 3, 9 ,5};
  int size_array;

  size_array = (sizeof(n)/sizeof(n[0]));
  moveZeroes(n, size_array);
}
*/