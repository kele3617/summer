
/*����������ʾ�������ַ�����

���ر�ʾ���ǳ˻����ַ�����ע�⣬���ݶ��� i2 = -1 ��

ʾ�� 1:

����: "1+1i", "1+1i"

���: "0+2i"

����: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i ������Ҫ����ת��Ϊ 0+2i ����ʽ��*/

char * complexNumberMultiply(char * a, char * b)

{

    int x1,x2,y1,y2,x,y;

    char *arr=(char *)malloc(sizeof(char)*100);

    sscanf(a,"%d+%di",&x1,&y1);  //�ֱ��a��b�ж�ȡ��ֵ

    sscanf(b,"%d+%di",&x2,&y2);

    x=x1*x2-y1*y2;        //���㹫ʽ

    y=x1*y2+x2*y1;

    sprintf(arr,"%d+%di",x,y); //��������arr��

    return arr;

}