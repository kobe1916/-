//快速排序：基本思想是：通过一趟排序将要排序的数据分割成独立的两部分，其中一部分的所有数据都比另外一部分的所有数据都要小，
//然后再按此方法对这两部分数据分别进行快速排序，整个排序过程可以递归进行，以此达到整个数据变成有序序列。

//递归！！！


int a[101], n;

//先找右，右找小，左找大，相遇则交换
void quicksort(int left, int right)
{
	int i, j, t, temp;
	
	//注意判断条件必不可少
	if (left > right)  
		return;

	
	//temp--基准数
	//通常将最左边的数做为基准数（分割数）
	//通过对调   将小于基准数的数放在基准数左边，大于基准数的数放在基准数的右边
	temp = a[left];		
	i = left;
	j = right;
	while (i != j)
	{
		//顺序很重要，要先从右向左找
		while (a[j] >= temp && i < j)
			j--;
		//再从左向右找
		while (a[i] <= temp && i<j)
			i++;

		//未相遇时 /交换两个数在数组中的位置
		if (i < j)	
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;

		}
	}
	
	//最终将基准数归位
	a[left] = a[j];
	a[i] = temp;

	quicksort(left, i - 1);		//继续处理左边的，这是一个递归过程
	quicksort(i + 1, right);	//继续处理右边的，这是一个递归过程
	return;
}

int main()
{
	int i, j;
	printf("请输入要排序的数的个数:>");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	
	//排序   传入左右数位置
	quicksort(1, n);

	//遍历打印
	for (i = 1; i <= n; i++)
		printf("%d ",a[i]);

	system("pause");
	return 0;
}

