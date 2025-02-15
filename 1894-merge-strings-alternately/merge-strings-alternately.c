char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int i = 0, j = 0, k = 0;

    char* result = (char*)malloc((len1 + len2 + 1) * sizeof(char));
    
    while(i < len1 && j < len2 ){
        result[k++] = word1[i++];
        result[k++] = word2[j++];
    }
    while (i < len1) {
        result[k++] = word1[i++];
    }
    while (j < len2){
        result[k++] = word2[j++];
    }
    result[k] = '\0';
    return result;
}