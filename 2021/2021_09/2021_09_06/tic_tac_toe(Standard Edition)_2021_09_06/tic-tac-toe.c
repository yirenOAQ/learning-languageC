#include "game.h"
void menu()
{
	printf("************************\n");
	printf("******** 1.play ********\n");
	printf("******** 2.exit ********\n");
	printf("************************\n");
}

void game()
{
	char board[ROW][COL];  //�洢���ݣ���ά����
	InitBoard(board, ROW, COL); //��ʼ������
	DisplayBoard(board, ROW, COL); // ��ӡ����
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			input -= 2;
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}