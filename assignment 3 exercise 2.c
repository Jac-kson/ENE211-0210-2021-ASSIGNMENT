#include <stdio.h>
#include <string.h>
int main () {
    char word[]="JOMO KENYATTA";
    int length =strlen(word);

    printf("original word:%s\n",word);
    printf("Reversed word :");
    for (int i=length-1;i>=0;i--){
            printf("%c",word[i]);
    }
    printf("\n");
    return 0;
}

