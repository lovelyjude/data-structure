#include <stdio.h>

void main() {

	printf("*** �г⺰ ��� ���� ***\n\n");

	int score[3] = {91,86, 97};

	for (int i = 0; i < 3; i++) {
		char grade;
		
		if (score[i] >= 90) {
			grade = 'A';
		}
		else grade = 'B';
		printf("%d�г� ����: %d ���: %c\n", i+1, score[i], grade);
	}
		
}