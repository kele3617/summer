/*

����һ�����ʣ�����Ҫ�жϵ��ʵĴ�дʹ���Ƿ���ȷ��

���Ƕ��壬���������ʱ�����ʵĴ�д�÷�����ȷ�ģ�

ȫ����ĸ���Ǵ�д������"USA"��

������������ĸ�����Ǵ�д������"leetcode"��

������ʲ�ֻ����һ����ĸ��ֻ������ĸ��д�� ���� "Google"��

�������Ƕ����������û����ȷʹ�ô�д��ĸ��

ʾ�� 1:

����: "USA"

���: True

ʾ�� 2:

����: "FlaG"

���: False

*/

bool detectCapitalUse(char * word)

{

    int i=0;

    int flag=0;         //��¼��д��ĸ����

    int sign=0;       //��¼Сд��ĸ����

    if(strlen(word)==0)     //����Ϊ�յ����

    {

        return false;

    }

    while(word[i]!='\0')   //����

    {

        if(word[i]>='A'&&word[i]<='Z')

        {

            flag++;

        }

        if(word[i]>='a'&&word[i]<='z')

        {

            sign++;

        }

        i++;

    }

    if(flag==strlen(word)||sign==strlen(word))   //����ַ���ȫΪ��д��ȫΪСд

    {

        return true;

    }

    else if(flag==1&&word[0]>='A'&&word[0]<='Z')  //���ֻ������ĸΪ��д

    {

        return true;

    }

    else{

        return false;

    }

}