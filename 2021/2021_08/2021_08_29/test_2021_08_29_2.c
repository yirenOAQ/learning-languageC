#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
	char arr1[] = "welcome to njupt!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		system("cls");      //Çå¿ÕÆÁÄ»
		printf("%s\n", arr2);
		Sleep(1000);		//ÐÝÖ¹1000ms
		left++;
		right--;
	}
	return 0;
}