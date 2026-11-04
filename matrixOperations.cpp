#include <iostream>
#include <vector>

void print_vector(std::vector<int> c) {
    for(int a : c){
        std::cout << a << "\n";
    }
}

void print_Matrix(std::vector<std::vector<int>> B) {
    for(auto& zeile : B){
        for(int wert : zeile){
            std::cout << wert << " ";
        }
        std::cout << "\n";
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

    //int v_size = v.size();
    int d;
    std::vector<int> inner_v;
    std::vector<std::vector<int>> A;
    //std::vector<std::vector<int>> A;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){
            std::cin >> d;
            inner_v.push_back(d);
        }
        A.push_back(inner_v);
    }
    std::cout << v.size();
    print_Matrix(A);

    return 0;
}