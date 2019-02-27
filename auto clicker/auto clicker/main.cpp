#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main(int argc, char * argv[]){

	int x = 0;
	int y = 1;
	int f = VK_DOWN;
	int b = 0;

start:

	y = 1;

	if (GetAsyncKeyState(f)) {
		if (x == 0) {



			// u key
			keybd_event(0x55, 0x55, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(0x55, 0x55, KEYEVENTF_KEYUP, 0);

			// m key

			keybd_event(0x4D, 0x4D, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(0x4D, 0x4D, KEYEVENTF_KEYUP, 0);


			// k key

			keybd_event(0x4B, 0x4B, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(0x4B, 0x4B, KEYEVENTF_KEYUP, 0);

			// s key
			keybd_event(0x53, 0x53, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(0x53, 0x53, KEYEVENTF_KEYUP, 0);

			// space key

			keybd_event(VK_SPACE, VK_SPACE, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(VK_SPACE, VK_SPACE, KEYEVENTF_KEYUP, 0);

			// u key

			keybd_event(0x55, 0x55, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(0x55, 0x55, KEYEVENTF_KEYUP, 0);

			// o key

			keybd_event(0x4F, 0x4F, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(0x4F, 0x4F, KEYEVENTF_KEYUP, 0);

			// c key

			keybd_event(0x43, 0x43, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(0x43, 0x43, KEYEVENTF_KEYUP, 0);

			// r key

			keybd_event(0x52, 0x52, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(0x52, 0x52, KEYEVENTF_KEYUP, 0);

			// space key

			keybd_event(VK_SPACE, VK_SPACE, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(VK_SPACE, VK_SPACE, KEYEVENTF_KEYUP, 0);


			// m key

			keybd_event(0x4D, 0x4D, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(0x4D, 0x4D, KEYEVENTF_KEYUP, 0);

			// space key

			keybd_event(VK_SPACE, VK_SPACE, KEYEVENTF_EXTENDEDKEY, 0);
			keybd_event(VK_SPACE, VK_SPACE, KEYEVENTF_KEYUP, 0);

		}

		x++;

	}

	else if (GetAsyncKeyState(VK_OEM_PLUS)) {
		while (GetAsyncKeyState(VK_OEM_PLUS)) {

			Sleep(3);
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

		}
	}

	goto start;

}
