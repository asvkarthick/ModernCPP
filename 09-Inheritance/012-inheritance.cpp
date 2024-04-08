#include <iostream>

class Codec
{
public:
    virtual void encode() = 0;
    virtual void decode() = 0;
    virtual ~Codec() {}
};

class H264 : public Codec
{
public:
    void encode()
    {
        std::cout << "H264 Encode" << std::endl;
    }
    void decode()
    {
        std::cout << "H264 Decode" << std::endl;
    }
};

class MPEG4 : public Codec
{
public:
    void encode()
    {
        std::cout << "MPEG4 Encode" << std::endl;
    }
    void decode()
    {
        std::cout << "MPEG4 Decode" << std::endl;
    }
};

class HEVC : public Codec
{
public:
    void encode()
    {
        std::cout << "HEVC Encode" << std::endl;
    }
    void decode()
    {
        std::cout << "HEVC Decode" << std::endl;
    }
};

class JPEG : public Codec
{
public:
    void encode()
    {
        std::cout << "JPEG Encode" << std::endl;
    }
    void decode()
    {
        std::cout << "JPEG Decode" << std::endl;
    }
};

int main(void)
{
    Codec *c;
    int n;

    std::cout << "1 - HEVC" << std::endl;
    std::cout << "2 - H264" << std::endl;
    std::cout << "3 - MPEG4" << std::endl;
    std::cout << "4 - JPEG" << std::endl;
    std::cout << "0 - EXIT" << std::endl;
    std::cout << "Enter an option : ";
    std::cin >> n;

    if (n == 1) c = new HEVC();
    else if (n == 2) c = new H264();
    else if (n == 3) c = new MPEG4();
    else if (n == 4) c = new JPEG();
    else if (n == 0) return 0;
    else { std::cerr << "Invalid option\n"; return -1; }

    c->encode();
    c->decode();
    delete c;

    return 0;
}
