#include <stdio.h>

void main() {

	printf("*** �г⺰ ��� ���� ***\n\n"); //�Է� ��⹮

	int score[3] = {91,86, 97};//�г�� ȹ���� ����

	for (int i = 0; i < 3; i++) {//1�г���� 3�г���� �ݺ��ۼ�
		char grade; //��� ����
		
		if (score[i] >= 90) {
			grade = 'A'; //90�� �̻��� A�� ���� 
		}
		else grade = 'B'; // �� ���ϴ� B�� ����
		printf("%d�г� ����: %d ���: %c\n", i+1, score[i], grade); //�ۼ�
	}
		
}