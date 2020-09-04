#include <iostream>
#include <memory>
#include <string>

struct connection {
    std::string ip;
    int port;
    connection(std::string _ip, int _port) : ip(_ip), port(_port) { }
};

struct destination {
    std::string ip;
    int port;
    destination(std::string _ip, int _port) : ip(_ip), port(_port) { }
};

connection connect(destination *pDest)
{
    std::shared_ptr<connection> pConn = std::make_shared<connection>(pDest->ip, pDest->port);
    std::cout << "creating connection(" << pConn.use_count() << ")" << std::endl;
    return *pConn;
}

void disconnect(connection conn)
{
    std::cout << "connection close(" << conn.ip << ":" << conn.port << ")" << std::endl;
}

void end_connection(connection *p)
{
    disconnect(*p);
}

void f(destination &dest)
{
    connection conn = connect(&dest);
    std::shared_ptr<connection> pConn(&conn, end_connection);
}

int main()
{
    destination dest("127.0.0.1", 5050);
    f(dest);
    return 0;
}
