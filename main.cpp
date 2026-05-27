#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
};

vector<Book> books;

void addBook() {
    Book b;

    cout << "Назва книги: ";
    cin.ignore();
    getline(cin, b.title);

    cout << "Автор: ";
    getline(cin, b.author);

    books.push_back(b);

    cout << "Книгу додано!\n";
}



int main() {
    int choice;

    do {
        cout << "\n1. Додати книгу\n";
        cout << "2. Показати книги\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addBook();
            break;

        case 2:
            showBooks();
            break;

        case 0:
            cout << "Вихід...\n";
            break;

        default:
            cout << "Невірний вибір!\n";
        }

    } while (choice != 0);

    return 0;
}