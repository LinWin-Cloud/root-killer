//
// Created by ubuntu on 24-2-22.
//

#include "__init__.cpp"
#include "lib.cpp"
#include "iostream"

int main () {
    /**
     * 输出 logo , 调用 __init__库内的 print_logo()
     */
    print_logo();
    /**
     * 第一次调用 __init__ 中的 print_options() , 输出可操作内容.
     */
    print_options();
    while (true) {
        std::string in = trim(input("RootKiller# "));
        if (in == "q") {
            break;
        }
    }
    return 0;
}