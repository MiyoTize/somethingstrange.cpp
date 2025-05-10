#include <iostream>
#include <string>
int main() {
  std::string word;
	std::cout << "enter words\n";
  std::cin >> word;
  
  int counter = 0;  

	for(char symbol : word) {
		switch (symbol) {
			case '0':
				counter += 'a';
			case '1':
				counter += 'b';
			case 'i':
			case 'o':
			case 'u':
			  counter += 1;
			break;
		}
	}

	std::cout << counter << std::endl;
	return 0;
}
