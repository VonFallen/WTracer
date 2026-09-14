#include <stdio.h>
#include <string.h>
#include <ctype.h>

void clean(char str[50]){
    int j = 0;
    char temp[50];

    for(int i = 0; str[i] != '\0'; i++){
           if(!ispunct((unsigned char)str[i])){
            temp[j] = toupper((unsigned char)str[i]); 
            j++;
           }
        }
    temp[j] = '\0';
    strcpy(str, temp);
}
int main(){
    char word[50], bword[50];
    char fname[50];
    int total = 0;
    FILE *file;


    printf("Type the file name: ");
    fgets(fname, 50, stdin);
    fname[strcspn(fname, "\n")] ='\0';

    file = fopen(fname, "r");
    if(file == NULL){
        printf("File not found!\n");
        return 1;
    }

    printf("Type a word: ");
    fgets(word, 50, stdin);
    word[strcspn(word, "\n")] = '\0';
    clean(word);
    
    while(fscanf(file, "%49s", bword) != EOF){

        clean(bword);

        if(strcmp(word, bword)==0){
            total++;
        }
    }

    
    fclose(file);
    printf("Total matches: %d\n", total);
    
    return 0;
}