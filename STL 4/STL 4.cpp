#include <iostream>
#include <list>

using namespace std;
//List
//
//template <class T, class Allocator = Allocator<T>>
//class list
//
//explicit list(const Allocator & a = Allocator());
//explicit list(size_type num, const T& val = T(), const Allocator& a = Allocator());
//list(const list <T, Allocator>& ob);
//template < class InIter> list(InIter start, InIter end, const Allocator& a = Allocator());
/*
* ����� list �������� ��������� �������-�����:
template <class InIter> void assign(InIter start, InIter end); �������� � ������ ������������������, ������������ ����������� start � end.
void assign(size_type num, const T &val); �������� � ������ num ��������� �� ��������� val.

reference back();
const_reference back() const;���������� ������ �� ��������� ������� � ������.

iterator begin();
const_iterator begin() const; ���������� �������� ��� ������� �������� � ������.

void clear(); ������� ��� �������� �� ������.

bool empty() const;���������� �������� ������, ���� ������������ ������ ����, � �������� ��� � ��������� ������.

const_iterator end() const;
iterator end(); ���������� �������� ��� ����� ������.

iterator erase(iterator i);������� �������, ���������� ���������� i, ���������� �������� ��� ��������, �������������� ����� ����������.

iterator erase(iterator start, iterator end);������� �������� � ���������, ���������� ������-����� start � end, ���������� �������� ��� ��������,�������������� �� ��������� �������� ���������.

reference front();
const_reference front() const; ���������� ������ �� ������ ������� � ������.

allocator_type get_allocator() const; ���������� �������������� ������.

iterator insert(iterator i, const T &val = T());��������� �������� val ��������������� ����� ���-
������, �������� ���������� i, ���������� ��������
��� ����� ��������.

void insert(iterator i, size_type num, const T &val);��������� num ����� �������� val ��������������� ����� ���������, �������� ���������� i.
template <class InIter> void insert(iterator i, InIter start, InIter end);��������� � ������ ������������������, ��������-���� ����������� start � end, ��������������� �����
���������, �������� ���������� i.


size_type max_size() const;���������� ������������ ����� ���������, ������� ����� ��������� ������.


void merge(list<T,Allocator> &ob);
template <class Comp> void merge(list<T,Allocator>&ob, Comp cmpfn);���������� ������������� ������, ������������� ������� ob, � ������ ������������� �������. ������-
��� ����� ���������������. ����� ����������� ������,
������������ � ������� ob, �������� ������. �� ������
����� ����� ���� ������ ������� ���������, �������
����������, ����� ���� ������� ������ �������.


void pop_back();������� ��������� ������� � ������.

void pop_front();������� ������ ������� � ������.

void push_back(const T &val);��������� � ����� ������ ������� �� ���������, �������� ���������� val.

void push_front(const T &val);��������� � ������ ������ ������� �� ���������,�������� ���������� val.


reverse_iterator rbegin();
const_reverse_iterator rbegin() const;���������� ����������� �������� ��� ����� ������.


reverse_iterator rend();
const_reverse_iterator rbegin() const;���������� ����������� �������� ��� ������ ������.

void remove(const T &val);������� �� ������ �������� �� ���������, �������� ���������� val.

template <class UnPred> void remove_if(UnPred pr);������� ��������, ��� ������� ������� �������� pr ����� �������� true.

void resize(size_type num, const T &val = T());
������������� ������� ������ ������ �� ����� �����-
���� �������� num, ���� ������ ��� ����� ����� ����-
����, �� � ��� ����� ����������� �������� �� ���������,
�������� ���������� val.

void reverse();����������� ������.

size_type size() const;���������� ������� ���������� ��������� � ������.

void sort();
template <class Comp> void sort(Comp cmpfn);
��������� ������. ������ ����� ��������� ������
� ������� ������� ��������� cmpfn, ����� ����������,
����� ���� ������� ������ �������.

void splice(iterator i, list<T,Allocator> &ob);
��������� ���������� ������ ob � ������ ������
� �������, ��������� ���������� i. ����� ����������
���� �������� ������ ob �������� ������.

void splice(iterator i, list<T,Allocator> &ob,
iterator el);
������� �� ������ ob �������, ���������� ����������
el, � ��������� ��� � �������, ���������� ���������� i.
void splice(iterator i, list<T,Allocator> &ob,

iterator start, iterator end);
������� �� ������ ob ��������, ������������ ��-
��������� start � end, � ��������� ��� � ������ ������,
������� � �������, ���������� ���������� i.

void swap(list<T,Allocator> &ob);��������� ����� ���������� ������� ������ � ������ ob.

void unique();
template <class BinPred> void unique(BinPred pr);
������� �� ������ ��������-���������. ������ �����
��� ����������� ������������ ���������� �������� pr.

* 
* 
* 
*/
typedef list<int> ourList;
void ShowList(ourList& l1, ourList& l2)
{
	ourList::iterator iter;
	cout << "List1: ";
	for (iter = l1.begin(); iter != l1.end(); iter++)
		cout << *iter<<" ";
	cout << endl << "list2: ";
	for (iter = l2.begin(); iter != l2.end(); iter++)
		cout << *iter << " ";
	cout << endl << endl;
}


void main()
{
	ourList list1,list2;
	for (int i = 0; i < 6; i++) 
	{
		list1.push_back(i);
		list2.push_back(i);
	}
	ShowList(list1, list2);
	list2.splice(list2.end(),list2,list2.begin());
	list1.reverse();
	ShowList(list1, list2);
	list1.sort();
	list2.sort();
	ShowList(list1, list2);
	list1.merge(list2);
	ShowList(list1, list2);
	list1.unique();
	ShowList(list1, list2);

}