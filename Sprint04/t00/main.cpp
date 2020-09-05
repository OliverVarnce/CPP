#include <iostream>
#include <forward_list>
#include "algorithmUtils.h"

int main() {
    // {
    //std::forward_list<int> fl{1, 3, 4, 3, 2, 1, 4, 3};
    //Utils::RemoveAll(fl, 3);
    //for (const auto& x : fl)
    //    std::cout << x << std::endl;
    //}

    // {
    // std::forward_list<int> fl{1, 3, 4, 3, 2, 1, 4, 3};
    // Utils::RemoveAllIf(fl, [](int i) {return i > 2;});
    // for (const auto& x : fl) 
    //     std::cout << x << std::endl;
    // }

    // {
    // std::forward_list<int> fl{1, 3, 4, 3, 2, 1, 4, 3};
    // auto it = Utils::Find(fl, 2);
    // if (it == fl.end())
    //     std::cout << "not finded" << std::endl;
    // else
    //     std::cout << std::distance(fl.begin(), it) << std::endl;
    // }

    // {
    // std::cout << "Find" << std::endl;
    // std::forward_list<int> fl{1, 3, 4, 3, 2, 1, 4, 3};
    // auto it = Utils::Find(fl, 2);
    // if (it == fl.end())
    //     std::cout << "not finded" << std::endl;
    // else
    //     std::cout << std::distance(fl.begin(), it) << std::endl;
    // }

    // {
    // std::cout << "Contains" << std::endl;
    // std::forward_list<int> fl{1, 3, 4, 3, 2, 1, 4, 3};
    // bool isContains = Utils::Contains(fl, 2);

    // std::cout << isContains << std::endl;
    // }
    // {
    //     std::forward_list<int> fl{1, 3, 4, 3, 2, 1, 4, 3};
    //     std::cout << Utils::Max(0, -1, 14, -2, 0, 6, -4, 0, 9) << std::endl;
    // }

    // {
    //     std::forward_list<int> fl{1, 2, 9, -9, 5, 3, 7};
    //     std::cout << *Utils::MaxElement(fl) << std::endl;
    // }
    // {
    //     std::forward_list<int> fl{1, 2, 9, -9, 5, 3, 7};
    //     std::cout << *Utils::MinElement(fl, [] (int a, int b) {
    //         return a < b;
    //     }) << std::endl;
    // }

    // {
    //     std::forward_list<int> fl{-9, 1, 2, 9, -9, 1, 5, 3, 3, 7, 10};
    //     Utils::Unique(fl, [] (int a, int b) {
    //         return a > b;
    //     });
    //     for (const auto& x : fl)
    //         std::cout << x << std::endl;
    // }

    // {
    //     std::forward_list<int> fl{-9, 1, 2, 9, -9, 1, 5, 3, 3, 7, 10};
    //     Utils::ForEach(fl, [] (int& i) {i++;});
    //     for (const auto& x : fl)
    //         std::cout << x << std::endl;
    // }

    // {
    //     std::forward_list<int> fl{-9, 1, 2, 9, -9, 1, 5, 3, 3, 7, 10};
    //     std::cout << Utils::IndexOf(fl, 2) << std::endl;
    // }
}