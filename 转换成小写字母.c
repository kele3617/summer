
/*ʵ�ֺ��� ToLowerCase()���ú�������һ���ַ������� str���������ַ����еĴ�д��ĸת����Сд��ĸ��֮�󷵻��µ��ַ�����

ʾ�� 1��

����: "Hello"

���: "hello"*/

char * toLowerCase(char * str)

{

    int i,len;

    len=strlen(str);//lenΪ�ַ�������

    for(i=0;i<len;i++)

    {

        if(str[i]>='A'&&str[i]<='Z')

        {

            str[i]+='a'-'A';//��д��Сд

        }

    }

    return str;

}