
/*实现函数 ToLowerCase()，该函数接收一个字符串参数 str，并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。

示例 1：

输入: "Hello"

输出: "hello"*/

char * toLowerCase(char * str)

{

    int i,len;

    len=strlen(str);//len为字符串长度

    for(i=0;i<len;i++)

    {

        if(str[i]>='A'&&str[i]<='Z')

        {

            str[i]+='a'-'A';//大写变小写

        }

    }

    return str;

}