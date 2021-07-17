#include <iostream>
#include <torch/torch.h>

int main() {
    torch::Tensor tensor = torch::rand({1, 2});
    torch::Tensor tensor1 = torch::rand({5, 8});

    std::cout << tensor1 << std::endl;

    return 0;
}

