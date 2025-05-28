#ifndef BOOK
#define BOOK

typedef struct Book
{
	int id; // ͼ����
	char* name;
	char* author;
	char* publisher;
	int year;
	int ISBN;
	bool isBorrowed; // �Ƿ񱻽���
	Book* next; // ָ����һ��ͼ���ָ��
}book,*bookList;

book SearchBook(book Book); // ����ͼ�麯��


bool AddBook(book Book);  // ���ͼ�麯��


bool DeleteBook(book Book);  // ɾ��ͼ�麯��


bool ModifyBook(book bookPre,book bookMod);  // �޸�ͼ�麯��


int BorrowBook(book Book,int borrowTime);  // ����ͼ�麯��

#endif // !BOOK

