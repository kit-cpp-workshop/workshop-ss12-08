/*$ header $*/
template < typename T >
inline T max(T p0, T p1)
{
	return (p0>p1) ? p0 : p1;
}

template < typename Type >
static void print(Type p)
{
	std::cout << p;
}


void foobar();
/*$ header_end $*/


/*$ foobar.cpp $*/
#include "header.h"
void foobar()
{
	print < int > (42);
}


/*$ main.cpp $*/
#include "header.h"
int main()
{
	int x, y;
	std::cin >> x >> y;
	
	int m = max < int > (x, y);
	print(m);
	foobar();
}
