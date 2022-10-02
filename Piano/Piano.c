#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

int main() {
	char key_in;
	int 도 = 260, 레 = 290, 미 = 330, 파 = 340, 솔 = 380, 라 = 430, 시 = 490, 높은도 = 510;

	while (1) {
		if (_kbhit) {
			key_in = _getch();
			switch (key_in) {
			case 'a':
				printf("도");
				Beep(도, 200);
				Sleep(90);
				break;
			case 's':
				printf("레");
				Beep(레, 200);
				Sleep(90);
				break;
			case 'd':
				printf("미");
				Beep(미, 200);
				Sleep(90);
				break;
			case 'f':
				printf("파");
				Beep(파, 200);
				Sleep(90);
				break;
			case 'j':
				printf("솔");
				Beep(솔, 200);
				Sleep(90);
				break;
			case 'k':
				printf("라");
				Beep(라, 200);
				Sleep(90);
				break;
			case 'l':
				printf("시");
				Beep(시, 200);
				Sleep(90);
				break;
			case 59:
				printf("높은도");
				Beep(높은도, 200);
				Sleep(90);
				break;
			case 27:
				break;
			}
			if (key_in == 27) {
				printf("피아노 종료");
				break;
			}
		}
	}
	 
	return 0;
}