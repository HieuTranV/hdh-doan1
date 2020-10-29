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
	/*int stdin;
	int stdout;
	char buffer[MaxLineLength];
	int len; 
	PrintStr("\n\t\t\t-----ECHO TRONG NACHOS-----\n\n");
	PrintStr(" - stdin: ");
	
	// Goi ham Open de mo file stdin 
	stdin = Open("stdin", 2);
	if (stdin != -1)
	{
		// Goi ham Read de doc noi dung nhap vao stdin
		//Bay gio len vua co the la do dai, vua co the la ket qua (thanh cong/that bai) cua ham Read()
		len = Read(buffer, MaxLineLength, stdin);
		
		if (len != -1 && len != -2) //Kiem tra co bi loi, hay co EOF hay khong
		{
			stdout = Open("stdout", 3); // Goi ham Open voi type = 3 de su dung stdout
			if (stdout != -1)
			{
				PrintStr(" -> stdout: ");
				Write(buffer, len, stdout); // Goi ham Write de ghi noi dung doc duoc vao stdout
				Close(stdout); // Goi ham Close de dong stdout
			}
		}
		Close(stdin); // Goi ham Close de dong stdin
	}
	PrintStr("\n\n");*/
	return 0;
}
