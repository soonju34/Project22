#include <stdio.h>

void swap_ptr(char** x, char** y)
{
	char* tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(void)
{
	char* s1 = "ABCD";		
	char* s2 = "EFGH";		

	printf("������ s1�� \"%s\"�� ����ŵ�ϴ�.\n", s1);
	printf("������ s2�� \"%s\"�� ����ŵ�ϴ�.\n", s2);

	swap_ptr(&s1, &s2);

	puts("\n������ s1�� s2�� ���� ���� �ٲپ����ϴ�.\n");

	printf("������ s1�� \"%s\"�� ����ŵ�ϴ�.\n", s1);
	printf("������ s2�� \"%s\"�� ����ŵ�ϴ�.\n", s2);

	return 0;
}