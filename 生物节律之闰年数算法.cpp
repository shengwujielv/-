   /*首先 公式是：（测定年-出生年）×365+闰年数-（1月1日至生日天数）+（1月1日至测定天数）。
   所得天数即是经历总天数，再分别除以23天、28天、33天，所得余数分别为体力、情绪、智力三个节律情况。*/
#include<stdio.h>
#include<iostream>
#include<math.h>
int main()
{int a,b,c,d;
printf("请输入您的出生年份：");
scanf("%d",&a);
printf("请输入您的测试年份：");
scanf("%d",&b);
if(a%4==0&&a%100!=0||a%400==0)
{c=(b-a-1)%4;
d=(b-a-c-1)/4+2;}
else
{c=(b-a-1)%4;
d=(b-a-c-1)/4+1;}
printf("闰年数为：%d\n",d);
system("pause");
} 
