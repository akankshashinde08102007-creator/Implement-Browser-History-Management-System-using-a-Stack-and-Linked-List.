
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

    cout << "Visited: " << name << endl;
}

void displayHistory()
{
    Node* temp = top;

    cout << "Browser History: ";

    while (temp != NULL)
    {
        cout << temp->page << " ";
        temp = temp->next;
    }

    cout << endl;
}

void goBack()
{
    if (top == NULL)
    {
        cout << "No history available!" << endl;
        return;
    }

    Node* temp = top;

    cout << "Back from: " << temp->page << endl;

    top = top->next;
    delete temp;
}

int main()
{
    visitPage("Google");
    visitPage("YouTube");
    visitPage("GitHub");
    visitPage("Facebook");
    visitPage("Instagram");
    visitPage("LinkedIn");
    visitPage("Amazon");
    visitPage("Wikipedia");

    displayHistory();

    goBack();
    displayHistory();

    goBack();
    displayHistory();

    visitPage("Twitter");
    displayHistory();

    goBack();
    displayHistory();

    return 0;
}
