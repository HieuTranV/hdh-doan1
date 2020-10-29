#include "syscall.h"
#include "copyright.h"

int main(int argc, char* argv[])
{
	char line[MaxLineLength];
	OpenFileId inConsole = Open("stdin", 2);
	OpenFileId outConsole = Open("stdout", 3);
	if (inConsole == -1 ||outConsole == -1)
	{
		PrintStr("Can not open console\n");
		return 0;
	}
	Read(line, MaxLineLength, inConsole);
	Write(line, MaxLineLength, outConsole);
	PrintStr("\n");
	Close(inConsole);
	Close(outConsole);
	
	return 0;
}
