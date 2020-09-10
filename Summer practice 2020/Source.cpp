/** @file Summer practice 2020.sln
*  @author Удовиченко В.Р, гр. 515-В, Задание 18
*  @date 02.07.20
*  @brief Практика
*
*  База данных Книг
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int q;
int main(void)
{
	char v[12][150];

	setlocale(LC_ALL, "Russian");
	FILE* f;
	f = fopen("practice.txt", "r");
	for (int i = 0; i < 12; i++)
	{
		NULL != fgets(v[i], 150, f);
	}

	fclose(f);
	for (int inf = 1; inf < 999; inf++) {
		printf("                   Меню      \n              Выберите операцию\n1:Поиск книги по номеру. 2:Вывести все книги посвященные языку Си.\n");
		scanf_s("%i", &q);
		if (q < 1 || q>2) printf("Ошибка");
		else
		{
			if (q == 1)
			{
				q = 0;
				printf(" Введите номер книги:");
				scanf_s("%i", &q);
				if (q < 1 || q > 12)
				{
					printf("Ошибка");
				}
				else
				{
					q = q - 1;
					printf("%s ", v[q]);
				}
			}
			else
			{
				printf("Все книги посвященные языку Си\n");
				printf("%s%s%s", v[1], v[5], v[8]);

			}
		}
		printf("\n\n\n");
	}
}

