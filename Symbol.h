#pragma once
#include <string>

class Symbol {
private:
	char _character;	// 出力する文字
	int _step;	// 出力する段数

public:
	/* getterとsetter */
	char getCharacter();
	char setCharacter(char value);
	int getStep();
	int setStep(int value);

	/* 図形出力処理 */
	void generateSymbolOfRightDownStairs();	// 右下がり階段状`
	void generateSymbolOfLeftDownStairs();	// 左下がり階段状`
	void generateSymbolOfDiamond();			// ダイヤモンド状`

	// 指定値が規定値以下の場合は_characterを、それ以外の場合は空白を出力する
	void outputIfAbsoluteValueIsLessThanSpecifiedValue(int determinedValue, int designatedValue);
};


inline char Symbol::getCharacter() {
	return _character;
}

inline char Symbol::setCharacter(char value) {
	_character = value;
	return 0;
}

inline int Symbol::getStep() {
	return _step;
}

inline int Symbol::setStep(int value) {
	_step = value;
	return 0;
}