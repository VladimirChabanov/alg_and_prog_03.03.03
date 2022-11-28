/* https://wandbox.org/permlink/HwXb9ql6TuUac2f1 */

#include <iostream>
#include <string>

struct Human{
    std::string name;
    int age;
};

void print(Human h){
    std::cout << h.name << " " << h.age;
}

int main(){
    Human john = {"John", 25};
    print(john);
}