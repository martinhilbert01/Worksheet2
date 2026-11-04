#include <iostream>
#include <vector>

void print_vector(std::vector<int> c) {
    for(int a : v){
        std::cout << a << "\n";
    }
}

int main(){

    std::vector<int> v;
    print_vector(v);

    return 0;
}