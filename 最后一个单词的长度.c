/*给定一个仅包含大小写字母和空格 ' ' 的字符串 s，返回其最后一个单词的长度。如果字符串从左向右滚动显示，那么最后一个单词就是最后出现的单词。

如果不存在最后一个单词，请返回 0 。

说明：一个单词是指仅由字母组成、不包含任何空格字符的 最大子字符串。

示例:

输入: "Hello World"

输出: 5*/

int lengthOfLastWord(char * s)

{

    int result,len,i;

    len=strlen(s);

    result=0;

    if(len==0)

    {

        return 0;

    }

    for(i=len-1;i>=0;i--)     //反向遍历

    {

        if(s[i]!=' ')             //s[i]不为空格时，result加1

        {

            result++;

        }

        if(s[i]==' '&&result>0)         //当s[i]为空格时且result>0退出循环，

        {

            break;

        }

    }

    return result;

}