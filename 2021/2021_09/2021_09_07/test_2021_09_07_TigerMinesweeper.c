#include "game.h"

void menu()
{
	printf("********ɨ����Ϸ*********\n");
	printf("******** 1.play ********\n");
	printf("******** 2.exit ********\n");
	printf("************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };    //�����׵�λ�õ� ����
	char show[ROWS][COLS] = { 0 };    //����չʾ����ҵ�ҳ�� ������
	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
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