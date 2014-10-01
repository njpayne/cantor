// life_universe_everything
// Lines beginning with a hash sign (#) are directives read and interpreted by what is known as the preprocessor
// Blank lines have no effect on a program. They simply improve readability of the code
#include <iostream>
using namespace std;

/*
int main() // This line initiates the declaration of a function
{
  // std::cout identifies the standard character output device (usually, this is the computer screen)
  // Insertion operator (<<), indicates that what follows is inserted into std::cout
  // Sentence within quotes ("Hello world!"), is the content inserted into the standard output.
  	int a; // Accept an integer entry
	cin >> a;
	while( a != 42) {
		cout << a << endl;}
	return 0;
}
*/

#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int a;
	while(1) {
		cin >> a;
		if(a==42) break;
		else cout << a << endl;}
	return 0;
}

// Note that the initial transaction timed out because of the while loop (hypothesis)

