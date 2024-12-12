#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	system("chcp 1251");// Устанавливаем кодовую страницу Windows-1251 для корректного отображения кириллицы 
	wchar_t str[100];// Используем wchar_t ("расширенный char"), так как кириллица занимает по 2 байта.
	int counter = 0;
	int start = 0;
	int end = strlen(str) - 1;
	printf("Введите предложение:\n");
	fgetws(str, 100, stdin);// Используем fgetws для считывания символов с wchar_t
	while (str[start] != ' ' && str[start] != '\0') {
		start++;
	}
	while (str[end] != ' ') {
		end--;
	}
	for (int k = start; k < end; k++) {
		if (iswalpha(str[k])) {// Используем iswalpha для распознавания букв кириллицы
			counter++;
		}
	}
	printf("%d", counter);
}