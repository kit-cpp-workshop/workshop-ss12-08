#include <list>
#include <vector>

std::vector<int> v = {1, 2, 3};            // initialization-list, C++11
std::list  <int> l = {1, 2, 3};            // initialization-list, C++11

v.push_back(42);      l.push_back (42);    // Element anhaengen
/*    n/a    */       l.push_front(21);    // Element voranstellen

v.pop_back();         l.pop_back ();       // von hinten entfernen
/*    n/a    */       l.pop_front();       // von vorne entfernen


int f;
f = v.front();        f = l.front();       // erstes Element erhalten
f = v.back();         f = l.back();        // letztes Element erhalten

v[2] = 42;            /*    n/a    */      // Element 1 setzen
f    = v[2];          /*    n/a    */      // Element 1 erhalten

// list: mit Iteratoren!
