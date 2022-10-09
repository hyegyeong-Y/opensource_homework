#include <stdio.h>
 
int main()
{
    char ch;
 
 
    printf ("문자를 입력하세요 : ");
    scanf ("%c", &ch);
 
 
    if (ch == 'M' || ch == 'm' )
        printf ("남자");
 
    if (ch == 'F' || ch == 'f' )
        printf ("여자");
 
 
    return 0;
 }
