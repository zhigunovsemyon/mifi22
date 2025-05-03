#ifndef ARMSTRONG_H_
#define ARMSTRONG_H_

/*Возможный результат функции*/
enum ArmstongResult {
	ARMSTRONG_FALSE = 0,
	ARMSTRONG_TRUE = 1,
	ARMSTRONG_FAIL = -1
};

/*Функция проверки числа*/
enum ArmstongResult check_armstrong(int num, int * sum);

#endif // !ARMSTRONG_H_
