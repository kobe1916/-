/*
冒泡排序
原理：每一趟只能确定将一个数归位

总结： 如果有n个数进行排序，只需将n-1个数归位，也就是说要进行n-1趟操作（而每趟需比较n-i次）

核心：双重嵌套循环
*/


#include <stdio.h>
#include <stlib.h>

int main()
{
	int a[100], i, j, t, n;
	printf("请输入你要比较数的个数->\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)	//循环录入元素
		scanf("%d", &a[i]);

	//冒泡排序核心部分
	
	for (i = 0; i <= n - 1; i++)   //i只用来控制趟数,n个数比较n-1趟
		
	{
		for (j = 0; j <= n - i-1; j++)//j控制每趟比较的次数
		//for (j = 1; j <= n - i; j++)
		//因为后边i位已经拍好了，所以只需要比较n-i位
		//从第一位开始比较直到"最后一个未归位"的数，
		{
			//比较大小并交换，最前是最大，将小的往后移
			if (a[j] < a[j + 1])		
			{
				t = a[j];  a[j] = a[j + 1]; a[j + 1] = t;
			}
		}		//从大到小输出  所以用“<”将小的往后排
	}
	for (i = 1; i <= n; i++)		//Output
		printf("%d ", a[i]);
	printf("\n");

	system("pause");

	return 0;

}


//思考：从小到大输出呢？
//将判断条件改为  a[j]>a[j+1]   将大的往后排


//冒泡排序函数实现：
#define N 10
void maopao(int a[])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - i; j++)
		{
			int t;
			if (a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
}

int main()
{
	
	int a[N] = {5,8,2,4,1,6,3,9,7,0};
	
	int i = 0;
	maopao(a);
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}

