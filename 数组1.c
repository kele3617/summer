/*
  时间：2020年7月24日17:19:58
  题目：在既定时间内查找做作业学生的数目
  思路；通过for循环防止越界问题，然后通过判断语句找出符合条件的学生
*/
# include <stdio.h>
#include<string.h>
int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime);
int main ()
{

	int startTime[5] , endTime[5], Time,s,e;
	int i,num;
	printf ("输入既定时间Time=");
	scanf (" %d", &Time);
	printf ("输入开始时间: \n");
	for (i = 0; i < 4; i++)
	{
		scanf ("%d", &startTime[i]);
	}
	printf ("输入结束时间: \n");
	for (i = 0; i < 4; i++)
	{
		scanf ("%d", &endTime[i]);
	}
	num = busyStudent( startTime, sizeof(startTime)/sizeof(startTime[0]), endTime, sizeof(endTime)/sizeof(endTime[0]), Time) ;
	printf ("num=%d\n",num);
	return 0;
}
int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime)
{
	int A = 0, i = 0;
	for (i = 0; i < startTimeSize; i++)
	{
		if ( queryTime >= startTime[i]  && queryTime <= endTime[i])
			A++;
	}
	return A;
}
