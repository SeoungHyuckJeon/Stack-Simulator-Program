#include <stdio.h>
#include <stdlib.h>
#define SIZE 6								//���� ũ��

int top=(0);									//������ ����Ű�� ��ġ
int stack[SIZE] = { 0, };

void showStack();
void searchData(int i);

void clearScreen()							//ȭ�����찳
{
	system("clear");
}

void wait()									//Ű������ ������ ���
{
	printf("     Press any key\n");
	fflush(stdin);
	getchar();
}

void menu()									//���θŴ�
{
		clearScreen;
		puts("----- Stack Simultation Program -----\n");
		puts("     Push Data     ---------(1)");
		puts("     Pop Data      ---------(2)");
		puts("     Show Stack    ---------(3)");
		puts("     Search Data   ---------(4)");
		puts("     Quit Program  ---------(5)\n");
}

int isnegative(int x)						//�Ű� ������ ���� ������ �������� �Ǻ�
{
	if (x >= 0) return 0;
	else return 1;
}

int isEmpty()							//����Ű�� ������ ����ִ��� Ȯ��
{
	if (stack[top] == 0) return 1;
	else return 0;
}

int isFull()							//������ ���� á���� Ȯ��
{
	top == SIZE-1;

	if (stack[top] == 0) return 0;	//������� 0 �ƴϸ� 1 ����
	else return 1;
}

int push(int x)							//�Է¹��� ���� ���ÿ� �ֱ�
{
	top++;
	scanf_s("%d", &stack[top]);
	isnegative(stack[top]);
	if (isnegative == 1)
	{
		puts("Error : You entered negative number, Please Enter positive number.");
		stack[top] = 0;
		top--;
		return 0;						//�־����� 1, ���־����� 0 ����
	}
	else
	{
		return 1;
	}
}

int pop()								//����Ű�� ���� ���� ���
{
	if (isEmpty()==1)
	{
		puts("Error : Stack is empty.");
		return -1;						//�������� ����Ű�� ���� ��, ���������� -1 ���� 
	}
	else
	{
		return stack[top];
		top--;
	}

}

void showStack()						//���� ��� ���� ���
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

void searchData(int i)					//Ư�� �� ã��
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