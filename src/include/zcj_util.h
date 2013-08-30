#ifndef _UTIL_H_
#define _UTIL_H_

#include "zcj_type.h"

#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) (((x)>(y)?(x):(y)))

/*自己实现的通用函数*/
int Char2Int(u8 c);
u8 Int2Char(int val);
int Str2Int(int *result,const u8 *str);
u8* Int2Str(u8 *str,const int i);
u8* Char2Hexs(u8 *str,const u8 value);
u8 Hexs2Char(u8 *value,const u8 *str);
u8 *Float2Str(u8 *str,const float f,const int precise);
float Str2Float(float *f,const u8 *str);
u8 *Hexs2Str(u8 *des,const u8 *src,int count);
u8 *Str2Hexs(u8 *des,const u8 *src,int count);

int htoi(char hex[]);
int otoi(char oct[]);

/*判断字符类型*/
/*以下函数在ctype.h中都有对应的函数*/
bool IsSpace(u8 c);
bool IsNum(u8 c);
bool IsAlpha(u8 c);
bool IsUpper(u8 c);
bool IsLower(u8 c);

bool IsLegalForHex(u8 c);

/*字符串操作有关函数*/
u8 *Trim(u8 *str,bool begin,bool end);
u8 *StringInit(u8 *str,u8 c,int length);
u8 *InsertNChar(u8 *str,u8 ch,int begin,int length);
u8 *StringNCopy(u8 *des,const u8 *src,int begin,int count);
u8* StringReverse(u8 *str);

char* Char2Ints(char *des,char c);
char Ints2Char(const char *src);
char* ExtendFloatStr(char *dest,const char *src,int int_len,int frac_len);
void TrimInts(char *dest);
void TrimFloat(char *dest);
void Delay(int sec);


#endif /* _UTIL_H_ */

