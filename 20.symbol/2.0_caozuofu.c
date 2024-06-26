//位操作符
//二进制位（对补码进行操作）
//&--按位与----都是1则为1
//|--按位或----只要有1则为1
//^--按位异或--相同为0，相异为1(只适用于整数)



#include <stdio.h>
/*
int main()
{
    //按位与
    int a=2;
    int b=-5;
    int x=a&b;//二进制位 
    //0000 0000 0000 0000 0000 0000 0000 0010--->2的二进制位
    //1000 0000 0000 0000 0000 0000 0000 0101--->-5的二进制位
    //1111 1111 1111 1111 1111 1111 1111 1010--->5的反码
    //1111 1111 1111 1111 1111 1111 1111 1011--->-5的补码
    //0000 0000 0000 0000 0000 0000 0000 0010--->2的补码（与反码一样）
    //按位与：都是1则为1
    //得到最后结果为：
    //0000 0000 0000 0000 0000 0000 0000 0010---得到2
    printf("%d\n",x);

    //按位或
    int c=2;
    int d=-5;
    int y=c|d;//二进制位 
    //0000 0000 0000 0000 0000 0000 0000 0010--->2
    //1000 0000 0000 0000 0000 0000 0000 0101--->-5
    //1111 1111 1111 1111 1111 1111 1111 1010--->5的反码
    //1111 1111 1111 1111 1111 1111 1111 1011--->-5的补码
    //0000 0000 0000 0000 0000 0000 0000 0010--->2的补码
    //按位或：只要有1则为1
    //得到最后结果为：
    //1111 1111 1111 1111 1111 1111 1111 1011---得-5
    printf("%d\n",y);

    //按位异或
    int e=2;
    int f=-5;
    int z=e^f;//二进制位 
    //0000 0000 0000 0000 0000 0000 0000 0010--->2
    //1000 0000 0000 0000 0000 0000 0000 0101--->-5
    //1111 1111 1111 1111 1111 1111 1111 1010--->5的反码
    //1111 1111 1111 1111 1111 1111 1111 1011--->-5的补码
    //0000 0000 0000 0000 0000 0000 0000 0010--->2的补码
    //按位或：相同为0，相异为1
    //得到最后结果为：
    //1111 1111 1111 1111 1111 1111 1111 1001---得-7
    printf("%d\n",z);
    //1111 1111 1111 1111 1111 1111 1111 1000--->-7的反码（从补码得到）
    //1000 0000 0000 0000 0000 0000 0000 0111--->-7的原码（从反码得到）
 
    return 0;
}
*/

//不能创建临时变量（第三个变量），实现两个数字的交换

//1.创建第三个变量
/*
int main()
{
    int a=2;
    int b=5;
    int c=0;
    printf("交换之前,a的值是%d,b的值是%d\n",a,b);
    c=b;
    b=a;
    a=c;
    printf("交换之后,a的值是%d,b的值是%d\n",a,b);
    return 0;
}
*/


//2.不创建临时变量，使用加减法，实际上与创建第三个变量貌似没有区别？


/*
//3.使用异或操作符(相同位0，相异为1)
int main()
{
    int a=2;
    int b=5;
    printf("交换之前,a的值是%d,b的值是%d\n",a,b);
    a=a^b;
    b=a^b;
    a=b^a;
    printf("交换之后,a的值是%d,b的值是%d\n",a,b);
    return 0;
}
//3^3=？
//3的二进制位是011，补码反码也是011
//011^011
//000
//3^3=0
//0^5=5
//0^a=a
//a^a=0
//异或支持交换律
*/


//求一个整数存储在内存中的二进制中1的个数
/*
#include <stdio.h>
int main()
{
    int a=-6;
    int count=0;
    int i=0;
    for ( i = 0; i < 32; i++)
    {
        if (a&1==1)//特殊的数字
        {
            count++;
        }
        a=a>>1;//每次移位，进行
    }
    printf("%d\n",count);
    
    
    return 0;
}

//0000 0000 0000 0000 0000 0000 0000 0001--->1的补码
//xxxx xxxx xxxx xxxx xxxx xxxx xxxx xxxx--->任何一个的数字的补码
//a&1--->
//0000 0000 0000 0000 0000 0000 0000 000x
//除了第一位不知道，其他全为0，然后左移，可以数有多少个1
//求-6的补码的过程--->
//1000 0000 0000 0000 0000 0000 0000 0110
//1111 1111 1111 1111 1111 1111 1111 1001
//1111 1111 1111 1111 1111 1111 1111 1010（最终结果）有 32个1
*/

























































