#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int* my_classify(int arr[], int k)
{
	int* ret = arr;
	/*int* arr1 = (int*)malloc(sizeof(int) * 3);
	int* arr2 = (int*)malloc(sizeof(int) * 3);*/
	int* arr1 = (int*)calloc(3, sizeof(int));
	if (arr1 == NULL)
	{
		return arr1;
	}
	int* arr2 = (int*)calloc(3, sizeof(int));
	if (arr2 ==NULL)
	{
		return arr2;
	}
	int sz1 = 3;
	int sz2 = 3;
	int i = 0;
	int m = 0;
	int n = 0;
	while (i<k)
	{
		if (arr[i]% 2 == 0)
		{
			arr1[m] = arr[i];
			m++;
			if (m ==sz1)
			{
				int*p= realloc(arr1, sizeof(int) * (sz1 + 2));
				arr1 = p;
				sz1 += 2;
			}
		}
		else if (arr[i] % 2 == 1)
		{
			arr2[n] = arr[i];
			n++;
			if (n == sz2)
			{
				int* p= realloc(arr2, sizeof(int) * (sz2+ 2));
				arr2 = p;
				sz2 += 2;
			}
		}
		i++;
	}
	memcpy(arr,arr2,n*sizeof(int));
	memcpy(arr+n, arr1, m*sizeof(int));
	free(arr1);
	free(arr2);
	arr1 = NULL;
	arr2 = NULL;
	return ret;
}

void test()
{
	int k= 0;
	scanf("%d", &k);
	int*p=(int*)malloc(sizeof(int) * k);
	int i = 0;
	for (i = 0;i < k;i++)
	{
		scanf("%d", p + i);
	}
	 int*ret=my_classify(p,k);
	 for (i = 0;i < k;i++)
	 {
		 printf("%d ", *(ret+ i));
	 }
	 free(p);
	 p = NULL;
}

int main()
{
	test();
	return 0;
}