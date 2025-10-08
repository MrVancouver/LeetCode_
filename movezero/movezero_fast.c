void moveZeroes(int* nums, int numsSize) {
    int k = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) nums[k++] = nums[i];
    }
    while (k < numsSize) nums[k++] = 0;
}
// fast solution given by
// leetcode itself
/*
int main(void)
{
  int n[] = {0, 1, 0, 0, 0, 3, 9 ,5};
  int size_array;

  size_array = (sizeof(n)/sizeof(n[0]));
  moveZeroes(n, size_array);
}
*/