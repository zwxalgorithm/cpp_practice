# include <stdio.h>

int main(void)
{
	char ch = 'A';
	int i = 99;
	double x = 66.6;
	float f = 0.1;
	char * p = &ch;
	int * q = &i;
	double * r = &x;

	printf("%d %d %d\n", sizeof(p), sizeof(q), sizeof(r)); //分别输出不同类型的指针变量名占多少字节。
	printf("float = %d, double = %d\n", sizeof(f), sizeof(x));

	return 0;
}
