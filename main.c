#include <stdio.h>
#include <stdlib.h>
#define SIZE 5;								//스택 크기


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














void main()
{
	menu;

}