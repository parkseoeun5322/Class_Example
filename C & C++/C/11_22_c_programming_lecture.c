#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main() {
	//-------------------------------------------------------------------------------------
	//�������� (2)
	//	ö���� ����� 5������ ������ �ִ� �� ��� ���࿡ �����ߴµ� ö���� �� ������ 5%�� ��ǰ��
	//	����� �� ������ ���� 3%�� ��ǰ�� �����ߴ� ������ ���ݾ��� ö���� ���ݾ׺��� �� Ŀ���°��� ��� ���ΰ�?

		// ö���� ���� ���� �뵷(����)
	const int original = 50000;

	// ö���� ����(�ܸ�)
	const double interest_c = 0.05;

	// ������ ����(����)
	const double interest_y = 0.03;

	// ö���� �ܰ�(���ݾ�) �� �ʱ�ȭ
	double balance_c = original;

	// ������ �ܰ�(���ݾ�) �� �ʱ�ȭ
	double balance_y = original;

	// ����� ������ �� ������ ����
	int year = 0;

	// �ݺ����� �̿��ؼ� ö���� �ܰ��� ������ �ܰ����� �� ū ����
	//�� ����� �ܰ��� ����ϰ�, 1�⾿ ������Ų��

	do {

		// ö���� �ܰ� ���
		balance_c += original * interest_c;

		// ������ �ܰ� ���
		balance_y += balance_y * interest_y;

		// 1���� ����
		year++;

		// �ظ��� ö���� ������ �ܰ� ���
		printf("%d�� �� ö���� ���ݾ� : %d, ������ ���ݾ� : %d\n",
			year, (int)balance_c, (int)balance_y);

	} while (balance_c > balance_y);

	printf("\n\n%d�� �� ������ ���ݾ��� ö���� ���ݾ׺��� �� �������ϴ�.\n", year);

	return 0;
}
*/

//-------------------------------------------------------------------------------------
/*
int main () {
	// �������� : �Ʒ� �׸��� ���� 2�ܺ��� 9�ܱ��� �������� ����ϴ� ���α׷��� �ۼ��϶�

	// ���� ����
	// �ε��� ���� ����
	// �� �Ϲ������� �ε��� ������ index�� ù ���ڸ� ���� i�� ���´�
	// �ε��� ������ �� �ʿ��� ���� i���� �����ؼ� j, k, l, n ... �� ���� ���´�


	int i, j;
	// ��ø �ݺ����� �̿��� ������ ���
	// �ٱ��� �ݺ����� �ε��� ������ ���� �ݺ����� �ε��� ������ ���� �ٲ�鼭
	// �� �ε��� ������ ���� �������� ���� �ȴ�

	// �ٱ��� �ݺ����� �̿��� ���� ��(y��)�� ǥ��
	// �� i = 1, 2, 3, 4, 5, 6, 7, 8, 9;

	for (i = 1; i <= 9; i++) {

		// ���� �ݺ����� �̿��� ���� ��(x��)�� ǥ��
		// �� j = 2, 3, 4, 5, 6, 7, 8, 9;

		for (j = 2; j <= 9; j++)

			// �� �ε��� ������ ���� ���
			printf("|%4d|", i * j); //4ĭ ¥�� �����ͷ� ���

		// ���� �ݺ������� ���ο� �࿡�� ��µ� �� �ֵ��� ����
		printf("\n");
	}

	// �� ���ߴ� ���
	// �� printf (print formatted) 
	// �� ���� ���ڿ��� �̿��� ����ϴ� ���� ���¸� ������ �� �ִ�.

	// ��� �� ����
	printf("|1234567890|\n");
	printf("|%10d|\n", 10); // 10ĭ ¥�� �����ͷ� ��� �� ������ ��쿡�� ������ ���� ����
	printf("|%-10d|\n", 10); // ĭ �� �տ� -�� ���̰� �Ǹ� ���� ���� ����
	printf("|%010d|\n", 10); // ��ĭ�� 0���� ä��


	return 0;
}
*/