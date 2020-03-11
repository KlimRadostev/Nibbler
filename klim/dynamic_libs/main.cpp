#include <dlfcn.h>
#include <string>
#include <iostream>

#include "Parent.hpp"

int main()
{
	using		std::cout;
	using		std::endl;


	void		*handle = dlopen("libmylib.dylib", RTLD_LAZY);

	Parent  *(*create)();
	void	(*destroy)(Parent*);

	if (handle)
	{
		create = (Parent *(*)())dlsym(handle, "create_object");
		destroy = (void (*)(Parent*))dlsym(handle, "destroy_object");

		Parent *a = (Parent*)create();
		a->execute();
	}
	else
	{
		cout << "ERRor" << endl;
	}
	return (0);
}
