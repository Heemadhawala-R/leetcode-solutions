int compare(const void * a , const void *b){
    return (*(int *)b -*(int *)a);

}
int largestInteger(int num) {
    int digits[10],even[10], odd[10];
    int digi_count=0,even_count=0,odd_count=0;
    int copy=num;
    while(copy>0){
        digits[digi_count++] = copy % 10;
            if(digits[digi_count-1] % 2 == 0)
            even[even_count++] = digits[digi_count-1];
        else
            odd[odd_count++] = digits[digi_count-1];
        copy /= 10;
    }
    qsort(even, even_count, sizeof(int), compare);
    qsort(odd, odd_count, sizeof(int), compare);
    int e = 0, o = 0;
    int result = 0;
    for(int i = digi_count - 1; i >= 0; i--)
    {
        if(digits[i] % 2 == 0)
            result = result * 10 + even[e++];
        else
            result = result * 10 + odd[o++];
    }
    return result;
}
