#include "syscall.h"
#include "copyright.h"
#define maxlen 32

int main()
{
	int a;
	char file[MaxFileLength];
	PrintStr("Input for filename to create : "); // in prompt bang syscall PrintStr
	ReadStr(file, MaxFileLength); // doc chuoi nhap bang syscall ReadStr
	a = Create(file); // tao file vua nhap bang syscall Create
	Halt();
}


