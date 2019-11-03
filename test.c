
#include <stdio.h>
//该程序的关键点在于定义了一个静态的字符指针,该指针用来记录分割后的字符串的首地址
//传入NULL,则表示继续处理静态指针指向的余下字符串
char *strtok(char *str, const char *delim)
{
    static char *rembmberLastString = NULL; //记下上一次非分隔字符串字符的位置,详见图示
    const char *indexDelim = delim;         //对delim做一个备份
    int flag = 1, index = 0;                //每一次调用strtok,flag标记都会使得程序只记录下第一个非分隔符的位置,以后出现非分隔符不再处理
    char *temp = NULL;                      //程序的返回值

    if (str == NULL)
    {
        str = rembmberLastString; //若str为NULL则表示该程序继续处理上一次余下的字符串
    }
    for (; *str; str++)
    {
        delim = indexDelim;
        for (; *delim; delim++)
        {
            if (*str == *delim)
            {
                *str = NULL; //若找到delim中感兴趣的字符,将该字符置为NULL
                index = 1;   //用来标记已出现感兴趣字符
                break;
            }
        }
        if (*str != NULL && flag == 1)
        {
            temp = str; //只记录下当前第一个非感兴趣字符的位置
            flag = 0;
        }
        if (*str != NULL && flag == 0 && index == 1)
        {
            rembmberLastString = str; //第二次出现非感兴趣字符的位置(之前一定出现过感兴趣字符)
            return temp;
        }
    }
    rembmberLastString = str; //执行该句表明一直未出现过感兴趣字符,或者说在出现了感兴趣的字符后,就没再出现过非感兴趣字符
    return temp;
}

int main(void)
{
    char strTocken[] = "A string\tof ,,tokens\nand some  more tokens";
    char strDelimiter[] = " ,\t\n";
    char *p;
    p = strTocken;
    while (p = strtok(p, strDelimiter))
    {
        printf("%s\n", p);
        p = NULL;
    }
    return 0;
}
