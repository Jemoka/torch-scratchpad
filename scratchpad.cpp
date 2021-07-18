#include <iostream>
#include <torch/torch.h>
#include <torch/nn.h>

struct Net : torch::nn::Module {
    torch::nn::Linear hahahhahaha;

    Net() {
        hahahhahaha = register_module("fc1", torch::nn::Linear(12, 23));
    }

    torch::Tensor forward(torch::Tensor x) {
        return hahahhahaha->forward(x);
    }
};

int main() {
    auto net = std::make_shared<Net>();

    return 0;
}

