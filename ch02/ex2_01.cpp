/*
 * int, long, long long, short在计算机占的大小不一样，所以能够容纳的数字范围也不一样。 
 * int : 2 or 4 (新一点的计算机都是4个字节)
 * long : 2 or 4 (新一点的计算机都是4个字节)
 * long long : 8
 * short : 2
 */
 
 
 /*
  * 无符号类型不能够保存负数，但如果确保某一变量不可能为负数，可以使用无符号类型在同样的大小下保存更大的范围。
  * 如果变量有可能为负数，那么只能使用带符号的类型
  * float和double对小数的精度不一样，float最多保存6位有效数字，而double可以保存10位有效数字。
  * 但同时double占的空间大小也高于float
  * / 
