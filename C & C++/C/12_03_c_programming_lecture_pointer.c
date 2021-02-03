#include <stdio.h>
/*
int main() {
	// ������(pointer): ���� ����(���� ��)�� �ּ�(address)�� �����ϱ� ���� ����
	// �� ������ ���� �����̹Ƿ� �����ؾ� ����� �� �ִ�.
	//	  �����͸� ������ ���� ������ ������(*)�� ����Ѵ�.
	// �� �����͸� �̿��� ���� ����(���� ��)�� ������ �� �ִ�.
	// �� �������� �ڷ����� �����Ͱ� ����Ű�� �ִ� ���� ������ ����Ǿ� �ִ� ���� �ڷ����� ��Ÿ����.

	int num = 10;

	// ������ ����
	int *numPtr;

	// ���� ������(&): ���� ������ �ּҸ� ���ϴ� ������
	// �� ���� �������� �ǿ����ڴ� �ݵ�� ���� ����(���� ��)�̾�� �Ѵ�
	numPtr = &num;

	// %p ���� ������: �ּ�(pointer) ���·� ���(16���� ���·� ���)
	printf("numPtr = %p\n", numPtr);
	printf("&num = %p\n", &num);

	// ������ ������(*): �ּҿ� ����� ���� �����ϱ� ���� ������
	// �� ������ �������� �ǿ����ڴ� �ݵ�� �ּ�(pointer)�̾�� �Ѵ�.
	printf("%d\n", *numPtr); 
	printf("%d\n", num);
	
	// *numPtr
	// ������ numPtr�� ����Ű�� �ִ� ���� ����(= ���� num)�� ����Ǿ� �ִ� ��

	*numPtr = 20;
	// ������ numPtr�� ����Ű�� �ִ� ���� ����(���� num)�� 20�� �����Ѵ�.

	printf("%d\n", *numPtr);
	printf("%d", num);

	return 0;
}
*/

//--------------------------------------------------------------------------------
/*
int main() {

	// �迭(array): ���� �������� ����
	// �迭�� ����(item): �迭�� ������ ���� ����
	// �迭�� �ε���(index): �迭�� ���ҿ� �����ϱ� ���� ����ϴ�, 0���� �����ϴ� ����
	// �迭�� ũ��(length): �迭�� ���ҵ��� ����

	// �迭 ����
	int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	// �߰�ȣ({})�� �������� ���� �Ѳ����� �ʱ�ȭ �����ִ� ������ �ǹ��Ѵ�.


	// ������ ����
	int *ptr;
	char *cptr;
	// ���� ������ ũ��� �� �� 4����Ʈ �� �ڷ����� ������� �ּҴ� �׻� �Ȱ��� ũ�⸦ ������

	int x = 10;
	int y = 20;

	// ���⼭ ptr�� �����̱� ������ �󸶵��� �ٸ� �������(����)�� �Ҵ��� �� �ִ�.
	ptr = &x;
	ptr = &y;

	// �迭 numbers�� �迭 numbers�� �Ҵ�� ���� ������ ���� �ּҸ� ��Ÿ���� �������̴�.
	// �� �׷��� �Ϲ� �����Ϳ� �޸� �迭�� �Ҵ�� ���� ������ ���� �ּҴ� �ٲ� �� ����.
	//	  �迭 numbers�� ����� �ּҴ� �ٲ� �� ����.(���)
	// �� �迭�� ������ �����ϱ� ���ؼ� �ڷ����� �迭�� ũ�⸸ŭ ���� ������ �Ҵ� �޴´�.

	// ������(pointer)
	// 1. �����Ϳ��� �������� ���ο� �ּҸ� ������ �� �ִ�.
	// 2. �����ʹ� �ּҸ� �����ϱ� ���� ���� ����(4����Ʈ)�� �Ҵ�޴´�.

	ptr = numbers;
	// ���⼭ ptr�� numbers�� �ּҸ� ����Ű�Ƿ� ���Կ����ڸ� ���� ������ �����ϴ�
	// numbers�� ���� �ּҸ� ����Ŵ

	printf("numbers = %p\n", numbers);
	printf("ptr = %p\n", ptr);

	printf("*numbers = %d\n", *numbers);
	printf("*ptr = %d\n", *ptr);
	printf("numbers[0] = %d\n", numbers[0]);

	// *numbers
	// (�迭 numbers�� ����Ű�� ���� ����)�� ����� ��
	// (�迭 numbers�� �Ҵ�� ���� ������ ���� �ּҰ� ����Ű�� ���� ����)�� ����� ��
	// (�迭 number�� ù ��° ���ҿ� �Ҵ�� ���� ����)�� ����� ��

	printf("numbers + 1 = %p\n", numbers + 1);
	printf("ptr + 1 = %p\n", ptr + 1);
	// �迭 numbers�� �� ��° ���� ������ �ּҸ� ��Ÿ����.

	// �������� ��� ����(ptr +/- n)
	// + ����: �����Ͱ� ����Ű�� �ִ� �ּҿ��� nĭ��ŭ ������ �̵�
	// - ����: �����Ͱ� ����Ű�� �ִ� �ּҿ��� nĭ��ŭ �ڷ� �̵�
	// �� �ڷ����� ũ�Ⱑ 1ĭ�� ũ�⸦ ����

	printf("*(numbers + 1) = %d\n", *(numbers + 1));

	printf("*(numbers + 3) = %d\n", *(numbers + 3));
	printf("numbers[3] = %d\n", numbers[3]);
	printf("ptr[3] = %d\n", ptr[3]);
	// �� printf("ptr[3] = %d\n", *(ptr + 3));
	
	// *(numbers + 1)
	// �� (�迭 numbers�� ����Ű�� ���� �������� �� ĭ �̵��� ���� ����)�� ����Ǿ� �ִ� ��
	// �� �迭 numbers�� �� ��° ������ ��
	
	// numbers[3]
	// �� *(numbers + 3)
	// �� (�迭 numbers�� ����Ű�� ���� �������� �� ĭ �̵��� ���� ����)�� ����Ǿ� �ִ� ��
	// �� �迭 numbers�� �� ��° ������ ��

	return 0;
}
*/

//-----------------------------------------------------------------------------------------
/*
// ���ڿ��� ���̸� ���ϴ� �Լ� str_len
// �Ű�����: ���̸� ���ϰ��� �ϴ� ���ڿ� �迭(char *)
// �� �Լ��� ȣ��� ������ ����Ǵ� �����μ�, �Լ��� ȣ���� �� �����ϴ� ��(����)�� �ʱ�ȭ�ȴ�.
// ��ȯ ��: ���ڿ��� ����(int)

int str_len(const char* ptr)
// char *ptr = str;
{
	int length;

	// ptr[0] = 0;
	// �� *(ptr + 0) = 0;
	// �� *ptr = 0;

	for (length = 0; ptr[length] != 0; length++);

	return length;
}

int main() {

	// ���ڿ��� �����ϱ� ���� �迭 ����
	char str[81] = "Hello Wolrd!";

	// ���ڿ��� ���̸� ������ ����
	int length;

	// ���ڿ��� ���� ���
	for (length = 0; str[length] != 0; length++);

	// ���
	printf("str = \"%s\"\n", str);
	printf("length = %d\n", length);
	printf("str_len(str) = %d\n", str_len(str));

	return 0;
}
*/

