int gcd(int m,int n)
{
    while(n != 0)
    {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int findGCD(int* nums, int numsSize)
{
    int min = nums[0];
    int max = nums[0];
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i] < min)
            min = nums[i];
        if(nums[i] > max)
            max = nums[i];
    }
    return gcd(max,min);
}