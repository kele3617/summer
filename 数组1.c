/*
  ʱ�䣺2020��7��24��17:19:58
  ��Ŀ���ڼȶ�ʱ���ڲ�������ҵѧ������Ŀ
  ˼·��ͨ��forѭ����ֹԽ�����⣬Ȼ��ͨ���ж�����ҳ�����������ѧ��
*/
# include <stdio.h>
#include<string.h>
int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime);
int main ()
{

	int startTime[5] , endTime[5], Time,s,e;
	int i,num;
	printf ("����ȶ�ʱ��Time=");
	scanf (" %d", &Time);
	printf ("���뿪ʼʱ��: \n");
	for (i = 0; i < 4; i++)
	{
		scanf ("%d", &startTime[i]);
	}
	printf ("�������ʱ��: \n");
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
