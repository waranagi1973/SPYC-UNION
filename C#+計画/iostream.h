#ifndef _IOSTREAM_
#define _IOSTREAM_

#include <ios> // 基本的な入出力機能を提供するヘッダーファイル
#include <streambuf> // ストリームバッファの操作に関するヘッダーファイル
#include <istream> // 入力ストリームに関するヘッダーファイル
#include <ostream> // 出力ストリームに関するヘッダーファイル

// 標準入出力ストリーム
extern std::istream cin; // 標準入力
extern std::ostream cout; // 標準出力
extern std::ostream cerr; // 標準エラー出力
extern std::ostream clog; // 標準ログ出力

// その他のクラスや関数は省略

#endif // _IOSTREAM_
