#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char str[25];
    char sen[100];
    scanf("%c%s",&ch,&str);
    getchar();
    fgets(sen,sizeof(sen),stdin);
    printf("%c\n%s\n%s\n",ch,str,sen);    
    return 0;
}
