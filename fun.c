#include <stdio.h>
#include <string.h>
#include "fun.h"

#define N1 20
#define N2 10

//字符串输入输出
void inputString(){
    char str1[10],str2[10],str3[10],str4[10],str5[10];

    ////%c方式
    //printf("%%c方式输入字符串：\n");
    //for(int i=0; i<10; i++){
    //    scanf("%c", &str1[i]);
    //}
    //printf("输出字符串：\n");
    //for(int i=0; i<10; i++){
    //    printf("%c",str1[i]);
    //}
    //printf("\n");

    ////%s方式
    //printf("%%s方式输入字符串：\n");
    //scanf("%s", str2);
    //printf("输出字符串：\n");
    //printf("%s\n", str2);

    //gets,puts方式
    printf("gets方式输入字符串：\n");
    gets(str3);
    printf("输出字符串：\n");
    puts(str3);

}


//字符串处理库函数
void stringFunction(){
    char str1[N1] = "aabbcc";
    char str2[N2] = "ddee";
    char str3[N1];
    char c = 'h';

    //输出str1,str2的内容
    printf("str1=%s, str2=%s\n", str1, str2);

    //输出str1长度
    printf("the lenght of str1 is: %d\n", strlen(str1));

    //将str1内容拷贝给str3
    strcpy(str3, str1);
    printf("str3=%s\n", str3);

    //比较两字符串
    printf("the compare of str1 and str2 is:%d\n", strcmp(str1, str2));

    //连接str1,str2
    printf("str1=%s, str2=%s\n", str1, str2);
    strcat(str1,str2);
    puts(str1);

    //字符串中查找某字符
    printf("字符串str1中字符'c'是否存在：%ld\n", strchr(str1, c));

}


//输入N个字符串，输出最大串和最小串
void find_Max_Min_Str(){
    char str[6];
    char min[6];
    char max[6];

    printf("输入第一个字符串：\n");
    gets(str);
    strcpy(min, str);
    strcpy(max, str);

    //循环输入其他字符串，逐个进行比较
    for(int i=1; i<6; i++){
        printf("输入第%d个字符串：\n", i+1);
        gets(str);

        if(strcmp(str, min) < 0){
            strcpy(min, str);
        }

        if(strcmp(str, max) > 0){
            strcpy(max, str);
        }
    }

    printf("the max string is %s\n", max);
    printf("the min string is %s\n", min);
}


//统计字符串中单词个数
void count_Word_Number(){
    char text[100];
    int word = 0;   //单词数
    int i;

    printf("输入字符:\n");
    gets(text);

    if(text[0] == ' '){
        word = 0;
    }else if(text[0] != '\0'){
        word = 1;
    }

    i=1;
    while (text[i] != '\0'){
            if((text[i-1] == ' ' && text[i] != ' ') || (text[i-1] == ',' && text[i] != ' ')){
                word++;
            }
            i++;
    }

    printf("单词个数：%d\n", word);
}


//统计字符串中数字、非数字的字符个数
void count_Num_Number(){
    char str[10];
    int number = 0;
    int other = 0;

    printf("输入字符串：\n");
    for(int i=0; i<10; i++){
        scanf("%c", &str[i]);
    }

    for(int i=0; i<10; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            number++;
        }else{
            other++;
        }
    }

    printf("\n字符串为：\n");
    for(int i=0; i<10; i++){
        printf("%c", str[i]);
    }

    printf("数字个数：%d, 非数字个数：%d\n", number, other);

}