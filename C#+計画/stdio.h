#ifndef _STDIO_H
#define _STDIO_H

// ファイルの位置を示す型
typedef long fpos_t;

// 標準入出力ストリーム
extern FILE* stdin;  // 標準入力
extern FILE* stdout; // 標準出力
extern FILE* stderr; // 標準エラー出力

// 標準入出力関数
int printf(const char* format, ...); // 書式付き出力
int scanf(const char* format, ...);  // 書式付き入力
int fprintf(FILE* stream, const char* format, ...); // ストリームに対して書式付き出力
int fscanf(FILE* stream, const char* format, ...);  // ストリームから書式付き入力
int sprintf(char* buffer, const char* format, ...); // 文字列に対して書式付き出力
int sscanf(const char* buffer, const char* format, ...); // 文字列から書式付き入力

// その他の関数やマクロは省略

#endif // _STDIO_H
