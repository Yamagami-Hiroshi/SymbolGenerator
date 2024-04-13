#include "Symbol.h"
#include <iostream>

void Symbol::generateSymbolOfRightDownStairs() {
    for (int i = 1; i <= _step; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << _character;
        }
        std::cout << "\n";
    }
}

void Symbol::generateSymbolOfLeftDownStairs() {
    for (int i = 1; i <= _step; i++) {
        for (int j = 1; j <= _step; j++) {
            outputIfAbsoluteValueIsLessThanSpecifiedValue(i, _step + 1 - j);
        }
        std::cout << "\n";
    }
}

void Symbol::generateSymbolOfDiamond() {
    // ’i”‚ª‹ô”‚¾‚ÆãY—í‚Èƒ_ƒCƒ„ƒ‚ƒ“ƒhó‚É‚È‚ç‚È‚¢‚½‚ßAŠï”‚Ìê‡’i”‚ð-1
    if (_step % 2 == 0) _step -= 1;
    int median = (double)_step / 2 + 0.5;

    // ’†‰›‚Ü‚Å‚Ì•`‰æ
    for (int i = 1; i <= median; i++) {
        for (int j = 1; j <= _step; j++) {
            outputIfAbsoluteValueIsLessThanSpecifiedValue(i - 1,
                abs(median - j));
        }
        std::cout << "\n";
    }

    // ’†‰›‚æ‚è‰º‚Ì•`‰æ
    for (int i = median - 1; i >= 1; i--) {
        for (int j = 1; j <= _step; j++) {
            outputIfAbsoluteValueIsLessThanSpecifiedValue(i - 1,
                abs(median - j));
        }
        std::cout << "\n";
    }
}

void Symbol::outputIfAbsoluteValueIsLessThanSpecifiedValue(
    int determinedValue, int designatedValue) {
    if (determinedValue >= designatedValue) {
        std::cout << _character;
    } else {
        std::cout << " ";
    }
}
