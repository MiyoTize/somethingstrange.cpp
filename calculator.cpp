#include <iostream>
#include <cmath>
#include <stack>

char peek() {
    char ch = EOF;

    if ( cin >> ch ) { // Фигня какая то. Не разберешь
        cin.unger();
    return ch;
    }
}

void error( const char *message ) {
    cerr << message;
    cin.setstate ( ios::failbit );
}

int precedence ( char op ) {

    switch (op) {
        case '+': case '-': return 100;
        case '*': case '/': case '%': return 200;
        case '^': return 300;
        default: return 0;
    }

}

bool is_left_associative ( char op ) {
    return op != '^';
}

double infix() {
    stack<char> ops;
    stack<double> xs;

    auto do_next_op = [&]() -> bool {
        
    }
}
