#include "Book.h"

#ifndef BOOKFILE
#define BOOKFILE

bookList readFile(const char* fileName);//��ȡ�ļ���������ͷָ��
void writeFile(const char* fileName, book* head);//������д���ļ�

#endif // !BOOKFILE
