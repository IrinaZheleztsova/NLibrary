
#include "Book.h"
#include "Labrary.h"



int main()
{
	Labrary labrary;
	Book a; //Temporary variable. Used to work with a book
	std::string BookTitle, BookName;
	int BookYear;
	int k = 0;
	while (k != 8)
	{
		std::cout << "\nEnter:\n 1-push a book\n 2-see the book(title)\n 3-see the book(autor)\n 4-see the book(year)\n 5-delete a book(title)\n 6-delete a book(autor)\n 7-delete a book(year)\n";
		std::cin >> k;
		if (k == 1)
		{
			std::cout << "Enter:\n title\n author\n year\n";
			std::cin >> BookTitle >> BookName >> BookYear;
			labrary.PushBook(BookTitle, BookName, BookYear);
		}
		else
		{
			if (k == 2)
			{
				std::cout << "say the title\n";
				std::cin >> BookTitle;
				int n = labrary.Numbers1(BookTitle);
				if (n == 0)
				{
					std::cout << "There is no such book" << std::endl;
				}
				else
				{
					for (int i = 1; i < n + 1; i++)
					{
						a = labrary.GetBook1(BookTitle, i);
						std::cout << "title:" << a.GetTitle() << "\n autor:" << a.GetName() << "\n year:" << a.GetYear() << std::endl;
					}
				}
			}
			else
			{
				if (k == 3)
				{
					std::cout << "say the autor\n";
					std::cin >> BookName;
					int n = labrary.Numbers2(BookName);
					if (n == 0)
					{
						std::cout << "There is no such book" << std::endl;
					}
					else
					{
						for (int i = 1; i < n + 1; i++)
						{
							a = labrary.GetBook2(BookName, i);
							std::cout << "title:" << a.GetTitle() << "\n autor:" << a.GetName() << "\n year:" << a.GetYear() << std::endl;
						}
					}
				}
				else
				{
					if (k == 4)
					{
						std::cout << "say the year\n";
						std::cin >> BookYear;
						int n = labrary.Numbers3(BookYear);
						if (n == 0)
						{
							std::cout << "There is no such book" << std::endl;
						}
						else
						{
							for (int i = 1; i < n + 1; i++)
							{
								a = labrary.GetBook3(BookYear, i);
								std::cout << "title:" << a.GetTitle() << "\n autor:" << a.GetName() << "\n year:" << a.GetYear() << std::endl;
							}
						}
					}
					else
					{
						if (k == 5)
						{
							std::string BookTitle;
							int index;
							std::cout << "Enter book title\n";
							std::cin >> BookTitle;
							int n = labrary.Numbers1(BookTitle);
							if (n == 0)
							{
								std::cout << "There is no such book" << std::endl;
							}
							else
							{
								for (int i = 1; i < n + 1; i++)
								{
									labrary.DeliteBook1(BookTitle);
								}
								std::cout << n << "books were deleted" << std::endl;
							}
						}
						else
						{
							if (k == 6)
							{
								std::string BookName;
								int index;
								std::cout << "Enter book autor\n";
								std::cin >> BookName;
								int n = labrary.Numbers2(BookName);
								if (n == 0)
								{
									std::cout << "There is no such book" << std::endl;
								}
								else
								{
									for (int i = 1; i < n + 1; i++)
									{
										labrary.DeliteBook2(BookName);
									}
									std::cout << n << "books were deleted" << std::endl;
								}
							}
							else
							{
								if (k == 7)
								{
									int BookYear;
									int index;
									std::cout << "Enter book year\n";
									std::cin >> BookYear;
									int n = labrary.Numbers3(BookYear);
									if (n == 0)
									{
										std::cout << "There is no such book" << std::endl;
									}
									else
									{
										for (int i = 1; i < n + 1; i++)
										{
											labrary.DeliteBook3(BookYear);
										}
										std::cout << n << "books were deleted" << std::endl;
									}
								}
								else
								{
									break;
								}
							}
						}
					}
				}
			}
		}
	}
}
	
