/*$ inline $*/
template < typename T >
class MyRingbuffer {
	inline T* memfun(int);

};
/*$ anon_namespace $*/
namespace /* anonymous */ {
	template < typename T >
	class MyRingbuffer {
		T* memfun(int);
	};
}
/*$ func_decl $*/
/$$/template < typename F >
F*
/$$/MyRingbuffer < F > ::
memfun(int)
{ /* ... */ }


/*$ implicit_inline $*/
template < typename T >
class MyRingbuffer {
	/*inline*/ T* memfun(int)
	{ /* ... */ }
};


/*$ ctmft $*/
template < typename T >
class MyRingbuffer
{
	template < typename F >
	inline F* memfun2(T);
};

/*$ ctmft_def $*/
template < typename T >	// class template-parameters
template < typename F > // function template-parameters
MyRingbuffer < T > ::
F*
memfun2(T p)
{ /* ... */ }

