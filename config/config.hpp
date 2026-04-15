#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>
#include <vector>
#include <unordered_map>

namespace config {

   struct Location {
    std::string uri;
    std::string root;
    std::string proxy_pass;
    std::vector<std::string> index;
    bool autoindex = false;
   };
    
   struct VirtualHost{
    std::vector<std::string> listen;
    std::vector<std::string> server_name;
    std::string root;
    std::vector<Location> locations;
    bool ssl = false;
    std::string ssl_sertificate;
    std::string ssl_sertificate_key;
    struct Limits {
      int8_t send_timeout = 30;
      int8_t read_timeout = 30;
      int8_t keepalive_timeout = 65;
      uint8_t max_connections_per_ip = 10;
      uint8_t client_max_body_size = {1 * 1024 * 1024};  
    };
   };

} // namespace config

#endif