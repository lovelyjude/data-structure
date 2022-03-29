#include <stdio.h>

void main() {

	printf("*** 학년별 취득 학점 ***\n\n"); //입력 대기문

	int score[3] = {91,86, 97};//학년당 획득한 총점

	for (int i = 0; i < 3; i++) {//1학년부터 3학년까지 반복작성
		char grade; //등급 생성
		
		if (score[i] >= 90) {
			grade = 'A'; //90점 이상은 A로 설정 
		}
		else grade = 'B'; // 그 이하는 B로 설정
		printf("%d학년 총점: %d 등급: %c\n", i+1, score[i], grade); //작성
	}
		
}