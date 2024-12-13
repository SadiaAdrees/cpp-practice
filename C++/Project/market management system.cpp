#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    string name;
    double price;
    Product* next;

    Product(string n, double p) {
        name = n;
        price = p;
        next = NULL;
    }
};

class MarketManager {
private:
    Product* head;

public:
    MarketManager() {
        head = NULL;
    }

    void addProduct(string name, double price) {
        Product* newProduct = new Product(name, price);

        if (head == NULL) {
            head = newProduct;
        } else {
            Product* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newProduct;
        }
        cout << "Product added successfully!" << endl;
    }

    void displayProducts() {
        if (head == NULL) {
            cout << "No products available." << endl;
        } else {
            Product* temp = head;
            cout << "Product List:" << endl;
            while (temp != NULL) {
                cout << "Name: " << temp->name << ", Price: $" << temp->price << endl;
                temp = temp->next;
            }
        }
    }

    void updateProduct(string oldName, string newName, double newPrice) {
        Product* temp = head;
        bool found = false;
        while (temp != NULL) {
            if (temp->name == oldName) {
                temp->name = newName;
                temp->price = newPrice;
                cout << "Product updated successfully!" << endl;
                found = true;
                break;
            }
            temp = temp->next;
        }
        if (!found) {
            cout << "Product not found." << endl;
        }
    }

    void deleteProduct(string name) {
        if (head == NULL) {
            cout << "No products available." << endl;
            return;
        }

        if (head->name == name) {
            Product* temp = head;
            head = head->next;
            delete temp;
            cout << "Product deleted successfully!" << endl;
            return;
        }

        Product* temp = head->next;
        Product* prev = head;
        bool found = false;
        while (temp != NULL) {
            if (temp->name == name) {
                prev->next = temp->next;
                delete temp;
                cout << "Product deleted successfully!" << endl;
                found = true;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        if (!found) {
            cout << "Product not found." << endl;
        }
    }

    void linearSearch(string name) {
        Product* temp = head;
        bool found = false;
        while (temp != NULL) {
            if (temp->name == name) {
                cout << "Product found: " << temp->name << ", Price: $" << temp->price << endl;
                found = true;
            }
            temp = temp->next;
        }
        if (!found) {
            cout << "Product not found." << endl;
        }
    }

	void binarySearch(string name) {
    // Convert the linked list to an array for binary search
    int size = 0;
    Product* temp = head;
    while (temp != NULL) {
        size++;
        temp = temp->next;
    }

    Product** productsArray = new Product*[size];
    temp = head;
    for (int i = 0; i < size; i++) {
        productsArray[i] = temp;
        temp = temp->next;
    }

    // Perform binary search on the array
    int left = 0;
    int right = size - 1;
    bool found = false;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (productsArray[mid]->name == name) {
            cout << "Product found: " << productsArray[mid]->name << ", Price: $" << productsArray[mid]->price << endl;
            found = true;
            break;
        } else if (productsArray[mid]->name < name) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    delete[] productsArray;

    if (!found) {
        cout << "Product not found." << endl;
    }
}

};


int main() {
    MarketManager market;

    string productName;
    double productPrice;
    string searchName;
    string updateName;
    double updatePrice;
    string deleteName;

    char choice;
    bool running = true;

    while (running) {
        cout << "************ Market Management System ************" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. Display Products" << endl;
        cout << "3. Search Product (Linear)" << endl;
        cout << "4. Search Product (Binary)" << endl;
        cout << "5. Update Product" << endl;
        cout << "6. Delete Product" << endl;
        cout << "7. Quit" << endl;
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter the product name: ";
                cin.ignore();
                getline(cin, productName);
                cout << "Enter the product price: ";
                cin >> productPrice;
                market.addProduct(productName, productPrice);
                break;

            case '2':
                market.displayProducts();
                break;

            case '3':
                cout << "Enter the product name to search (Linear): ";
                cin.ignore();
                getline(cin, searchName);
                market.linearSearch(searchName);
                break;

            case '4':
                cout << "Enter the product name to search (Binary): ";
                cin.ignore();
                getline(cin, searchName);
                market.binarySearch(searchName);
                break;

            case '5':
                cout << "Enter the product name to update: ";
                cin.ignore();
                getline(cin, updateName);
                cout << "Enter the new product name: ";
                getline(cin, productName);
                cout << "Enter the new product price: ";
                cin >> updatePrice;
                market.updateProduct(updateName, productName, updatePrice);
                break;

            case '6':
                cout << "Enter the product name to delete: ";
                cin.ignore();
                getline(cin, deleteName);
                market.deleteProduct(deleteName);
                break;

            case '7':
                running = false;
                cout << "Exiting Market Management System. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}


