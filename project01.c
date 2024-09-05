#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_PRODUCTS 100

int main()
{
	int count;
	int stock[MAX_PRODUCTS];
	int id, sold, i;
	int total = 0;

	do {
		printf("��ǰ ����(����)�Է� (1 ~ 100): ");
		scanf("%d", &count);
	} while (count < 1 || count > 100);

	printf("�� ��ǰ �� �԰���� �Է�: \n");
	for (i = 0; i < count; i++) {
		printf("��ǰ ID %d�� �԰� ����: ", i + 1);
		scanf("%d", &stock[i]);
		total += stock[i];
	}

	printf("���� �Ǹ� ������ �Է�:\n");
	for (i = 0; i < count; i++) {
		printf("��ǰ ID %d�� �Ǹ� ����: ", i + 1);
		scanf("%d", &sold);
		if (sold <= stock[i]) {
			stock[i] -= sold;
			total -= sold;
		} else {
			printf("�Ǹ� ������ ����� ����. �ִ� �Ǹ� ���� ����: %d\n", stock[i]);
		}
	}

	while (1) {
		printf("��� ������ Ȯ���� ��ǰ ID�� �Է� (1 ~ %d, ����� 0): \n", count);
		scanf("%d", &id);

		if (id == 0) {
			break;
		}
		else if (id > 0 && id <= count) {
			printf("��ǰ ID %d�� ���� ��� ����: %d\n", id, stock[id - 1]);
			printf("��ü ���� ��� ����: %d\n", total);
		}
		else {
			printf("�߸��� ID�Դϴ�. �ٽ� �Է�\n");
		}
	}



	return 0;
}