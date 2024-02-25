//
// Created by ubuntu on 24-2-25.
//

#include "string"
#include "iostream"

void print_logo() {
    std::string logo = R"(
 ____             _   _    _ _ _
|  _ \ ___   ___ | |_| | _(_) | | ___ _ __
| |_) / _ \ / _ \| __| |/ / | | |/ _ \ '__|
|  _ < (_) | (_) | |_|   <| | | |  __/ |
|_| \_\___/ \___/ \__|_|\_\_|_|_|\___|_|
    )";
    std::cout << logo.c_str() << std::endl;
}

void print_options() {
    std::string options = R"(
 [INFO] 操作信息
 1. SSH登录破解
 2.
    )";
}