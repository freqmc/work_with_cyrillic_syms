#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	system("chcp 1251");// ������������� ������� �������� Windows-1251 ��� ����������� ����������� ��������� 
	wchar_t str[100];// ���������� wchar_t ("����������� char"), ��� ��� ��������� �������� �� 2 �����.
	int counter = 0;
	int start = 0;
	int end = strlen(str) - 1;
	printf("������� �����������:\n");
	fgetws(str, 100, stdin);// ���������� fgetws ��� ���������� �������� � wchar_t
	while (str[start] != ' ' && str[start] != '\0') {
		start++;
	}
	while (str[end] != ' ') {
		end--;
	}
	for (int k = start; k < end; k++) {
		if (iswalpha(str[k])) {// ���������� iswalpha ��� ������������� ���� ���������
			counter++;
		}
	}
	printf("%d", counter);
}