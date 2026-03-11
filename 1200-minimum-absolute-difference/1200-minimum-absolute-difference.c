int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int** minimumAbsDifference(int* arr, int arrSize, int* returnSize, int** returnColumnSizes) {

    qsort(arr, arrSize, sizeof(int), compare);

    int minDiff = INT_MAX;
    for(int i = 1; i < arrSize; i++){
        int diff = arr[i] - arr[i-1];
        if(diff < minDiff){
            minDiff = diff;
        }
    }

    int **result = malloc(arrSize * sizeof(int*));
    *returnColumnSizes = malloc(arrSize * sizeof(int));
    *returnSize = 0;

    for(int i = 1; i < arrSize; i++){
        if(arr[i] - arr[i-1] == minDiff){
            result[*returnSize] = malloc(2 * sizeof(int));
            result[*returnSize][0] = arr[i-1];
            result[*returnSize][1] = arr[i];
            (*returnColumnSizes)[*returnSize] = 2;
            (*returnSize)++;
        }
    }

    return result;
}