#ifndef HTTP_CLIENT_H
#define HTTP_CLIENT_H

#include <string>

class HttpClient
{
   public:
    std::string get(const std::string& url) const;
};

#endif
