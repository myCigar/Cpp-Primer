/*
 * 单引号表示单个字符，双引号表示字符串
 * 'a' : char类型的字符a, 8bytes
 * L'a': wchar_t类型的字符a, 16bytes
 * "a" : 字符串a, 类型为const char *
 * L"a": 宽字符串a，类型为const wchar_t * 
 */
 
 
 /*
  * 其内容都是10，但是类型和进制不一样
  * 10  : 10进制, int
  * 10u : 10进制, unsigned
  * 10L : 10进制, wchar_t
  * 10uL: 10进制, unsigned wchar_t
  * 012 :  8进制, int
  * 0xC :  8进制, int 
  */
  
  
/*
 * 数据类型不一致
 * 3.14 : double
 * 3.14f: float
 * 3.14L: long double
 */
 
 
/*
 * 值与类型不一致 
 * 10   : int,      10
 * 10u  : unsigned, 10
 * 10.  : double,   10.0
 * 10e-2: double,   0.1
 */
