#include <stdio.h>
#include <malloc.h>
#include <string>
#include <time.h>
#include <Windows.h>


typedef struct tagInfo
{
	int HP;
	int MP;

	int EXP;

	float Att;
	float Def;

	int Level;

}INFO;

typedef struct tagObject
{
	char* Name;
	INFO Info;

}OBJECT;








void InitializePlayer(OBJECT* _Player);

void InitializeEnemy(OBJECT* _Enemy);

void HideCursor();








int main(void)
{
	HideCursor();

	system("mode con:cols=120 lines=30");

	system("title ±è¹Î±Ù Framework v0.6");

	OBJECT* Player = (OBJECT*)malloc(sizeof(OBJECT));
	InitializePlayer(Player);

	OBJECT* Monster = (OBJECT*)malloc(sizeof(OBJECT));
	InitializeEnemy(Monster);

	DWORD dwTime = GetTickCount();
	int Delay = 1000;

	int UpCount = 0;

	while (true)
	{
		if (dwTime + Delay < GetTickCount())
		{
			dwTime = GetTickCount();

			system("cls");

			printf_s("%s")
		}
	}








	return 0;
}