#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string>
#include <time.h>
#include <Windows.h>



const int CLASS_Scene = 0;
const int INVENTORY_Scene = 1;
const int EQUIPMENT_Scene = 2;
const int SHOP_Scene = 3;
const int HUNTING_Scene = 4;


void CLASS();
void INVENTORY();
void EQUIPMENT();
void SHOP();
void HUNTING();



int main(void)
{

	system("mode con:cols=120 lines=30");

	system("title ��α� Framework v0.6");

	char name[128];
	int LVL = 1;
	int Scene = 0;

	printf_s("TEXT RPG�� �����մϴ�.\n\n\n\n");
	printf_s("�г����� �Է��ϼ��� : ");

	scanf("%s", &name);

	printf_s("\n�г����� %s �Դϴ�.\n", name);

	Sleep(2000);

	printf_s("\n\n\n�����ϴ���...\n\n");

	Sleep(2000);

	system("cls");

	switch(Scene)
	{
		case CLASS_Scene:
			CLASS();
			break;
		case INVENTORY_Scene:
			INVENTORY();
			break;
		case EQUIPMENT_Scene:
			EQUIPMENT();
			break;
		case SHOP_Scene:
			SHOP();
			break;
		case HUNTING_Scene:
			HUNTING();
			break;
	}

	return 0;
}


void CLASS()
{
	printf_s("���� ����\n");
	printf_s("1.������\n2.����̵�\n3.�����\n4.����\n");
	
	Scene++;
}

void INVENTORY()
{

}

void EQUIPMENT()
{

}

void SHOP()
{

}

void HUNTING()
{

}