bool isPalindrome(int x)

{

    int i,j,t,a[10];

    if(x<0)      //���xС��0�����ǻ�����

    return false;

    i=t=0;

    while(x!=0)  //���������λ���������i�ÿ��ѭ����������x��10ȡ�࣬��ŵ�����a��

    {

        a[i]=x%10;

        x=x/10;

        i++;

    }

    for(j=0;j<i;j++) //����������������е�Ԫ�ضԳƵؽ��бȽϣ������ȣ�t�ͼ�1

    {

        if(a[j]==a[i-j-1])

        t++;

    }

    if(t==i)//���t����i��˵�������е�Ԫ�ض��ǶԳƵģ����������ǻ�����

    return true;

    else

    return false;

}