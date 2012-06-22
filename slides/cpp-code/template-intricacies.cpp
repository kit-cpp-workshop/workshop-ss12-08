/*$ template $*/
struct X {
	template < typename T >
	void foo(T);
};
namespace N {
	template < typename F >
	class A { /* ... */ };
};

/*$ template_usage $*/
X x;
x.foo < int > (42);	// Fehler!
/$$/x.template foo < int > (42);

N::A < double > n;	// Fehler!
/$$/N::template A < double > n;



/*$ typename $*/
template < typename T >
class X {
	typedef T* P;
	void foobar() {
		T a;                // OK
		T::A* x;            // multipliziere?
		typename T::A y;    // Definition
		typename X<T>::P p; // Definition
	}
};
