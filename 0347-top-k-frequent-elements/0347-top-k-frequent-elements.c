#include <stdlib.h>

int compare(const void* a, const void* b){
    return (*(int*)a - *(int*)b);
}

int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {

    qsort(nums, numsSize, sizeof(int), compare);

    int *unique = malloc(numsSize * sizeof(int));
    int *freq = malloc(numsSize * sizeof(int));

    int count = 0;

    for(int i = 0; i < numsSize; ){
        int j = i;
        while(j < numsSize && nums[j] == nums[i])
            j++;

        unique[count] = nums[i];
        freq[count] = j - i;

        count++;
        i = j;
    }

    // sort by frequency (simple selection sort)
    for(int i = 0; i < count-1; i++){
        for(int j = i+1; j < count; j++){
            if(freq[i] < freq[j]){
                int temp = freq[i];
                freq[i] = freq[j];
                freq[j] = temp;

                temp = unique[i];
                unique[i] = unique[j];
                unique[j] = temp;
            }
        }
    }

    int *result = malloc(k * sizeof(int));

    for(int i = 0; i < k; i++)
        result[i] = unique[i];

    *returnSize = k;

    return result;
}