#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <string.h>
#include<stdio.h>
//问题 M : 高程07 - 01：求二维数组中下标为奇数的行元素和。
int oddarray_sum(int* a, int m, int n)
{
    int s = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j % 2 == 1)
            {
                s += *(a+j+i*n);
            }
        }
    }
    return s;
}
int main()
{
    int a[3][3];
    int i, j;
    int sum;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    sum = oddarray_sum(&a[0][0], 3, 3);
    printf("%d", sum);
    return 0;

}

//问题 N : 高程07 - 02：求二维数组中，下三角矩阵对应所有元素的和。
//int triangle_sum(int* a, int n)
//{
//    int sum = 0;
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <=i; j++)
//        {
//            sum += *(a + j + i * n);
//        }
//    }
//    return sum;
//}
//int main()
//{
//    int a[3][3];
//    int i, j;
//    int sum;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    sum = triangle_sum(&a[0][0], 3);
//    printf("%d", sum);
//    return 0;
//}

//问题 O : 高程07 - 03：输入二维数组，将奇数加 1，偶数减一
//void change(int* a, int m, int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (*(a + j + i * n) == 0)
//            {
//                ;
//            }
//            else if (*(a + j + i * n) % 2)
//            {
//                (*(a + j + i * n))++;
//            }
//            else
//            {
//                (*(a + j + i * n))--;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int a[3][3];
//    int i, j;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    change(&a[0][0], 3, 3);
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//问题 P : 高程07 - 04：，求二维数组所有素数的和并输出。
//int su_sum(int* a, int m, int n)
//{
//    int sum = 0;
//    int r = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (*(a + j + i * n) <= 1)
//            {
//                ;
//            }
//            else if (*(a+j+i*n) == 2)
//            {
//                sum += *(a + j + i * n);
//            }
//            else
//            {
//                r = sqrt(*(a + j + i * n));
//                for (k = 2; k <= r; k++)
//                {
//                    if (*(a+j+i*n) % k == 0)
//                    {
//                        break;
//                    }
//                }
//                if (k <= r)
//                {
//                    ;
//                }
//                else
//                {
//                    sum += *(a + j + i * n);
//                }
//            }
//        }
//    }
//    return sum;
//}
//
//int main()
//{
//    int a[3][3];
//    int i, j;
//    int sum;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    sum = su_sum(&a[0][0], 3, 3);
//    printf("%d", sum);
//    return 0;
//}

//问题 Q : 高程07 - 05：编写函数，求两个二维数组代表的矩阵的和。
//void array_sum(int* a, int* b, int* c, int m, int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            *(c + j + i * n) = *(a + j + i * n) + *(b + j + i * n);
//        }
//    }
//}
//
//
//int main()
//
//{
//
//    int a[2][3], b[2][3], c[2][3];
//    int i, j;
//    //下面输入数组a的数据    
//    for (i = 0; i < 2; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    //下面输入数组b的数据
//    for (i = 0; i < 2; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &b[i][j]);
//        }
//    }
//    //调用函数array_sum求矩阵a、b的和，存入矩阵c
//    array_sum(&a[0][0], &b[0][0], &c[0][0], 2, 3);
//    //下面输出数组c中的数据
//    for (i = 0; i < 2; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            printf("%d ", c[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//问题 R : 高程07 - 06：编写函数，从字符串中删除指定字符
//void delete_char(char s[], char c)
//{
//    int i = 0;
//    while (s[i] != '\0')
//    {
//        if (s[i] == c)
//        {
//            while (s[i]=s[i+1])
//            {
//                i++;
//            }
//            return;
//        }
//        i++;
//    }
//}
//
//int main()
//{
//    char s[100];
//    char c;
//    gets(s);
//    c = getchar();
//    delete_char(s, c);
//    printf("%s", s);
//    return 0;
//}


//问题 S : 高程07 - 07：编写函数，将字符串中的字符倒置
//void invert(char s[])
//{
//    int i = 0;
//    while (s[i] != '\0')
//    {
//        i++;
//    }
//    int left = 0;
//    int right = i-1;
//    int tmp=0;
//    while (left<right)
//    {
//        tmp = s[left];
//        s[left] = s[right];
//        s[right] = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char s[100];
//    scanf("%s", &s);
//    fflush(stdin);
//    invert(s);
//    printf("%s", s);
//    return 0;
//}

//问题 T : 高程07 - 08：编写函数，统计字符串中每种字符出现的次数并输出。
//void count(char s[])
//{
//    int i = 0;
//    int space = 0;
//    int num=0;
//    int letter = 0;
//    while (s[i] != '\0')
//    {
//        if (s[i] == ' ')
//        {
//            space++;
//        }
//        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
//        {
//            letter++;
//        }
//        else if ((s[i] >= '0' && s[i] <= '9'))
//        {
//            num++;
//        }
//        i++;
//    }
//    printf("%d %d %d", space, num, letter);
//}
//int main()
//{
//    char s[100];
//    gets(s);
//    fflush(stdin);
//    count(s);
//    return 0;
//}
