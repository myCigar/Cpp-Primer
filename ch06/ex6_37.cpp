string (&func())[10];

auto func() -> string(&)[10];

string arrS[10];
decltype(arrS)& func();
