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
* Класс list содержит следующие функции-члены:
template <class InIter> void assign(InIter start, InIter end); Помещает в список последовательность, определяемую параметрами start и end.
void assign(size_type num, const T &val); Помещает в список num элементов со значением val.

reference back();
const_reference back() const;Возвращает ссылку на последний элемент в списке.

iterator begin();
const_iterator begin() const; Возвращает итератор для первого элемента в списке.

void clear(); Удаляет все элементы из списка.

bool empty() const;Возвращает значение истины, если используемый список пуст, и значение лжи в противном случае.

const_iterator end() const;
iterator end(); Возвращает итератор для конца списка.

iterator erase(iterator i);Удаляет элемент, адресуемый итератором i, возвращает итератор для элемента, расположенного после удаленного.

iterator erase(iterator start, iterator end);Удаляет элементы в диапазоне, задаваемом параме-трами start и end, возвращает итератор для элемента,расположенного за последним удалённым элементом.

reference front();
const_reference front() const; Возвращает ссылку на первый элемент в списке.

allocator_type get_allocator() const; Возвращает распределитель списка.

iterator insert(iterator i, const T &val = T());Вставляет значение val непосредственно перед эле-
ментом, заданным параметром i, возвращает итератор
для этого элемента.

void insert(iterator i, size_type num, const T &val);Вставляет num копий значения val непосредственно перед элементом, заданным параметром i.
template <class InIter> void insert(iterator i, InIter start, InIter end);Вставляет в список последовательность, определя-емую параметрами start и end, непосредственно перед
элементом, заданным параметром i.


size_type max_size() const;Возвращает максимальное число элементов, которое может содержать список.


void merge(list<T,Allocator> &ob);
template <class Comp> void merge(list<T,Allocator>&ob, Comp cmpfn);Объединяет упорядоченный список, содержащийсяв объекте ob, с данным упорядоченным списком. Резуль-
тат также упорядочивается. После объединения список,
содержащийся в объекте ob, остается пустым. Во второй
форме может быть задана функция сравнения, которая
определяет, когда один элемент меньше другого.


void pop_back();Удаляет последний элемент в списке.

void pop_front();Удаляет первый элемент в списке.

void push_back(const T &val);Добавляет в конец списка элемент со значением, заданным параметром val.

void push_front(const T &val);Добавляет в начало списка элемент со значением,заданным параметром val.


reverse_iterator rbegin();
const_reverse_iterator rbegin() const;Возвращает реверсивный итератор для конца списка.


reverse_iterator rend();
const_reverse_iterator rbegin() const;Возвращает реверсивный итератор для начала списка.

void remove(const T &val);Удаляет из списка элементы со значением, заданным параметром val.

template <class UnPred> void remove_if(UnPred pr);Удаляет элементы, для которых унарный предикат pr равен значению true.

void resize(size_type num, const T &val = T());
Устанавливает емкость списка равной не менее задан-
ного значения num, если вектор для этого нужно удли-
нить, то в его конец добавляются элементы со значением,
заданным параметром val.

void reverse();Реверсирует список.

size_type size() const;Возвращает текущее количество элементов в списке.

void sort();
template <class Comp> void sort(Comp cmpfn);
Сортирует список. Вторая форма сортирует список
с помощью функции сравнения cmpfn, чтобы определять,
когда один элемент меньше другого.

void splice(iterator i, list<T,Allocator> &ob);
Вставляет содержимое списка ob в данный список
в позиции, указанной итератором i. После выполнения
этой операции список ob остается пустым.

void splice(iterator i, list<T,Allocator> &ob,
iterator el);
Удаляет из списка ob элемент, адресуемый итератором
el, и сохраняет его в позиции, адресуемой итератором i.
void splice(iterator i, list<T,Allocator> &ob,

iterator start, iterator end);
Удаляет из списка ob диапазон, определяемый па-
раметрами start и end, и сохраняет его в данном списке,
начиная с позиции, адресуемой итератором i.

void swap(list<T,Allocator> &ob);Выполняет обмен элементами данного списка и списка ob.

void unique();
template <class BinPred> void unique(BinPred pr);
Удаляет из списка элементы-дубликаты. Вторая форма
для определения уникальности использует предикат pr.

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