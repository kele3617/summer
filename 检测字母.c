/*

给定一个单词，你需要判断单词的大写使用是否正确。

我们定义，在以下情况时，单词的大写用法是正确的：

全部字母都是大写，比如"USA"。

单词中所有字母都不是大写，比如"leetcode"。

如果单词不只含有一个字母，只有首字母大写， 比如 "Google"。

否则，我们定义这个单词没有正确使用大写字母。

示例 1:

输入: "USA"

输出: True

示例 2:

输入: "FlaG"

输出: False

*/

bool detectCapitalUse(char * word)

{

    int i=0;

    int flag=0;         //记录大写字母数量

    int sign=0;       //记录小写字母数量

    if(strlen(word)==0)     //数组为空的情况

    {

        return false;

    }

    while(word[i]!='\0')   //遍历

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

    if(flag==strlen(word)||sign==strlen(word))   //如果字符串全为大写或全为小写

    {

        return true;

    }

    else if(flag==1&&word[0]>='A'&&word[0]<='Z')  //如果只有首字母为大写

    {

        return true;

    }

    else{

        return false;

    }

}