//Fernando Antonio Melara Calix MC101920
#include <iostream>
#include <list>

int main ()
{
  std::list<int> mylist;
  int myint;

  std::cout << "Por favor ingrese unos Enteros ( 0 para finalizar ):\n";

  do {
    std::cin >> myint;
    mylist.push_back (myint);
  } while (myint);				// va a correr mientras no escriba 0 , porque 0 es false y todo otro int es true
  
  std::cout << "\n mylist contiene:";
  for (std::list<int>::iterator it=mylist.begin(); it != mylist.end(); ++it)	// Visitar cada elemento de la lista con un iterador
    std::cout << ' ' << *it;

  std::cout << "\n mylist almacena " << mylist.size() << " numeros.\n";

  return 0;
}


