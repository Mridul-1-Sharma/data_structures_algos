
#include<iostream>
using namespace std;

// implement a linked list based on an dynamic array
// setup the arrayList class with template, so we can change any data type that we want

template<typename T>
class arrayList 
{ 
 private: 
    int front; 
    int size;
    T* arrList; 
 
 public:
    arrayList(const int& size);

    bool empty() const;          // check if the list is empty
    int getSize() const;         // return the number of the elems in list
    T head() const;              // return the head
     
    void insertFront(const T& e);   // insert new head
    void removeFront();             // remove head

    void printInfo() const; 

 private:
    void resize();               // resize the array when out of size
};

template<typename T>
arrayList<T>::arrayList(const int& size)
{
   front = 0;
   this->size = size;
   arrList = new T[size];
}

template<typename T>
bool arrayList<T>::empty() const
{
   return front == 0;
}

template<typename T>
int arrayList<T>::getSize() const
{
   return front;
}

template<typename T>
T arrayList<T>::head() const
{
   return arrList[front - 1];
}

template<typename T>
void arrayList<T>::insertFront(const T& e) 
{
  if (front >= size)
      resize();
   
   arrList[front++] = e; 
}

template<typename T>
void arrayList<T>::removeFront() 
{
   front--; 
}

template<typename T>
void arrayList<T>::resize() 
{
   size += 10;
   T* temp = new T[size];

   for (int i = 0; i <= front; i++)
      temp[i] = arrList[i];
   
   arrList = temp;
}

template<typename T>
void arrayList<T>::printInfo() const 
{
   for (int i = front - 1; i >= 0; i--)
      cout << arrList[i] << " ";
   
   cout << endl;
}
=======
#include <iostream>
using namespace std;

// implement a linked list based on an dynamic array
// we can setup the arrayList class with template, so we can change any data type that we want

template<typename T>
class arrayList 
{ 
 private: 
    int front; 
    int size;
    T* arrList; 
 
 public:
    arrayList(const int& size);

    bool empty() const;          // check if the list is empty
    int getSize() const;         // return the number of the elems in list
    T head() const;              // return the head
     
    void insertFront(const T& e);   // insert new head
    void removeFront();             // remove head
    void remove(const T& e);

    void printInfo() const; 

 private:
    void resize();               // resize the array when out of size
    int search (const T& e);
};

template<typename T>
arrayList<T>::arrayList(const int& size)
{
   front = 0;
   this->size = size;
   arrList = new T[size];
}

template<typename T>
bool arrayList<T>::empty() const
{
   return front == 0;
}

template<typename T>
int arrayList<T>::getSize() const
{
   return front;
}

template<typename T>
T arrayList<T>::head() const
{
   return arrList[front - 1];
}

template <typename T>
int arrayList<T>::search(const T& e)
{
   for (int i = front - 1; i >= 0; i--)
      if (arrList[i] == e)
         return i;

   return -1;
}

template<typename T>
void arrayList<T>::insertFront(const T& e) 
{
  if (front >= size)
      resize();
   
   arrList[front++] = e; 
}

template<typename T>
void arrayList<T>::removeFront() 
{
   front--; 
}

template<typename T>
void arrayList<T>::remove(const T& e)
{
   int index = search(e);

   if (index == -1)
       cout << "The element " << e << " is not in the list, so it cannot be removed" << endl;
   else
   {
      for (int i = index; i < front - 1; i++)
         arrList[i] = arrList[i+1];

      front--;
   }
}


template<typename T>
void arrayList<T>::resize() 
{
   size += 10;
   T* temp = new T[size];

   for (int i = 0; i <= front; i++)
      temp[i] = arrList[i];
   
   arrList = temp;
}

template<typename T>
void arrayList<T>::printInfo() const 
{
   for (int i = front - 1; i >= 0; i--)
      cout << arrList[i] << " ";
   
   cout << endl;
}

int main(int argc, char const *argv[])
{
    arrayList<int> test(10);

    for (int i = 1; i <= 12; i++)
        test.insertFront(i);

    test.printInfo();

    cout << "Current size: " << test.getSize() << endl;
    cout << "Current head: " << test.head() << endl;

    test.removeFront();
    test.removeFront();

    cout << "\nCurrent size: " << test.getSize() << endl;
    cout << "Current head: " << test.head() << endl;

    test.printInfo();

    cout << endl;
    test.remove(12);
    test.remove(1);
    cout << "\nCurrent size: " << test.getSize() << endl;
    test.printInfo();

    return 0;
}
