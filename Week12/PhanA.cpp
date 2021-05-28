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

void testA1(SlinkedList& L)
{
    cout << "A1: " ;
    L.addLast("a");
	L.addLast("");
	L.addLast("c");
	L.addFirst("d");
	L.print();
}

void testA2(SlinkedList& L)
{
    cout << "A2: ";
    L.removeFirst();
    L.print();
}


void testA3(SlinkedList& L)
{
    cout << "A3: " ;
    L.destructor();
    L.print();
}

void testA4(SlinkedList& L)
{
    cout << "A4: ";
    L.removeLast();
    L.print();
}

void testA5(SlinkedList& L)
{
    cout << "A5: " ;
    L.insertAfter(L.head, "1");
    L.insertAfter(L.head, "3");
    L.print();
}

void testA6(SlinkedList& L)
{
    cout << "A6: " ;
    Node* p = L.head->next;
    cout << L.remove(p) << endl;
    L.print();
}
int main()
{
    SlinkedList l;

    testA1(l);
    testA2(l);
    testA4(l);
    testA5(l);
    testA6(l);
    return 0;
}
