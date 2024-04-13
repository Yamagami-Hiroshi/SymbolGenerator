#include "Symbol.h"
#include <iostream>

int main() {
    Symbol symbol;
    symbol.setCharacter('*');
    symbol.setStep(5);

    std::cout << "右下がり階段状\n";
    symbol.generateSymbolOfRightDownStairs();
    std::cout << "\n左下がり階段状\n";
    symbol.generateSymbolOfLeftDownStairs();
    std::cout << "\nダイヤモンド状\n";
    symbol.generateSymbolOfDiamond();

    return 0;
}
