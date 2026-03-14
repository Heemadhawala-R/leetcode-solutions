int compare(const void * a , const void *b){
    return (*(int *)b -*(int *)a);

}
int largestInteger(int num) {
    int digits[10],even[10], odd[10];
    int dcount=0,ecount=0,ocount=0;
    int temp=num;
    while(temp>0){
        digits[dcount++] = temp % 10;
            if(digits[dcount-1] % 2 == 0)
            even[ecount++] = digits[dcount-1];
        else
            odd[ocount++] = digits[dcount-1];
        temp /= 10;
    }
    qsort(even, ecount, sizeof(int), compare);
    qsort(odd, ocount, sizeof(int), compare);
    int ei = 0, oi = 0;
    int result = 0;
    for(int i = dcount - 1; i >= 0; i--)
    {
        if(digits[i] % 2 == 0)
            result = result * 10 + even[ei++];
        else
            result = result * 10 + odd[oi++];
    }
    return result;
}
