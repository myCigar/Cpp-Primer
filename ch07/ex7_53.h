#ifndef EX7_53_H_
#define EX7_53_H_
 
class Debug {
public:
    constexpr Debug(bool e = true) : hw(e), io(e), other(e) { }
    constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) { }
    constexpr bool any() { return hw || io || other; }
    constexpr void set_hw(bool b) { hw = b; }
    void set_io(bool b) { io = b; }
    void set_other(bool b) { other = b; }

private:
    bool hw;
    bool io;
    bool other;
};


#endif