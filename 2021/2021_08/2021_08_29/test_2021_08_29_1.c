#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���ַ����Ҵ���

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int sz = sizeof(arr) / sizeof (arr[0]);    //����Ԫ�صĸ���
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("%d\n", mid);   //��ӡ���Ϊ�±꣬������6����7����
			break;
		}
	}
	return 0;
}

