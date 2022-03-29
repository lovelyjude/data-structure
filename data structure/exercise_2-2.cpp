#include <stdio.h>

void main() {

	printf("*** 학년별 취득 학점 ***\n\n");

	int score[3] = {91,86, 97};

	for (int i = 0; i < 3; i++) {
		char grade;
		
		if (score[i] >= 90) {
			grade = 'A';
		}
		else grade = 'B';
		printf("%d학년 총점: %d 등급: %c\n", i+1, score[i], grade);
	}
		
}