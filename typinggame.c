/* -------------------------------------------------------------------------- */
/* ファイル名. typinggame.c                                                    */
/* 作 成 日：2026/10/06                                                */
/* 作 成 者：0G04006 ウェイミヨーカイン                                                */
/* -------------------------------------------------------------------------- */


#include<stdio.h>
#include<stdlib.h>

int main(void){

    char ch[100];
    int i = 0;

    fgets(ch , sizeof(ch), stdin);
 
    while(ch[i] != '\0'){
        if(isspace(ch[i])){
            ch[i] = '*';
        }
        i++;
    }

    printf("%s", ch);

    return 0;
}