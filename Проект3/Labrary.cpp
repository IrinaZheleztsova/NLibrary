#include "Labrary.h"
#include "Book.h"


/*Labrary::Labrary()
{
}
Labrary::~Labrary()
{
}*/

void Labrary::PushBook(std::string &BookTitle, std::string &BookName, int BookYear)
{
	a.SetTitle(BookTitle);
	a.SetName(BookName);
	a.SetYear(BookYear);
	books.push_back(a);
}

Book Labrary::GetBook1(std::string &BookTitle,int num)
{
	int n = books.size();
	int tick = 0;
	for (int i = 0; i < n; i++)
	{
		if (books[i].GetTitle() == BookTitle)
		{
			tick++;
			if (tick == num)
			{
				return books[i];
			}
		}
	}
}

Book Labrary::GetBook2(std::string &BookName, int num)
{
	int n = books.size();
	int tick = 0;
	for (int i = 0; i < n; i++)
	{
		if (books[i].GetName() == BookName)
		{
			tick++;
			if (tick == num)
			{
				return books[i];
			}
		}
	}
}

Book Labrary::GetBook3(int BookYear, int num)
{

	int n = books.size();
	int tick = 0;
	for (int i = 0; i < n; i++)
	{
		if (books[i].GetYear() == BookYear)
		{
			tick++;
			if (tick == num)
			{
				return books[i];
			}
		}
	}
}

std::vector<Book>Labrary::DeliteBook1(std::string &BookTitle)
{
	int p = 0;
	int index;
	
	for (int i = 0; i < books.size(); i++)
	{	
		if (books[i].GetTitle() == BookTitle)
		{
			index = i;	
			books.erase(books.begin() + index);
			i--;
		}	
	}
	return books;
}
std::vector<Book>Labrary::DeliteBook2(std::string &BookName)
{
	int p = 0;
	int index;

	for (int i = 0; i < books.size(); i++)
	{
		if (books[i].GetTitle() == BookName)
		{
			index = i;
			books.erase(books.begin() + index);
			i--;
		}
	}
	return books;
}
std::vector<Book>Labrary::DeliteBook3(int BookYear)
{
	int p = 0;
	int index;

	for (int i = 0; i < books.size(); i++)
	{
		if (books[i].GetYear() == BookYear)
		{
			index = i;
			books.erase(books.begin() + index);
			i--;
		}
	}
	return books;
}


int Labrary::Numbers1(std::string &BookTitle){
	int p = 0;
	for (int i = 0; i < books.size(); i++){
		if (books[i].GetTitle() == BookTitle){
			p++;
		}
	}
	return p;
};
int Labrary::Numbers2(std::string &BookName){
	int p = 0;
	for (int i = 0; i < books.size(); i++){
		if (books[i].GetTitle() == BookName){
			p++;
		}
	}
	return p;
};
int Labrary::Numbers3(int BookYear){
	int p = 0;
	for (int i = 0; i < books.size(); i++){
		if (books[i].GetYear() == BookYear){
			p++;
		}
	}
	return p;
};






