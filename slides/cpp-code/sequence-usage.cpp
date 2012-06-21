// #include <deque>
#include <list>
#include <vector>

std::vector<int> v;

v.resize(10, 0);				// set the vector size to 10
v[0] = 0;
v[1] = 1;						// same as v.assign(1, 1);

int foo = v[1];					// same as v.at(1);

v.insert(v.begin() + 1, 2);		// inserts "2" at v[1]
// v[2] is now "1" because all elements have been shiftet right
v.erase(v.begin());				// deletes v[0], which has been "0"
// v contains now: 2 1 0 0 ...
v.push_back(10);				// adds v[10] and sets its value to 10

std::list<int> l = std::list<int>(v.begin(), v.end()); // copy v into l

foo = l.pop_front(); 			// something vector is not able to do
l.clear(); 						// tabula rasa
