// string s in function is not change, so we need add const to string &
// if not add const, this express will be error: is_empty("Hello");
bool is_empty(const string &s)
{
    return s.empty();
}