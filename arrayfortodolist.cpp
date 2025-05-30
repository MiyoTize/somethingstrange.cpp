#include <iostream>

int main() {
	char answer;
	int array[]{};
	int oldsize = 0, newsize{};
	std::cout << "Heyo! Miyo here!"
            << "Do you want write new task?\n(Y/n):";
  std::cin >> answer;

	while(answer == 'y') {
	  std::cout << "Write new task: ";
	  newsize = ++oldsize;
	  std::cin >> array[newsize];
	  std::cout << newsize << " " << array[newsize] << "\n";

		while( oldsize < newsize ) {
  	  std::cout << *array << "\n";
	    std::cout << array[newsize] << "\n";
		  newsize = sizeof(array) / sizeof(array[0]);
		  ++oldsize;
    }
    std::cout << "Do you want write new task?\n(Y/n):";
    std::cin >> answer;
	}

  std::cout << "Bye!"; 
  return 0;
}
