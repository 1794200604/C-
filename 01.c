/*��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�*/

#include<stdio.h>

int main(void)
{
	int i, j, k;
	int count = 0;
	
	printf("��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�\n");
	
	for (i = 1; i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			for (k = 1; k < 5; k++)
			{
				if (i != j && i != k && j != k)
				{
					printf("%d %d %d\n", i, j, k);
					count++;
				}
			}
		}
	}
	printf("��������ϸ���:%d", count);

	return 0;
}








