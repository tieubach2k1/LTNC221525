#include <iostream>
using namespace std;

struct Node
{
    const char* element;
    Node *next;
    Node(const char* e = NULL, Node *n = NULL)
    {
        element = e;
        next = n;
    }
};

struct SlinkedList
{
    Node* head;
    Node* tail;
    long size;

    SlinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void addFirst (const char* s)
    {
        Node* newNode = new Node(s, head);
        head = newNode;
    }

    void addLast(const char *s)
	{
		Node* newNode = new Node(s, NULL);
	    if (head == NULL) head = newNode;
	    else
        tail->next = newNode;
	    tail = newNode;
	}

	void removeFirst()
	{
		Node *temp = head;
		head = head->next;
		delete temp;
	}

	void removeLast()
	{
		Node *temp = head;
		while (temp->next != tail) temp = head->next;
		Node* temp2 = tail;
		tail = temp;
		temp = temp2;
		delete temp;
		tail->next = NULL;
	}

    void destructor()
	{
		while (head != NULL)
		{
			Node* tmp = head;
			head = head->next;
			delete tmp;
		}
		tail = NULL;
	}

	void insertAfter(Node* p, const char* s)
	{
		Node* newNode = new Node(s, p->next);
		p->next = newNode;
	}

	const char *remove(Node* p)
	{
		Node* tmp = head;
		while (tmp->next != p) tmp = head->next;
		tmp->next = p->next;
		return p->element;
	}

	void print()
	{
		if (head == NULL) cout << "Empty";
		else {
			Node *tmp = head;
			while (tmp != NULL)
			{
				cout << tmp->element << ' ';
				tmp = tmp->next;
			}
		}

		cout << endl;
	}
};

void testA1(SlinkedList& U)
{
    cout << "A1: " ;
    U.addLast("a");
	U.addLast("");
	U.addLast("c");
	U.addFirst("d");
	U.print();
}

void testA2(SlinkedList& U)
{
    cout << "A2: ";
    U.removeFirst();
    U.print();
}


void testA3(SlinkedList& U)
{
    cout << "A3: " ;
    U.destructor();
    U.print();
}

void testA4(SlinkedList& U)
{
    cout << "A4: ";
    U.removeLast();
    U.print();
}

void testA5(SlinkedList& U)
{
    cout << "A5: " ;
    U.insertAfter(U.head, "1");
    U.insertAfter(U.head, "3");
    U.print();
}

void testA6(SlinkedList& U)
{
    cout << "A6: " ;
    Node* p = U.head->next;
    cout << U.remove(p) << endl;
    U.print();
}
int main()
{
    SlinkedList u;

    testA1(u);
    testA2(u);
    testA4(u);
    testA5(u);
    testA6(u);
    return 0;
}
