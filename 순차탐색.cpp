#include <stdio.h>
int sequentialSearch(int dataArr[], int length, int findData)
{
	for (int i = 0; i < length; i++)
		if (dataArr[i] == findData) return i;
	return -1;
}

int main()
{
	int arr[] = { 23, 25, 14, 5, 66, 72, 13, 224, 51 };
	int length = sizeof arr / sizeof arr[0];
	int findData = 0;
	int findIndex = 0;

	while (true)
	{
		printf("ã���ô� �����͸� �Է����ּ���: ");
		scanf_s("%d", &findData);

		findIndex = sequentialSearch(arr, length, findData); 
		if (findIndex == -1) printf("�����͸� ã�� ���߽��ϴ�.\n");
		else printf("�����ʹ� %d��°�� �ֽ��ϴ�.\n", findIndex);
	}

	return 0;
}