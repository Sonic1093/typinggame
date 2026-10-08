/* -------------------------------------------------------------------------- */
/* ファイル名. typinggame.c                                                    */
/* 作 成 日：2026/10/06                                                */
/* 作 成 者：0G04006 ウェイミヨーカイン                                                */
/* -------------------------------------------------------------------------- */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    char ch[100];
    int i = 0;
    int j;
    
    char Ans[3][7] ={"star", "place", "zoo"};

    fgets(ch , sizeof(ch), stdin);
    ch[strcspn(ch, "\n")] = '\0';

    while(ch[i] != '\0'){
        if(ch[i] == ' '){
            j = i;
            while(ch[j] != '\0'){
                ch[j] = ch[j+1];
                j++;
            }
        }else {
            i++;
        }
        
    }

    printf("%s\n", ch);

    if(strcmp(ch , Ans[0]) == 0){
        printf("*ok you got it!");
    }

    return 0;
}