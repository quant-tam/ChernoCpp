#include <iostream>
#include <vector>
// 定义一个顶点类
struct Vertex {
    float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex) {
    stream << "(" << vertex.x << ", " << vertex.y << ", " << vertex.z << ")";
    return stream;
}

int main() {
    std::vector<Vertex> vertices;
    vertices.push_back({1, 2, 3});
    vertices.push_back({4, 5, 6});

    for (const auto& vertex: vertices) {
        std::cout << vertex << std::endl;
    }
    // 清空 vector
    vertices.clear();
}