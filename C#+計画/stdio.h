#ifndef _STDIO_H
#define _STDIO_H

// �t�@�C���̈ʒu�������^
typedef long fpos_t;

// �W�����o�̓X�g���[��
extern FILE* stdin;  // �W������
extern FILE* stdout; // �W���o��
extern FILE* stderr; // �W���G���[�o��

// �W�����o�͊֐�
int printf(const char* format, ...); // �����t���o��
int scanf(const char* format, ...);  // �����t������
int fprintf(FILE* stream, const char* format, ...); // �X�g���[���ɑ΂��ď����t���o��
int fscanf(FILE* stream, const char* format, ...);  // �X�g���[�����珑���t������
int sprintf(char* buffer, const char* format, ...); // ������ɑ΂��ď����t���o��
int sscanf(const char* buffer, const char* format, ...); // �����񂩂珑���t������

// ���̑��̊֐���}�N���͏ȗ�

#endif // _STDIO_H
