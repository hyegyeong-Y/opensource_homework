#include stdio.h
 
int main()
{
    int num[5];
    int i, sum=0; 
    double avg;
 
    for (i=0; i5; i++) {
        printf (숫자를 입력하세요  );
        scanf (%d, &num[i]);
 
        sum += num[i];
    }
 
    avg = sum  5.0;
 
    printf (합은 %d, 평균은 %lf 입니다., sum, avg);
 
    return 0;
 }
//이 친구는 충돌을 발생시킬 예정입니다.

