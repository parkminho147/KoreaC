#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

int main() {
	char key_in;
	int �� = 260, �� = 290, �� = 330, �� = 340, �� = 380, �� = 430, �� = 490, ������ = 510;

	while (1) {
		if (_kbhit) {
			key_in = _getch();
			switch (key_in) {
			case 'a':
				printf("��");
				Beep(��, 200);
				Sleep(90);
				break;
			case 's':
				printf("��");
				Beep(��, 200);
				Sleep(90);
				break;
			case 'd':
				printf("��");
				Beep(��, 200);
				Sleep(90);
				break;
			case 'f':
				printf("��");
				Beep(��, 200);
				Sleep(90);
				break;
			case 'j':
				printf("��");
				Beep(��, 200);
				Sleep(90);
				break;
			case 'k':
				printf("��");
				Beep(��, 200);
				Sleep(90);
				break;
			case 'l':
				printf("��");
				Beep(��, 200);
				Sleep(90);
				break;
			case 59:
				printf("������");
				Beep(������, 200);
				Sleep(90);
				break;
			case 27:
				break;
			}
			if (key_in == 27) {
				printf("�ǾƳ� ����");
				break;
			}
		}
	}
	 
	return 0;
}