/* -------------------------------------------------------------------------- */
/* ファイル名. typinggame.c                                                    */
/* 作 成 日：2026/10/06                                                */
/* 作 成 者：0G04006 ウェイミヨーカイン                                                */
/* -------------------------------------------------------------------------- */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

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

    
    
    
    
    /*//スペースが入っても読み取れる　日本語は無理です。englishはＯｋです.最初は回答を英語で表示すると思ったから！
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

    srand((unsigned int)time(NULL));
    time_t start_T = time(NULL);
    
    /* 質問の重複を防ぐ */
    int index[QUE_COUNT];
    for (int i = 0; i < QUE_COUNT; i++) {
        index[i] = i;
    }
    for (int i = QUE_COUNT - 1; i > 0; i--) {
        int randQue = rand() % (i + 1);

        int temp = index[i];
        index[i] = index[randQue];
        index[randQue] = temp;
    }

    
    for(int i=0; i<QUE_COUNT; i++){

        // radom 質問を作る
    
        int randQue= rand() % 9;

        printf("第%d問\n", i+1);

        //2回の出題は防ぐ

        
        
        printf("%s\n", Que[randQue]);
        
        //ユーザーの入力
        scanf("%s", &ch);


        //strcmp= stringCompare で入力とAnsを比べる
        while(strcmp(ch,Ans[randQue]) != 0){
            printf("ミスがあります、もう一度！\n");
            scanf("%s", &ch);
        }
    }
    time_t end_T = time(NULL);

    int test_T = end_T - start_T;

    printf("！！終了！！\n");

    if(test_T >= 60){
        printf("所要時間：%d分%d秒\n", test_T/60, test_T%60);
    }else{
        printf("所要時間：%d秒\n", test_T);
    }

    return 0;
}
