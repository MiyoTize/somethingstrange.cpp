
// IS NOT MY PROGRAMM, ONLY AN EXAMPLE

#include <iostream>
#include <cstdlib>
#include <vector>


int main() {
    
    system("chcp 1251>nul");
    
    std::cout << "Число Фибоначчи\n" << "Введите размер массива: ";
    std::cin >> int n;
    
    try {
    
        vector < int > fibs ( n,1 );
        std::cout << fibs [0] << " " << fibs[1];
        
        for ( int k=2; k<n; k++ ) {
            fibs[k] = fibs[k-1] + fibs[k-2];
            std::cout << " " << fibs[k];
        }
    
    }
    
    catch (...) {
        std::cout << "Ой! Произошла ошибка!" << std::endl;
    }
    
    std::cout << "\nПрограмма завершила свою работу...\n";
    
    system ( "pause > nul" );
    
    return 0;
    
}
