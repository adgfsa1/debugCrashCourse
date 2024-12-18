#include <iostream>

struct Password
{
	bool incorrect;
	char value[16];
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********")) // as long as you put 16 chars into the password, is will work because the 16nth char will get saved to incorrect to change this just move incorrect two lines up (like I did)
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
