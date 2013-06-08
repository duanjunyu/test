//#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>

// 用于对数组进行冒泡排序法操作
// 参数a为需要排序的数组
// 参数n为需要排序数组的元素个数
void bubblesort(int *a,int n)
{
    int i;
    int j;
    int temp = 0;
    int flag = 0;
    for(i = 0; i < n-1; i++) // 大循环，用于控制程序不再对已经排好序的数进行比较
    {
        flag = 0;
        for(j = n-1; j > i; j--) // 小循环，用于从后往前依次比较相邻数的大小，如果后者小于前者，交换相邻元素
        {
            if(a[j] < a[j-1])
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
                flag = 1; // 当此轮比较有交换发生，则继续比较
            }
        }
        if(flag == 0) // 当此轮比较没有交换发生，则说明比较已经结束
            break;
    }
}

void bubblesort_2(int *a, int n)
{
    int i, j;
    int temp;
    for(i = 0; i < n-1; ++i)
    {
        for(j = n-1; j > i; --j)
        {
            if(a[j] < a[j-1])
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }

        }

    }
}

void choise(int *a,int n) 
{ 

    int i,j,k,temp; 

    for(i=0;i<n-1;i++) { 
        k=i; /*给记号赋值*/ 
        for(j=i+1;j<n;j++)
        {
            if(a[k]>a[j])
            {
                k=j; /*是k总是指向最小元素*/ 
            }
        }

        if(i!=k)
        { 
            /*当k!=i是才交换，否则a[i]即为最小*/ 
            temp=a[i]; 
            a[i]=a[k]; 
            a[k]=temp; 
        } 
    } 
} 

void quick(int *a,int i,int j) 
{ 
    int m,n,temp; 
    int k; 
    m=i; 
    n=j; 
    k=a[(i+j)/2]; /*选取的参照*/ 
    do { 
        while(a[m]<k&&m<j) m++; /* 从左到右找比k大的元素*/ 
        while(a[n]>k&&n>i) n--; /* 从右到左找比k小的元素*/ 
        if(m<=n) { /*若找到且满足条件，则交换*/ 
            temp=a[m]; 
            a[m]=a[n]; 
            a[n]=temp; 
            m++; 
            n--; 
        } 
    }while(m<=n); 
    if(m<j) quick(a,m,j); /*运用递归*/ 
    if(n>i) quick(a,i,n); 
} 

void insert(int *a,int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];        /*temp为要插入的元素*/
        j=i-1;

        while( j>=0&&temp<a[j] )
        {            /*从a[i-1]开始找比a[i]小的数，同时把数组元素向后移*/
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp; /*插入*/
    }
} 


int main()
{
//    void bubblesort(int *a, int n);
    int i = 0;
    int a_len;
    int a[10] = {5,4,9,8,7,6,0,1,3,2}; // 也可以是用scanf方法得到数组元素
    a_len = sizeof(a)/sizeof(a[0]);
//    bubblesort(a, 10); // 调用冒泡排序法
//    bubblesort_2(a, sizeof(a)/sizeof(a[0]));
//    choise(a, a_len);
//    quick(a, 0, a_len-1);
    insert(a, a_len);
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);
    getchar();

    return 0;
}
