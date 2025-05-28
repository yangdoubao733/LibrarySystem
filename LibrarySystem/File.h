#include "Book.h"

#ifndef BOOKFILE
#define BOOKFILE

bookList readFile(const char* fileName);//读取文件返回链表头指针
void writeFile(const char* fileName, book* head);//将链表写入文件

#endif // !BOOKFILE
