#include <iostream>
#include <vector>

class MinHeap {
private:
    std::vector<int> heap;

    void siftUp(int index) {
        int parentIndex = (index - 1) / 2;
        if (index > 0 && heap[index] < heap[parentIndex]) {
            std::swap(heap[index], heap[parentIndex]);
            siftUp(parentIndex);
        }
    }

public:
    void insert(int value) {
        heap.push_back(value);
        siftUp(heap.size() - 1);
    }

    void print() {
        for (int i = 0; i < heap.size(); i++) {
            std::cout << heap[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MinHeap minHeap;

    int numElements;
    std::cout << "Enter the number of elements to insert: ";
    std::cin >> numElements;

    int element;
    for (int i = 0; i < numElements; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> element;
        minHeap.insert(element);
    }

    std::cout << "Min Heap elements: ";
    minHeap.print();

    return 0;
}