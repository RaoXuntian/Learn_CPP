#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

void remove_author(multimap<string, string>& books, const string& author) {
	auto pos=books.equal_range(author);
	if (pos.first==pos.second) 
		cout << "没有" << author << "这个作者" << "\n\n";
	else 
		books.erase(pos.first, pos.second);
}

void print_books(multimap<string, string>& books) {
	cout << "当前书目包括: " << endl;
	for (auto &book: books) {
		cout << book.first << ", 《" << book.second << "》\n";
	}
	cout << endl;
}

int main(int argc, char const *argv[])
{
	multimap<string, string> books;
	books.insert({"何伟", "傻逼是怎样炼成的"});
	books.insert({"何伟", "我是这么吹牛逼的"});
	books.insert({"何伟", "如何做白日梦"});
	books.insert({"金庸", "射雕英雄传"});
	books.insert({"金庸", "天龙八部"});

	print_books(books);
	remove_author(books, "wyz");
	remove_author(books, "金庸");
	print_books(books);
	return 0;
}