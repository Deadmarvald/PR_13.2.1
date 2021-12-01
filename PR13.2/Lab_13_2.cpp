// Lab_13_2.cpp
// Вольвенко Іван
// Лабораторна робота № 13.2(частина 1)
// Директиви препроцесора
// Варіант 13

#include <stdio.h>
#include <conio.h>
#include <math.h>

#define Z 2

#define QUB(x) (x)*(x)*(x)

#define PRINTI(w) puts("control output"); \
        printf(#w"=%d\n",w)

#define PRINTR(w) puts ("rezult :"); \
        printf (#w"=%f\n",(float)w)

#define SUMABS(x,y,z) abs(x)+abs(y)+abs(z)

#define MIN(x,y) ((x)<(y))?(x):(y)

#define VIR1(x,y) 2*x+y

#define VIR21(y, z) 2*y-z

#define VIR22(x) (x)*(x)

#define MAX(y,z) ((y)>(z))?(y):(z)

int main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, z,
		min,
		max,
		sum_abs,
		x_kub,
		viraz_1,
		viraz_2_1,
		viraz_2;
	char y_n;

	do {
        #if Z>1 && Z<3
		{
			puts("define minimum of two numbers");
			puts("Input 3 integer numbers");
			scanf_s("%d", &x);
			PRINTI(x);
			scanf_s("%d", &y);
			PRINTI(y);
			scanf_s("%d", &z);
			PRINTI(z);
			sum_abs = SUMABS(x, y, z);
			PRINTI(sum_abs);
			x_kub = QUB(x);
			PRINTI(x_kub);
			min = MIN(sum_abs, x_kub);
			PRINTR(min);
		}
        #endif

        #if Z>3
		{
			puts("define maximum of two numbers");
			puts("input 3 integer numbers");
			scanf_s("%d", &x);
			PRINTI(x);
			scanf_s("%d", &y);
			PRINTI(y);
			scanf_s("%d", &z);
			PRINTI(z);
			viraz_1 = VIR1(x, y);
			PRINTI(viraz_1);
			viraz_2_1 = VIR21(y, z);
			viraz_2 = VIR22(viraz_2_1);
			PRINTI(viraz_2);
			max = MAX(viraz_1, viraz_2);
		}
        #endif

		puts("Repeat? y/n"); y_n = _getch();
	} while (y_n == 'y');
}