
/*给定两个表示复数的字符串。

返回表示它们乘积的字符串。注意，根据定义 i2 = -1 。

示例 1:

输入: "1+1i", "1+1i"

输出: "0+2i"

解释: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i ，你需要将它转换为 0+2i 的形式。*/

char * complexNumberMultiply(char * a, char * b)

{

    int x1,x2,y1,y2,x,y;

    char *arr=(char *)malloc(sizeof(char)*100);

    sscanf(a,"%d+%di",&x1,&y1);  //分别从a和b中读取数值

    sscanf(b,"%d+%di",&x2,&y2);

    x=x1*x2-y1*y2;        //计算公式

    y=x1*y2+x2*y1;

    sprintf(arr,"%d+%di",x,y); //输入数组arr中

    return arr;

}