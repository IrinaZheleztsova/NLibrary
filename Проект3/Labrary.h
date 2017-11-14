#pragma once
#ifndef Labrary_H 
#define Labrary_H
#include <iostream> 
#include <string>
#include <vector>
#include "Book.h"
#ifndef Labrary.h



class Labrary{
private:
	std::vector<Book>books;
	std::vector<Book>newbooks;
	Book a;
public:
	Labrary::Labrary()=default;
	Labrary::~Labrary()=default;
	void PushBook(std::string &BookTitle, std::string &BookName, int BookYear);
	Book GetBook1(std::string &BookTitle, int num);
	Book GetBook2(std::string &BookName, int num);
	Book GetBook3(int BookYear, int num);
	int Numbers1(std::string &BookTitle);
	int Numbers2(std::string &BookName);
	int Numbers3(int BookYear);
	std::vector<Book>DeliteBook1(std::string &BookTitle);
	std::vector<Book>DeliteBook2(std::string &BookName);
	std::vector<Book>DeliteBook3(int BookYear);
};
#endif
#endif

