#include "iostream"
#include "conio.h"
#include "windows.h"
#include "stdlib.h"
#include "time.h"

using namespace std;

void gotoxy(int x,int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

dibujar0(int nColumna)
{
	gotoxy(nColumna, 4);
	cout << " **** ";
	gotoxy(nColumna, 5);
	cout << "     ";
	gotoxy(nColumna, 6);
	cout << "     ";
	gotoxy(nColumna, 7);
	cout << "     ";
	gotoxy(nColumna, 8);
	cout << "     ";
	gotoxy(nColumna, 9);
	cout << "     ";
	gotoxy(nColumna, 10);
	cout << " ***** ";
}

dibujar1(int nColumna)
{
	gotoxy(nColumna, 4);
	cout << "     * ";
	gotoxy(nColumna, 5);
	cout << "     * ";
	gotoxy(nColumna, 6);
	cout << "     * ";
	gotoxy(nColumna, 7);
	cout << "     * ";
	gotoxy(nColumna, 8);
	cout << "     * ";
	gotoxy(nColumna, 9);
	cout << "     * ";
	gotoxy(nColumna, 10);
	cout << "     * ";
}

dibujar2(int nColumna)
{
	gotoxy(nColumna, 4);
	cout << " ***** ";
	gotoxy(nColumna, 5);
	cout << "     * ";
	gotoxy(nColumna, 6);
	cout << "     * ";
	gotoxy(nColumna, 7);
	cout << " ***** ";
	gotoxy(nColumna, 8);
	cout << " *     ";
	gotoxy(nColumna, 9);
	cout << " *     ";
	gotoxy(nColumna, 10);
	cout << " ***** ";
}

dibujar3(int nColumna)
{
	gotoxy(nColumna, 4);
	cout << " ***** ";
	gotoxy(nColumna, 5);
	cout << "     * ";
	gotoxy(nColumna, 6);
	cout << "     * ";
	gotoxy(nColumna, 7);
	cout << " ***** ";
	gotoxy(nColumna, 8);
	cout << "     * ";
	gotoxy(nColumna, 9);
	cout << "     * ";
	gotoxy(nColumna, 10);
	cout << " ***** ";
}

dibujar4(int nColumna)
{
	gotoxy(nColumna, 4);
	cout << "     ";
	gotoxy(nColumna, 5);
	cout << "     ";
	gotoxy(nColumna, 6);
	cout << "     ";
	gotoxy(nColumna, 7);
	cout << " ***** ";
	gotoxy(nColumna, 8);
	cout << "     * ";
	gotoxy(nColumna, 9);
	cout << "     * ";
	gotoxy(nColumna, 10);
	cout << "     * ";
}

dibujar5(int nColumna)
{
	gotoxy(nColumna, 4);
	cout << " ***** ";
	gotoxy(nColumna, 5);
	cout << " *     ";
	gotoxy(nColumna, 6);
	cout << " *     ";
	gotoxy(nColumna, 7);
	cout << " ***** ";
	gotoxy(nColumna, 8);
	cout << "     * ";
	gotoxy(nColumna, 9);
	cout << "     * ";
	gotoxy(nColumna, 10);
	cout << " ***** ";
}

dibujar6(int nColumna)
{
	gotoxy(nColumna, 4);
	cout << " ***** ";
	gotoxy(nColumna, 5);
	cout << " *     ";
	gotoxy(nColumna, 6);
	cout << " *     ";
	gotoxy(nColumna, 7);
	cout << " ***** ";
	gotoxy(nColumna, 8);
	cout << "     ";
	gotoxy(nColumna, 9);
	cout << "     ";
	gotoxy(nColumna, 10);
	cout << " ***** ";
}

dibujar7(int nColumna)
{
	gotoxy(nColumna, 4);
	cout << " ***** ";
	gotoxy(nColumna, 5);
	cout << "     * ";
	gotoxy(nColumna, 6);
	cout << "     * ";
	gotoxy(nColumna, 7);
	cout << "     * ";
	gotoxy(nColumna, 8);
	cout << "     * ";
	gotoxy(nColumna, 9);
	cout << "     * ";
	gotoxy(nColumna, 10);
	cout << "     * ";
}

dibujar8(int nColumna)
{
	gotoxy(nColumna, 4);
	cout << " ***** ";
	gotoxy(nColumna, 5);
	cout << "     ";
	gotoxy(nColumna, 6);
	cout << "     ";
	gotoxy(nColumna, 7);
	cout << " ***** ";
	gotoxy(nColumna, 8);
	cout << "     ";
	gotoxy(nColumna, 9);
	cout << "     ";
	gotoxy(nColumna, 10);
	cout << " ***** ";
}

dibujar9(int nColumna)
{
	gotoxy(nColumna, 4);
	cout << " ***** ";
	gotoxy(nColumna, 5);
	cout << "     ";
	gotoxy(nColumna, 6);
	cout << "     ";
	gotoxy(nColumna, 7);
	cout << " ***** ";
	gotoxy(nColumna, 8);
	cout << "     * ";
	gotoxy(nColumna, 9);
	cout << "     * ";
	gotoxy(nColumna, 10);
	cout << " ***** ";
}

int main() {
	system("color 1b");
	system("cls");int hor,min,seg,x=1,dh=0,dm=0,ds=0,uh=0,um=0,us=0,s1=0,s2=0;
	time_t now= time(0);
	tm *ltm =localtime(&now);
	hor =ltm->tm_hour;min=ltm->tm_min;seg=ltm->tm_sec;
	dh=hor/10,uh=hor%10,dm=min/10,um=min%10,ds=seg/10,us=seg%10;
	for (int h2=dh;h2<=5;++h2)
	{
		switch (h2)
		{
		case 0:
			dibujar0(14);
			break;

		case 1:
			dibujar1(14);
			break;

		case 2:
			dibujar2(14);
			break;

		case 3:
			dibujar3(14);
			break;

		case 4:
			dibujar4(14);
			break;
		
		case 5:
			dibujar5(14);
			break;
		}
		for(int h1=uh;h2<=9;h2++){
			switch(h1)
			{
			case 0:
				dibujar0(21);
				break;

			case 1:
				dibujar1(21);
				break;

			case 2:
				dibujar2(21);
				break;

			case 3:
				dibujar3(21);
				break;

			case 4:
				dibujar4(21);
				break;
		
			case 5:
				dibujar5(21);
				break;
			
			case 6:
				dibujar6(21);
				break;
			
			case 7:
				dibujar7(21);
				break;
			
			case 8:
				dibujar8(21);
				break;
			
			case 9:
				dibujar9(21);
				break;
			}
			for(int m1=dm;m1<=5;++m1){
				switch(m1)
				{
				case 0:
					dibujar0(35);
					break;

				case 1:
					dibujar1(35);
					break;

				case 2:
					dibujar2(35);
					break;

				case 3:
					dibujar3(35);
					break;

				case 4:
					dibujar4(35);
					break;
		
				case 5:
					dibujar5(35);
					break;
				}
				for(int m2=um; m2<=9; ++m2){
					switch(m2)
					{
					case 0:
						dibujar0(42);
						break;

					case 1:
						dibujar1(42);
						break;

					case 2:
						dibujar2(42);
						break;

					case 3:
						dibujar3(42);
						break;

					case 4:
						dibujar4(42);
						break;
		
					case 5:
						dibujar5(42);
						break;
			
					case 6:
						dibujar6(42);
						break;
			
					case 7:
						dibujar7(42);
						break;
			
					case 8:
						dibujar8(42);
						break;
			
					case 9:
						dibujar9(42);
						break;
					}
					for(s1=ds;s1<=5;++s1){
						switch(s1)
						{
						case 0:
							dibujar0(56);
							break;

						case 1:
							dibujar1(56);
							break;

						case 2:
							dibujar2(56);
							break;

						case 3:
							dibujar3(56);
							break;

						case 4:
							dibujar4(56);
							break;
		
						case 5:
							dibujar5(56);
							break;
						}
						for(s2=us;s2<=9;++s2){
							switch(s2)
							{
							case 0:
								dibujar0(63);
								break;

							case 1:
								dibujar1(63);
								break;

							case 2:
								dibujar2(63);
								break;

							case 3:
								dibujar3(63);
								break;

							case 4:
								dibujar4(63);
								break;
		
							case 5:
								dibujar5(63);
								break;
			
							case 6:
								dibujar6(63);
								break;
			
							case 7:
								dibujar7(63);
								break;
			
							case 8:
								dibujar8(63);
								break;
			
							case 9:
								dibujar9(63);
								break;
							}
							Sleep(1000);
						}us=0;
					}ds=0;
				}um=0;
			}dm=0;
		}uh=0;
	}dh=0;
}



