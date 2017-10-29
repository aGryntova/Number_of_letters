#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[100000];
    int chars [200];

    printf("Enter letters:\n");
    scanf("%s", str );
        int i;
        for( i = 0; i < str[i]; i++ ){
            chars[str[i]]++;
        }

        for( i = 0; i<200 ;i++)
            if(chars[i]){
                printf(" \n %c Symbol  - %d Meets  " , i, chars[i]);
            }
    return 0;
}
