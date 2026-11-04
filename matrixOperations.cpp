#include <iostream>
#include <vector>

void print_vector(std::vector<int> c) {
    for(int a : c){
        std::cout << a << "\n";
    }
}

int main(){

    std::vector<int> v;
    int x;

    while(std::cin >> x){
        v.push_back(x);
    }
    std::cin.clear();
    std::cin.ignore();

    print_vector(v);

    return 0;
}