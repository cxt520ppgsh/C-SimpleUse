#include <iostream>
#include <cstring>

using namespace std;

void printBook(struct Books book);
void printBook(struct Books *book);
void printBook(struct Books2 *book);
Books returnBook(struct Books book);

// 声明一个结构体类型 Books
struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

// typedef简单    声明一个结构体类型 Books
typedef struct Books2
{
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
} TomBook;

int mainstruct() {
    Books Book1;        // 定义结构体类型 Books 的变量 Book1
    char str1[11] = "Hello";
    // Book1 详述
    strcpy(Book1.title, "C++ 教程");  //注意这里的赋值方式
    strcpy(Book1.author, "Runoob");
    strcpy(Book1.subject, "编程语言");
    Book1.book_id = 12345;

    // 输出 Book1 信息
    cout << "第一本书标题 : " << Book1.title << endl;
    cout << "第一本书作者 : " << Book1.author << endl;
    cout << "第一本书类目 : " << Book1.subject << endl;
    cout << "第一本书 ID : " << Book1.book_id << endl;

    printBook(Book1);

    Books *bookP = &Book1;
    printBook(bookP);


    TomBook  Book2;
    strcpy(Book2.title, "C++ 教程");
    strcpy(Book2.author, "Runoob");
    strcpy(Book2.subject, "编程语言");
    Book2.book_id = 12345;
    printBook(&Book2);

    return 0;
}

//结构作为函数参数
void printBook(struct Books book) {
    cout << "书标题 : " << book.title << endl;
    cout << "书作者 : " << book.author << endl;
    cout << "书类目 : " << book.subject << endl;
    cout << "书 ID : " << book.book_id << endl;
}

//结构作为函数返回
Books returnBook(struct Books book) {
    return  book;
}

//指向结构的指针
void printBook(struct Books *book) {
    cout << "书标题  : " << book->title << endl;
    cout << "书作者 : " << book->author << endl;
    cout << "书类目 : " << book->subject << endl;
    cout << "书 ID : " << book->book_id << endl;
}

void printBook(Books2 *book) {
    cout << "书标题  : " << book->title << endl;
    cout << "书作者 : " << book->author << endl;
    cout << "书类目 : " << book->subject << endl;
    cout << "书 ID : " << book->book_id << endl;
}


