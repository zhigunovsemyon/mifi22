#ifndef ARRAY_HANDLE_H_
#define ARRAY_HANDLE_H_

/* Ввод пользователем массива целых чисел.
 * Выделяет память, перезаписывает переданный указатель.
 * Возвращает размер массива, либо -1 при ошибке*/
int get_array (int **);

void print_array (int *, int len);

#endif 
