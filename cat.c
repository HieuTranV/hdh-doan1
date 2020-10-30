#include "syscall.h"
#define MAX_LENGTH 32

int 
main()
{
	int openFileId, stdin;
	int fileSize, i;
	char c;
	char fileName[MAX_LENGTH];
	
	
	stdin = Open("stdin", 2);
	PrintStr("Input for filename to read : ");
	
	Read(fileName, MAX_LENGTH, stdin);
	
	openFileId = Open(fileName, 1); // Goi ham Open de mo file 
	
	if (openFileId != -1)  {
		//Seek den cuoi file de lay duoc do dai noi dung (fileSize)
		fileSize = Seek(-1, openFileId);
		
		// Seek den dau tap tin de tien hanh Read
		Seek(0, openFileId);
		
		PrintStr("The file content : \n");
		for (i = 0; i < fileSize; i++)  {
			Read(&c, 1, openFileId); 
			PrintChar(c);
		}
		Close(openFileId); // Goi ham Close de dong file
	}
	else {
		PrintStr("%s is not exist\n", fileName);
	}
	return 0;
}
