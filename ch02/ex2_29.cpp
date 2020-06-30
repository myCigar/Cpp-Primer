/*
 * (a): 合法, ic顶层const，不影响 
 * (b): 不合法, p3存在底层const, 而p1没有 
 * (c): 不合法, 实际是这样执行的 
        const int *temp = &ic;
        p1 = temp;
        其中temp是一个底层const，所以不合法 
 * (d): 不合法, p3为常量 
 * (e): 不合法, p2本身为常量，不可对其赋值
 * (f): 不合法, ic为常量 
 */
