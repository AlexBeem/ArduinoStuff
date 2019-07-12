#ifndef	BRAINFUCK_H
#define	BRAINFUCK_H

#define DB_MEMORY	512

typedef enum { 
	BF_SUCCESS = 0,
	BF_PROGRAM_UNDERFLOW,
	BF_PROGRAM_EXHAUSTED,
	BF_MEMORY_UNDERFLOW,
	BF_MEMORY_EXHAUSTED
} BFResult;


//
// ��������!!!
// ������� �������� ���������� �� ������-��������
// � ������ ������� �� �� ��� �������, �� ���������� 
// ��������� ����� BrainFuck
//
BFResult BrainFuck(char *);

#endif	//	BRAINFUCK_H

