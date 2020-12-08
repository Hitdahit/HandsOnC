#include <stdio.h>
#define SWAP(a, b, t){ t=a; a=b; b=t;}
void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	return;
}

int main(void)
{
	//변수 선언
	int a=1;
	printf("%d\n", a);

	//변수입력
	int b;
	scanf_s("%d", &b);
	printf("%d\n", b);

	//if
	char c = '+';
	if (c == '+') {
		printf("%d\n", a + b);
	}
	else if (c == '*') {
		printf("%d\n", a * b);
	}
	else {
		printf("이게 if");
	}

	//for

	for (int i = 0; i < a * b; i++) {
		printf("%d", i);
	}
	printf("\n");
	int i;
	for (i = a*b; i > 0; i--) {
		printf("%d", i);
	}
	printf("\n");

	//while
	int tmp = 0;
	while (tmp < a * b) {
		
		if (tmp == int(a * b / 2)) printf("%d\n", tmp);
		tmp++;
	}

	//function
	printf("before function: %d %d\n", a, b);
	swap(&a, &b);
	printf("after function: %d %d\n", a, b);
	
	//Macro
	printf("before macro: %d %d\n", a, b);
	int d;
	SWAP(a, b, d);
	printf("after macro: %d %d\n", a, b);

	return 0;
}
