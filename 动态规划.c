/*������ 08.11. Ӳ��

Ӳ�ҡ������������޵�Ӳ�ң���ֵΪ25�֡�10�֡�5�ֺ�1�֣���д�������n���м��ֱ�ʾ����(������ܻ�ܴ�����Ҫ�����ģ��1000000007)


ʾ��1:

 ����: n = 5

 �����2

 ����: �����ַ�ʽ���Դճ��ܽ��:

5=5

5=1+1+1+1+1

ʾ��2:

 ����: n = 10

 �����4

 ����: �����ַ�ʽ���Դճ��ܽ��:

10=10

10=5+5

10=5+1+1+1+1+1

10=1+1+1+1+1+1+1+1+1+1*/

int coins[4] ={25,10,5,1};

int waysToChange(int n)

{

    int mod = pow(10,9)+7;

    int *dp = (int*)calloc(n+1,sizeof(int));

    dp[0] = 1;

    for(int c = 0;c < 4;c++)

    {

        int coin = coins[c];

        for(int i = coin;i <= n;++i)

        {

            dp[i] = (dp[i]+dp[i-coin])%mod;

        }

    }

    return dp[n];

}

int main()

{

	int n;

	scanf("%d",&n);

	printf("%d ",waysToChange(n));

}