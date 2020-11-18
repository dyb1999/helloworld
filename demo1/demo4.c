//#include <stdio.h>
//#include <Windows.h>
//#include <conio.h>
//#include <stdlib.h>
//#define true 1
//#define false 0
////int i = 10;
////int j = 10;
//
//void gotoxy(int x, int y) {
//	HANDLE handle;
//	handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	COORD pos = { x,y };
//	SetConsoleCursorPosition(handle, pos);
//}
//
//void turnRight(int *x, int *y)
//{
//	//if(x < 150)
//	(*x) = (*x) + 2;
//		
//}
//
//void turnLeft(int *x, int *y)
//{
//	//if(x > 0)
//	(*x) = (*x) - 2;
//	
//}
//
//void turnUp(int *x, int *y) 
//{
//	//if (y > 0)
//	(*y) = (*y) - 2;
//		
//}
//
//void turnDown(int *x,int *y)
//{
//	//if (y > 150)
//	(*y) = (*y) + 2;
//		
//}
//
//void main()
//{
//	int i = 10;
//	int j = 10;
//	int *x = &i;//注意全局变量，函数，变量的作用域和生命周期
//	int *y = &j;
//	char dir = 77;
//	
//	while (true)
//	{
//		//char dir = 77;
//		gotoxy(i, j);
//		printf("*");
//		Sleep(500);
//		system("cls");
//
//
//		//getch();
//		if (kbhit())
//		{
//			dir = getch();
//			switch (dir)
//			{
//			case 72:turnUp(x, y); break;
//			case 80:turnDown(x, y); break;
//			case 75:turnLeft(x, y); break;
//			case 77:turnRight(x, y); break;
//				//default:turnRight(x, y); break;
//					//break;
//			}
//		}
//		else
//		{
//			switch (dir)
//			{
//			case 72:turnUp(x, y); break;
//			case 80:turnDown(x, y); break;
//			case 75:turnLeft(x, y); break;
//			case 77:turnRight(x, y); break;
//				//default:turnRight(x, y); break;
//					//break;
//			}
//		}
//		
//
//		printf("(%d,%d)\n", i,j);
//		
//		/*if (dir == 72)
//			turnUp(x, y);
//		else if (dir == '80')
//			turnDown(x, y);
//		else if (dir == 75)
//			turnLeft(x, y);
//		else if (dir == 77)
//			turnRight(x, y);
//		else
//			turnRight(x, y);*/
//
//	}
//	return 0;
//}