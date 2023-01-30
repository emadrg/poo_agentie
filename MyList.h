//
// Created by drgem on 29/01/2023.
//

#ifndef OOP_MYLIST_H
#define OOP_MYLIST_H

#include <vector>

template <typename T>
class MyList {
private:
    std::vector<T> v;

public:
    MyList() = default;

    [[nodiscard]] int size() const {
        return v.size();
    }

    T get(int i) const {
        if (i >= size())
            return nullptr;
        return v[i];
    }

    void add(T el) {
        v.push_back(el);
    }

    void emplace_back(T el) {
        v.emplace_back(el);
    }
};


#endif //OOP_MYLIST_H
