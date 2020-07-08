#ifndef EBAY_API_H
#define EBAY_API_H
#include <iostream>
#include <string.h>

namespace APIManager {
    class ebay_api;
}
class APIManager::ebay_api
{
    public:
        ebay_api();
        ~ebay_api();
    public:
        std::string get_ebayApi();


};

#endif // EBAY_API_H
