#include <stdio.h>
 
int main()
{
    char ch[6];
 
    int i;
 
    printf ("문자 5개를 입력하세요 : ");
    scanf ("%s", ch);
 
 
    for (i=0; i<6; i++) {
        if (ch[i] >= 'A' && ch[i] <='Z') {
            ch[i] = ch[i] + ('a' - 'A');
 
        }
 
        else if (ch[i] >= 'a' && ch[i] <='z') {
            ch[i] = ch[i] - ('a' - 'A');
 
        }
    }
 
    printf ("%s", ch);
 
    return 0;
 }
