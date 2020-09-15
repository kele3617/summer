/*面试题 08.11. 硬币

硬币。给定数量不限的硬币，币值为25分、10分、5分和1分，编写代码计算n分有几种表示法。(结果可能会很大，你需要将结果模上1000000007)


示例1:

 输入: n = 5

 输出：2

 解释: 有两种方式可以凑成总金额:

5=5

5=1+1+1+1+1

示例2:

 输入: n = 10

 输出：4

 解释: 有四种方式可以凑成总金额:

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