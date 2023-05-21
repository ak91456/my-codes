#include<iostream>
#include <map>

class HashTable {
private:
    std::map<int, int> table;

public:
    void insert(int key) {
        int hash = key % 10;
        table[hash] = key;
        std::cout << "Inserted key " << key << " at hash " << hash << std::endl;
    }

    bool search(int key) {
        int hash = key % 10;
        if (table.find(hash) != table.end() && table[hash] == key) {
            std::cout << "Key " << key << " found at hash " << hash << std::endl;
            return true;
        }
        std::cout << "Key " << key << " not found" << std::endl;
        return false;
    }

    void remove(int key) {
        int hash = key % 10;
        if (table.erase(hash) > 0) {
            std::cout << "Key " << key << " removed from hash " << hash << std::endl;
        } else {
            std::cout << "Key " << key << " not found for removal" << std::endl;
        }
    }

    void print() {
        for (const auto& entry : table) {
            std::cout << "Hash " << entry.first << ": " << entry.second << std::endl;
        }
    }
};

int main() {
    HashTable hashTable;

    int option, key;

    do {
        std::cout << "Select an option:\n";
        std::cout << "1. Insert key\n";
        std::cout << "2. Search key\n";
        std::cout << "3. Remove key\n";
        std::cout << "4. Print hash table\n";
        std::cout << "0. Exit\n";
        std::cout << "Option: ";
        std::cin >> option;

        switch (option) {
            case 1:
                std::cout << "Enter key to insert: ";
                std::cin >> key;
                hashTable.insert(key);
                break;
            case 2:
                std::cout << "Enter key to search: ";
                std::cin >> key;
                hashTable.search(key);
                break;
            case 3:
                std::cout << "Enter key to remove: ";
                std::cin >> key;
                hashTable.remove(key);
                break;
            case 4:
                std::cout << "Hash table contents:\n";
                hashTable.print();
                break;
            case 0:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid option. Try again.\n";
                break;
        }

        std::cout << std::endl;

    } while (option != 0);

    return 0;
}