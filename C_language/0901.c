# if 0
#include <stdio.h>
int main() {
	int a = 10;
	char c = 10;
	printf("Hello World\n");

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main() {
	int a = 10;
	int b = 20;
	int c;
	c = a + b;

	printf("%d + %d = %d", a, b, c);


	return 0;
}
#endif

#if 0
#include <stdio.h>

int main() {
	int a;
	char ch;
	a = 10;
	ch = "AB";
	
	return 0;
}
#endif

#if 0
#include <stdio.h>
int main() {
	int a = 0x5555, b = 0x00ff;
	printf("a = 0x%x, b = 0x%04x\n", a, b);
	printf("~a = 0x%x, ~b = 0x%04x\n", ~a, ~b);

	printf("a & b = 0x%04x\n", a & b);
	printf("a | b = 0x%04x\n", a | b);
	printf("a ^ b = 0x%04x\n", a ^ b);

	return 0;
}
#endif


#if 0
#include <stdio.h>

int main() {
	int a = 1;
	printf("a << 1 = %d\n", a << 1);
	printf("a << 2 = %d\n", a << 2);
	a = 8;
	printf("a >> 1 = %d\n", a >> 1);
	printf("a >> 2 = %d\n", a >> 2);

	return 0;
}
#endif 

#if 0
#include <stdio.h>
int main() {
	int i;
	int flag[4] = { 0, };
	flag[0] = 1;
	flag[3] = 1;

	for (i = 0; i < 4; i++) {
		if (flag[i] != 0){
			printf("%d\n", i);
		}
	}
	printf("-----------------\n");
	flag[3] = 0;

	for (i = 0; i < 4; i++) {
		if (flag[i] != 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}
#endif 


#if 0
#include <stdio.h>
int main() {
	int i;
	int flag = 0;

	//flag[0] = 1;
	flag = flag | 1;
	//flag[3] = 1;
	flag = flag | 8;

	for (i = 0; i < 4; i++) {
		if (flag & (1<<i)) {
			printf("%d\n", i);
		}
	}
	printf("-----------------\n");
	//flag[3] = 0;
	flag = flag ^ 8;
	// flag = flag & ~8 // ~8은 2진수 표현시 7이라는 의미임

	for (i = 0; i < 4; i++) {
		if (flag & (1 << i)) {
			printf("%d\n", i);
		}
	}
	return 0;
}
#endif 

#if 0
#include <stdio.h>
int main() {
	int i;
	int flag[32] = { 0, };

	// flag = flag | 1;
	// 67번째방에 값 넣기
	//flag[67/32] = flag[67 / 32] | 1 << (67 % 32);

	flag[700/32] |= 1 << (700 % 32);
	flag[800/32] |= 1 << (800 % 32);


	for (i = 0; i < 1024; i++) {
		if (flag[i/32] & (1 << (i%32))) {
			printf("%d\n", i);
		}
	}
	printf("-----------------\n");

	flag[800 / 32] ^= 1 << (800 % 32);

	for (i = 0; i < 1024; i++) {
		if (flag[i / 32] & (1 << (i % 32))) {
			printf("%d\n", i);
		}
	}

	return 0;
}
#endif 


#if 0
#include <stdio.h>

#define BIT_SET(x, index) ( x[index / 32] |= 1 << (index % 32) )
#define BIT_ISSET(x, index) ( x[index / 32] & ( 1 << (index % 32)))
#define BIT_CLEAR(x, index) ( x[index / 32] ^= (1 << (index % 32)))
int main() {
	int i;
	int flag[32] = { 0, };

	BIT_SET(flag, 700);
	BIT_SET(flag, 800);

	for (i = 0; i < 1024; i++) {
		if (BIT_ISSET(flag, i)) {
			printf("%d\n", i);
		}
	}
	printf("-----------------\n");

	BIT_CLEAR(flag, 800);

	for (i = 0; i < 1024; i++) {
		if (BIT_ISSET(flag, i)) {
			printf("%d\n", i);
		}
	}

	return 0;
}
#endif 

#if 0
#include <stdio.h>

int main() {
	int x = 3, y = 2, z = 3;
	int k = x > y ? x : y;
	printf("%d\n", x > y ? x : y); // x > y가 참이면 x값, 거짓이면 y값
	printf("%d\n", k);
	return 0;
}
#endif 

#if 1
#include <stdio.h>

int main() {
	int i, array[5] = { 0, };
	for (i = 0; i < 5; i++) {
		array[i] = i + 1;
	}
	//hayeon
	return 0;
}
#endif