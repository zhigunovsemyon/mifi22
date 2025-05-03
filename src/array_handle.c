#include "array_handle.h"
#include <assert.h>
#include <malloc.h>
#include <stddef.h>

constexpr int STEP = 32;

int get_array(int ** arr)
{
	if (!arr)
		return -1;

	int len = 0, capacity = 0;
	*arr = nullptr; // Зануление указателя перед началом работы

	do {
		assert(capacity >= 0);
		assert(len >= 0);
		int tmp;
		printf("Введите %d-ое число: ", len + 1);

		/*Если ввод завершён, возврат числа введённых элементов*/
		if (1 != scanf("%d", &tmp))
			return len;

		/*Если место в выделенной памяти заканчивается*/
		if (capacity < len + 1) {
			int * ptr = (int *)realloc(
				*arr, sizeof(int) * (size_t)(capacity += STEP));
			if (!ptr) {
				/*Освобождение памяти старого указателя*/
				free(*arr);
				/*Возврат кода ошибки при нехватке памяти*/
				return -1;
			}
			*arr = ptr;
		}

		assert(*arr != nullptr);
		/*Перезапись крайнего элемента*/
		(*arr)[len++] = tmp;

	} while (true);
}

void print_array(int * arr, int len)
{
	putchar('\n');
	for (int i = 0; i < len; ++i)
		printf("%d ", arr[i]);
	putchar('\n');
}
