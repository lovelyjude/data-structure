#include <stdio.h>

void main() {
	char c, c_array[100];
	int i, i_array[100];
	short s, s_array[100];
	float f, f_array[100];
	long l, l_array[100];
	int a;

	printf("\n char c ũ�� = %d \t: char c_array ũ�� = %4d", sizeof(c), sizeof(c_array));
	printf("\n int i ũ�� = %d \t: int i_array ũ�� = %4d", sizeof(i), sizeof(i_array));
	printf("\n short s ũ�� = %d \t: int short s_array ũ�� = %4d", sizeof(s), sizeof(s_array));
	printf("\n float f ũ�� = %d \t: int float f_array ũ�� = %4d", sizeof(f), sizeof(f_array));
	printf("\n long l ũ�� = %d \t: int long l_array ũ�� = %4d", sizeof(l), sizeof(l_array));

	getchar();
}