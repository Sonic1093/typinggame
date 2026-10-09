/* -------------------------------------------------------------------------- */
/* ファイル名. typinggame.c                                                    */
/* 作 成 日：2026/10/06                                                */
/* 作 成 者：0G04006 ウェイミヨーカイン                                                */
/* -------------------------------------------------------------------------- */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define QUE_COUNT 10
#define ANS_COUNT 10

int main(void){

    char ch[100];
    int score = 0;
    
    char Que[QUE_COUNT][20] = {"Tokyo",
                        "Osaka",
                        "Kyoto",
                        "Kobe",
                        "Yokohama",
                        "Nagoya",
                        "Sapporo",
                        "Fukuoka",
                        "Hiroshima",
                        "Nara"};
    char Ans[ANS_COUNT][20] ={ "東京",
                        "大阪",
                        "京都",
                        "神戸",
                        "横浜",
                        "名古屋",
                        "札幌",
                        "福岡",
                        "広島",
                        "奈良"};

    
    
    
    
    /*//スペースが入っても読み取れる　日本語は無理です。englishはＯｋです。　
    //ユーザーの入力
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
    */
    for(int i=0; i<QUE_COUNT; i++){

        // radom 質問を作る
        srand(time(NULL));
        int randQue= rand() % 9 + 1;

        printf("第%d問\n", i+1);
        
        printf("%s\n", Que[randQue]);
        
        //ユーザーの入力
        scanf("%s", &ch);


        //strcmp= stringCompare で入力とAnsを比べる
        while(strcmp(ch,Ans[randQue]) != 0){
            printf("ミスがあります、もう一度！\n");
            scanf("%s", &ch);
        }
        
        printf("*ok you get it!");

    }

    printf("終了！！");


    return 0;
}
