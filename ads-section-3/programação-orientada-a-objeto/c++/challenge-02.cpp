#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	int  ticket1 = 20,
	     ticket2 = 30,
	     ticket3 = 100;

	int media = ticket1 + ticket2 + ticket3 / 3;

	cout << "A media e igual a " << media << endl;
	
        return 0;
}
