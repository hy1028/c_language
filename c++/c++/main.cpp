# if 0
#include <stdio.h>
# define HUNGRY  0x01
# define THIRSTY 0x02
# define TIRED   0x04
# define FIRE    0x08
# define COLD    0x10
# define POISON  0x20
// 전처리기(define) 1. 가독성 2. 유지보수

// 전역변수
int Add(int left, int right)
{
	return left + right;
}

int main()
{
	// 자료형 (크기 단위, byte / 1byte는 8bit이다.) Data Type
	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형 : float, double
	/*
	int i = 0;
	unsigned char c = 0; // 1바이트는 0~255까지표현가능, unsigned는 양수만을 의미함

	char c1 = 0; // 1바이트로 양수, 음수 둘다 표현. -128 ~ 0 ~ 127 표현 가능
	c1 = -1;

	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후(0은 1로, 1은 0으로 반전), 1을 더한다.

	// 정수 표현 방식과 실수 표현 방식은 다르다
	// 실수 표현 방식은 정밀도에 의존한다.
	// 따라서 double(8) 자료형이 float(4) 보다 더 아래의 소수점까지 정확하게 표현이 가능하다.

	// 정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현 방식의 피 연산자가 연산될 경우 명시적으로 변환하자.

	float f = 10.2415f + (float)20; // (float)는 없어도 자연스레 실수 연산을 하지만 명시적으로 변환하는 것이 좋다.

	// .뒤에 f 붙이면 float, 안붙이면 double type으로 본다.


	// 연산자
	// 대입 연산자, =

	// 산술 연산자
	// +, -, *, /, %(모듈러스, 나머지)
	// ++, -- (증감연산자)
	// 증감연산자를 후위연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀린다.

	int data = 10;
	data = (int)(10. / 3.);

	int iTrue = 0;
	iTrue = !iTrue;

	iTrue = 0 && 200;
	iTrue = 0 || 0;


	// 논리 연산자
	// !(역), &&(and), ||(or)
	// 참(true), 거짓(false)
	// 참은 0 이 아닌 값, 보통 1을 의미한다.
	bool truefalse = false; // bool 자료형

	// 구문
	// if, else
	if (0 && 200)
	{
		data = 100;
	}
	else
	{
		data = 0;
	}

	// switch case
	// break를 잡아주지 않으면 해당 case 이후 default까지 실행된다.
	int iTest = 20;
	switch (iTest)
	{
	case 10:

		break;
	case 20:

		break;
	default:

		break;
	}

	// 삼항 연산자
	// :?

	iTest == 20 ? iTest = 100 : iTest = 200;
	// iTest가 20이면 iTest에 100을 넣고 아니면 200을 넣는다.
	// if else 구문으로 작성하면 길어질 내용을 간결하게 작성할 수 있다. 가독성이 떨어져 자주 쓰진 않는다.

	// 비트 연산자
	// 쉬프트 <<, >>
	unsigned char byte = 1;

	byte <<= 1; // 왼쪽으로 1칸 쉬프트, 2^1배 증가한다.(2^n 배수)
	byte >>= 1; // 2^n 나눈 몫만 남는다. 

	// 비트 곱(and, &), 합(or, |), xor(^), 반전(~)
	// 비트 단위로 연산을 진행,
	// & 둘 다 1인 경우 1
	// | 둘중 하나라도 1이면 1
	// ^ 같으면 0, 다르면 1
	// ~ 1은 0으로, 0은 1로

	unsigned int iStatus = 0;

	// 상태 추가
	iStatus |= HUNGRY;
	iStatus |= THIRSTY;

	// 상태 확인
	if (iStatus & THIRSTY)
	{
		 
	}

	// 특정 자리 비트 제거(암기하는게 좋음)
	iStatus &= ~THIRSTY; // 반전시켜 곱 연산 해주면 된다.
	

	// 변수
	// 1. 지역변수
	// 2. 전역변수
	// 3. 정적변수
	// 4. 외부변수

	// 지역변수
	int iName = 0;
	// 괄호 안에 선언된 변수(함수, 지역)
	{
		// 변수명 규칙
		int iName = 100;

		iName; // 100을 의미한다.
	}

	// 함수
	data = Add(10, 20); // 가장 앞부분에전역변수로 ADD를 선언했다.
	*/

	// 반복문
	// for (/*반복자 초기화*/; /*반복자 조건 체크*/; /*반복자 변경*/)

	/*for (int i = 0; i < 2; ++i)
	{
		printf("Output Test\n");

		continue; // 다음 반복횟수로 넘어간다

		break; // 반복을 멈추고 반복문을 나간다
	}*/

	/*int i = 0;
	while (i < 2)
	{
		printf("Output Test\n");
		i++;
	}*/
	
	return 0;
}
#endif


// 단축키
// 지정한 구문 주석			: Ctrl + k, c
// 지정한 구문 주석 해제		: Ctrl + k, u
// Alt Drag


// 디버깅
// 디버깅 시작			: F5
// 중단점 생성 및 해제	: F9
// 디버깅 중, 구문 수행   : F10
// 디버깅 중, 구문 수행(함수 진입) : F11 ( 더 세부적임 )
// 디버깅 중, 디버깅 종료하기 : shift + F5

#if 0
#include <stdio.h>
int main() {
	// 콘솔 
	// printf
	printf("abcdef %d \n", 10);
	printf("abcdef %f \n", 3.14f);

	for (int i = 0; i < 10; i++)
	{
		printf("Output i : %d\n", i);
	}
	// scanf
	int iInput = 0;
	scanf_s("%d", &iInput);
	//printf("%d", iInput);

	// 함수가 사용하는 메모리 영역
	// 스택 메모리 영역

	return 0;
}
#endif

#if 1
#include <stdio.h>
// 함수 
// Factorial
int Factorial(int _iNum)
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2);
	}
	return iValue;
}

// 재귀함수



int main() {
	int iValue = Factorial(4);

	return 0;
}
#endif

