#ifndef BOOK
#define BOOK

typedef struct Book
{
	int id; // 图书编号
	char* name;
	char* author;
	char* publisher;
	int year;
	int ISBN;
	bool isBorrowed; // 是否被借阅
	Book* next; // 指向下一本图书的指针
}book,*bookList;

book SearchBook(book Book); // 搜索图书函数


bool AddBook(book Book);  // 添加图书函数


bool DeleteBook(book Book);  // 删除图书函数


bool ModifyBook(book bookPre,book bookMod);  // 修改图书函数


int BorrowBook(book Book,int borrowTime);  // 借阅图书函数

#endif // !BOOK

