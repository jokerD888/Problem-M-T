#define _CRT_SECURE_NO_WARNINGS 1
#include <math.h>
#include <string.h>
#include<stdio.h>
//���� M : �߳�07 - 01�����ά�������±�Ϊ��������Ԫ�غ͡�
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

//���� N : �߳�07 - 02�����ά�����У������Ǿ����Ӧ����Ԫ�صĺ͡�
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

//���� O : �߳�07 - 03�������ά���飬�������� 1��ż����һ
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

//���� P : �߳�07 - 04�������ά�������������ĺͲ������
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

//���� Q : �߳�07 - 05����д��������������ά�������ľ���ĺ͡�
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
//    //������������a������    
//    for (i = 0; i < 2; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    //������������b������
//    for (i = 0; i < 2; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%d", &b[i][j]);
//        }
//    }
//    //���ú���array_sum�����a��b�ĺͣ��������c
//    array_sum(&a[0][0], &b[0][0], &c[0][0], 2, 3);
//    //�����������c�е�����
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

//���� R : �߳�07 - 06����д���������ַ�����ɾ��ָ���ַ�
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


//���� S : �߳�07 - 07����д���������ַ����е��ַ�����
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

//���� T : �߳�07 - 08����д������ͳ���ַ�����ÿ���ַ����ֵĴ����������
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
