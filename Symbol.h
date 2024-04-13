#pragma once
#include <string>

class Symbol {
private:
	char _character;	// �o�͂��镶��
	int _step;	// �o�͂���i��

public:
	/* getter��setter */
	char getCharacter();
	char setCharacter(char value);
	int getStep();
	int setStep(int value);

	/* �}�`�o�͏��� */
	void generateSymbolOfRightDownStairs();	// �E������K�i��`
	void generateSymbolOfLeftDownStairs();	// ��������K�i��`
	void generateSymbolOfDiamond();			// �_�C�������h��`

	// �w��l���K��l�ȉ��̏ꍇ��_character���A����ȊO�̏ꍇ�͋󔒂��o�͂���
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