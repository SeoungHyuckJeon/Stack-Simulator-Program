#include <stdio.h>
#include <stdlib.h>
#define SIZE 5;								//스택 크기

int top;									//스택을 가리키는 위치

void clearScreen()							//화면지우개
{
	system("clear");
}

void wait()									//키누르기 전까지 대기
{
	printf("     아무키나 누르세요.\n");
	fflush(stdin);
	getchar();
}

void menu()									//메인매뉴
{
	int Select;
	for (;;)
	{
		clearScreen;
		puts("----- Stack Simultation Program -----\n");
		puts("     Push Data     ---------(1)");
		puts("     Pop Data      ---------(2)");
		puts("     Show Stack    ---------(3)");
		puts("     Search Data   ---------(4)");
		puts("     Quit Program  ---------(5)\n");
		printf("Select Work(1~5) : ");
		scanf_s("%d", &Select);

		switch(Select)
		{
			case 1:
				push;
				break;
			case 2:
				pop;
				break;
			case 3:
				showStack;
				break;
			case 4:
				searchData;
				break;
			case 5:
				exit(0);
			default:
				puts("Please Enter The Correct Number");
				wait;
				break;
		}
	}
}

int isnegative(int)						//매개 변수로 받은 정수가 음수인지 판별
{
	int x;
	if (x >= 0) return 0;
	else return 1;
}

int isEmpty()							//가리키는 스택이 비어있는지 확인
{

}

int isFull()							//스택이 가득 찼는지 확인
{
	int top;
	top == SIZE - 1;

	if (stack(top) == NULL) return 0;
	else return 1;
}

int push(int)							//입력받은 정수 스택에 넣기
{
	scanf_s("%d", &stack(top));
	isnegative(int stack[top]);
	if (isnegative == 0)
	{
		puts("Error : You entered negative number, Please Enter positive number.");
		stack[top] = 0;
	}
	else top++;
}

int pop()								//가리키는 스택 내용 출력
{
	top--;
	if (top < (-1))
	{
		puts("Error : Stack is empty.");
		top = top - 1;
		return -1;
	}
	else
	{
		printf("%d\n", stack[top + 1]);
		return 0;
	}

}

void showStack()						//스택 모든 내용 출력
{
	if (isEmpty() = 1)
		puts("Stack is Empty.");
	else
	{
		for (;;)
		{
			if (top == -1) break;
			else
			{
				printf("%d", stack[top]);
				top--;
			}
		}
	}
}

void searchData(int)
{
	int i;
}

void main()
{
	menu;

}