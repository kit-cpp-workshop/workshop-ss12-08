/*$ begin $*/
   int max(int p0, int p1) { return (p0>p1) ? (p0) : (p1); }
 short max(short, short)   { return (p0>p1) ? (p0) : (p1); }
double max(double, double) { return (p0>p1) ? (p0) : (p1); }
MyType max(MyType, MyType) { return (p0>p1) ? (p0) : (p1); }
/*$ max_schablone $*/
template < typename Type >
  Type max(Type p0, Type p1) {
	return (p0>p1) ? (p0) : (p1);
  }


/*$ max_template $*/
template < typename T >    // template-Funktion mit Parameter T
T                          // return type
max(T p0, T p1)            // Funktionsname und Parameter
{ return (p0>p1) ? (p0) : (p1); }  // Definition (Körper)
/*$ max_template_short $*/
template<typename T> T max(T p0, T p1);


/*$ no_template $*/
int
max(int p0, int p1)
{ return (p0>p1) ? (p0) : (p1); }
/*$ no_template_end $*/

/*$ call0 $*/
int c = max < int > (4, 42);

/*$ call1 $*/
double c = max < double > (42.0, 21.0);
