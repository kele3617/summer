bool isPalindrome(int x)

{

    int i,j,t,a[10];

    if(x<0)      //如果x小于0，则不是回文数

    return false;

    i=t=0;

    while(x!=0)  //求这个数的位数，存放在i里，每次循环过程中让x对10取余，存放到数组a中

    {

        a[i]=x%10;

        x=x/10;

        i++;

    }

    for(j=0;j<i;j++) //对数组遍历，对其中的元素对称地进行比较，如果相等，t就加1

    {

        if(a[j]==a[i-j-1])

        t++;

    }

    if(t==i)//如果t等于i，说明数组中的元素都是对称的，即该数字是回文数

    return true;

    else

    return false;

}