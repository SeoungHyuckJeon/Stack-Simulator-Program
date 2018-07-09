#include <stdio.h>
#include <stdlib.h>
#define SIZE 6								//스택 크기

int top=(0);									//스택을 가리키는 위치
int stack[SIZE] = { 0, };

void showStack();
void searchData(int i);

void clearScreen()							//화면지우개
{
	system("clear");
}

void wait()									//키누르기 전까지 대기
{
	printf("     Press any key\n");
	fflush(stdin);
	getchar();
}

void menu()									//메인매뉴
{
		clearScreen;
		puts("----- Stack Simultation Program -----\n");
		puts("     Push Data     ---------(1)");
		puts("     Pop Data      ---------(2)");
		puts("     Show Stack    ---------(3)");
		puts("     Search Data   ---------(4)");
		puts("     Quit Program  ---------(5)\n");
}

int isnegative(int x)						//매개 변수로 받은 정수가 음수인지 판별
{
	if (x >= 0) return 0;
	else return 1;
}

int isEmpty()							//가리키는 스택이 비어있는지 확인
{
	if (stack[top] == 0) return 1;
	else return 0;
}

int isFull()							//스택이 가득 찼는지 확인
{
	top == SIZE-1;

	if (stack[top] == 0) return 0;	//비어있음 0 아니면 1 리턴
	else return 1;
}

int push(int x)							//입력받은 정수 스택에 넣기
{
	top++;
	scanf_s("%d", &stack[top]);
	isnegative(stack[top]);
	if (isnegative == 1)
	{
		puts("Error : You entered negative number, Please Enter positive number.");
		stack[top] = 0;
		top--;
		return 0;						//넣었으면 1, 못넣었으면 0 리턴
	}
	else
	{
		return 1;
	}
}

int pop()								//가리키는 스택 내용 출력
{
	if (isEmpty()==1)
	{
		puts("Error : Stack is empty.");
		return -1;						//꺼냈으면 가리키는 스택 값, 못꺼냈으면 -1 리턴 
	}
	else
	{
		return stack[top];
		top--;
	}

}

void showStack()						//스택 모든 내용 출력
{
	if (stack[top]==0)
		puts("Stack is Empty.");
	else
	{
		for (;;)
		{
			if(top!=0)
			{
				printf("%d", stack[top]);
				top--;
			}
			else break;
		}
	}
}

void searchData(int i)					//특정 값 찾기
{
	if (isEmpty() == 1)
	{
		puts("Stack is Empty");
	}
	else
	{
		printf("Enter the search data : ");
		scanf_s("%d", &i);
		for (;;)
		{
			top--;
			if (stack[top] == i);
			{
				printf("%d is entered at stack %d\n", i, top);
				break;
			}
			if (top == (0))
			{
				puts("No found");
				break;
			}
		}
	}
}

void main()
{
	int Select;
	int i = 0;
	for (;;)
	{
		menu();
		printf("Select Work(1~5) : ");
		scanf_s("%d", &Select);

		switch (Select)
		{
		case 1:
			printf("Enter integer to push : ");
			scanf_s("%d", &i);
			push(i);
			break;
		case 2:
			pop();
			break;
		case 3:
			showStack();
			break;
		case 4:
			searchData(i);
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