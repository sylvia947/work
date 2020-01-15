#include <stdio.h>
#include <windows.h>
int main() {
	LoadLibrary("notepadhook.cpp");
	getchar();
	return 1;
}