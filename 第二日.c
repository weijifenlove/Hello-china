//第二天鞥能量输出
# include<stdio.h>
int fun(int a,int b)
{
    return a+b;
}
int main()

{
    int i,j;
    for(i=0,j=0;i++;i<100)
    {
        j=fun(i,j);
        printf("the j number is %d\n",j);

    }
    
    return 0;
}
