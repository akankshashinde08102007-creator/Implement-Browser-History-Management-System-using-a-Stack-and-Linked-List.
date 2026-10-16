#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string page;
    Node* next;
};

Node* top = NULL;

void visitPage(string name)
{
    Node* newNode = new Node;
    newNode->page = name;
    newNode->next = top;
    top = newNode;

    cout << "\nPage visited successfully: " << name << endl;
}

void goBack()
{
    if (top == NULL)
    {
        cout << "\nNo browser history available!" << endl;
        return;
    }

    Node* temp = top;

    cout << "\nGoing back from: " << top->page << endl;

    top = top->next;
    delete temp;

    if (top != NULL)
        cout << "Current page: " << top->page << endl;
    else
        cout << "No page is currently open." << endl;
}

void showCurrentPage()
{
    if (top == NULL)
    {
        cout << "\nNo page is currently open." << endl;
    }
    else
    {
        cout << "\nCurrent page: " << top->page << endl;
    }
}

void displayHistory()
{
    if (top == NULL)
    {
        cout << "\nNo browser history available!" << endl;
        return;
    }

    Node* temp = top;
    int count = 1;

    cout << "\nBrowser History:\n";

    while (temp != NULL)
    {
        cout << count << ". " << temp->page << endl;
        temp = temp->next;
        count++;
    }

    cout << "Total pages visited: " << count - 1 << endl;
}

void searchPage(string name)
{
    Node* temp = top;

    while (temp != NULL)
    {
        if (temp->page == name)
        {
            cout << "\nPage found: " << name << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "\nPage not found in browser history!" << endl;
}

int main()
{
    int choice;
    string name;

    do
    {
        cout << "\nBROWSER HISTORY MANAGEMENT SYSTEM\n";
        cout << "1. Visit New Page\n";
        cout << "2. Go Back\n";
        cout << "3. Display Browser History\n";
        cout << "4. Show Current Page\n";
        cout << "5. Search Page\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter page name: ";
                cin >> name;
                visitPage(name);
                break;

            case 2:
                goBack();
                break;

            case 3:
                displayHistory();
                break;

            case 4:
                showCurrentPage();
                break;

            case 5:
                cout << "Enter page to search: ";
                cin >> name;
                searchPage(name);
                break;

            case 6:
                cout << "\nThank you for using Browser History System!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 6);

    return 0;
}
