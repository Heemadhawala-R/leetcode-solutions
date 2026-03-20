int mostWordsFound(char** sentences, int sentencesSize) {
    int i, j;
    int max = 0;
    for(i = 0; i < sentencesSize; i++){
        int count = 1;
        for(j = 0; sentences[i][j] != '\0'; j++){
            if(sentences[i][j] == ' ')
                count++;
        }
        if(count > max){
            max = count;   
        }
    }
    return max;
}