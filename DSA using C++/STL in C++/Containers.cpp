#include <bits/stdc++.h>
#include <chrono>

using namespace std::chrono;
using namespace std;

class Containers
{

public:
    void ContainerNotes()
    {
        cout << "\n--------------------------------------//Containers NOTES\\\\----------------------------------------"
                "\n1). Stores a collection of other objects (its elements)."
                "\n2). Implemented as class templates."
                "\n3). Manages the storge space & provides member functions to access them, either directly or through iterators (similar to pointers)."
                "\n----------------------------------------------------------------------------------------------------"
                "\nTypes of Containers are :-"
                "\n    a). Sequence Containers --> Implement data structures that can be accessed sequentially eg :- array, vector, list, forwarded_list & dequeue etc."
                "\n    b). Containers Adaptors --> Provide a different interface for sequential containers. eg :- queue, priority_queue, stack etc."
                "\n    c). Associate Containers --> Direct Access eg :- Implement sorted data structures that can be quickly searched (O(log n) complexity). eg :- set, multiset, map & multimap etc."
                "\n    d). Unordered Associative Containers --> Implement unordered data structures that can be quickly searched eg :- unordered_set, unordered_multiset, unordered_map, unordered_multimap etc.";
    }

    void Arrays()
    {
        cout << "\n--------------------------------------//Array NOTES\\\\---------------------------------------------"
                "\n1). Array classes known its size, whereas C-style arrays lack this property."
                "\n2). Array classes don't decay into pointers."
                "\n3). Array classes are generally more efficient, light-weight and reliable than C-style arrays."
                "\n----------------------------------------------------------------------------------------------------"
                "\nMember Functions"
                "\ni). Itrator Member Functions"
                "\n\n1). begin() --> ~ Returns an random access iterator pointing to the first element in the array container."
                "\n                ~ In zero-sized arrays, this function returns the same as array::end, but the returned iterator should not be dereferenced."
                "\n2). end() --> Returns an iterator pointing to the past-the-end element (element after last element of array) in the array container."
                "\n\nCode Example :- "
                "\n----------------------------------------";

        array<int, 5> myarray = {2, 16, 77, 34, 50};
        cout << "\nmyarray contains :";
        for (auto it = myarray.begin(); it != myarray.end(); ++it)
            cout << ' ' << *it;
        cout << "\noutput of begin() : " << *(myarray.begin());
        cout << "\noutput of end() or *(it - 1) : " << *(myarray.end() - 1);
        myarray = {};
        cout << "\nempty array then output of begin() : " << *(myarray.begin());
        cout << "\nempty array then output of end() or *(it - 1) : " << *(myarray.end() - 1);

        cout << "\n----------------------------------------"
                "\n\n3). rbegin() --> Returns a reverse iterator pointing to the last element in the array container."
                "\n4). rend() --> Returns a reverse iterator pointing to the theoretical element preceding the first element in the array (which is considered its reverse end)."
                "\n\nCode Example :- "
                "\n----------------------------------------";

        myarray = {4, 26, 80, 14};
        cout << "\nmyarray contains:";
        for (auto rit = myarray.rbegin() + 1; rit < myarray.rend(); ++rit)
            cout << ' ' << *rit;
        auto rit1 = myarray.rbegin();
        auto rit2 = myarray.rend();
        cout << "\noutput of rbegin() : " << *(rit1 + 1);
        cout << "\noutput of rend() or *(rit2 - 1) : " << *(rit2 - 1);
        myarray = {};
        rit1 = myarray.rbegin();
        rit2 = myarray.rend();
        cout << "\nempty array then output of rbegin() : " << *rit1;
        cout << "\nempty array then output of rend() or *(rit2 - 1) : " << *(rit2 - 1);

        cout << "\n----------------------------------------"
                "\n\n5). cbegin() --> Returns a const_iterator pointing to the first element in the array container."
                "\n6). cend() --> Returns a const_iterator pointing to the past-the-end element in the array container."
                "\n\nCode Example :- "
                "\n----------------------------------------";

        myarray = {15, 720, 801, 1002, 3502};
        cout << "\nmyarray contains:";
        for (auto cit = myarray.cbegin(); cit != myarray.cend(); ++cit)
            cout << ' ' << *cit;
        auto cit1 = myarray.cbegin();
        auto cit2 = myarray.cend();
        cout << "\noutput of cbegin() : " << *cit1;
        cout << "\noutput of cend()  or *(cit2 - 1) : " << *(cit2 - 1);
        myarray = {};
        cit1 = myarray.cbegin();
        cit2 = myarray.cend();
        cout << "\nempty array then output of cbegin() : " << *cit1;
        cout << "\nempty array then output of cend()  or *(cit2 - 1) : " << *(cit2 - 1);

        cout << "\n----------------------------------------"
                "\n\n7). crbegin() --> Returns a const_reverse_iterator pointing to the theoretical element preceding the first element in the vector, which is considered its reverse end."
                "\n8). crend() --> Returns a const_reverse_iterator pointing to the last element in the array container."
                "\n\nCode Example :- "
                "\n----------------------------------------";

        myarray = {9, 34, 67, 45};
        cout << "\nmyarray contains:";
        for (auto crit = myarray.crbegin(); crit < myarray.crend(); ++crit)
            cout << ' ' << *(crit + 1);
        auto crit1 = myarray.crbegin();
        auto crit2 = myarray.crend();
        cout << "\noutput of crbegin() : " << *(crit1 + 1);
        cout << "\noutput of crend() or *(crit2 - 1) : " << *(crit2 - 1);
        myarray = {};
        crit1 = myarray.crbegin();
        crit2 = myarray.crend();
        cout << "\nempty array then output of crbegin() : " << *crit1;
        cout << "\nempty array then output of crend() or (crit2 - 1) : " << *(crit2 - 1);

        cout << "\n----------------------------------------"
                "\nii). Capacity Member Functions"
                "\n\n1). size() --> Returns the number of elements in the array container."
                "\n2). max_size() --> Returns the maximum number of elements that the array container can hold."
                "\n3). empty() --> Returns a bool value indicating whether the array container is empty, i.e. whether its size is 0."
                "\n\nCode Example :- "
                "\n----------------------------------------";

        array<int, 10> myints;
        cout << "\nsize of myints (using size()): " << myints.size() << endl;
        cout << "sizeof(myints): " << sizeof(myints) << endl;
        cout << "max_size of myints (using max_size()): " << myints.max_size() << endl;
        array<int, 0> first;
        array<int, 5> second;
        cout << "(using empty()) first " << (first.empty() ? "is empty" : "is not empty") << endl;
        cout << "(using empty()) second " << (second.empty() ? "is empty" : "is not empty");

        cout << "\n----------------------------------------"
                "\niii). Element Access Member Functions"
                "\n\n1). operator[] --> Returns a reference to the element at position n in the array container."
                "\n2). at() --> Returns a reference to the element at position n in the array."
                "\n3). back() --> Returns a reference to the last element in the array container."
                "\n4). data() --> Returns a pointer to the first element in the array object."
                "\n\nCode Example :- "
                "\n----------------------------------------";

        // using operator[]
        array<int, 10> myarray1;
        unsigned int i;
        for (i = 0; i < 10; i++)
            myarray1[i] = i;
        cout << "\nmyarray1 contains (using operator[]):";
        for (i = 0; i < 10; i++)
            cout << ' ' << myarray1[i];

        // using at()
        for (int i = 0; i < 10; i++)
            myarray1.at(i) = i + 1;
        cout << "myarray1 contains (using at()):";
        for (int i = 0; i < 10; i++)
            cout << ' ' << myarray1.at(i);

        // using front() & back()
        cout << "front is: " << myarray1.front() << endl; // 2
        cout << "back is: " << myarray1.back() << endl;   // 77
        myarray1.front() = 100;
        myarray1.back() = 200;
        cout << "myarray1 now contains:";
        for (int &x : myarray1)
            cout << ' ' << x;

        // using data()
        const char *cstr = "Test string";
        array<char, 12> charray = {'T', 'e', 's', 't'};
        array<string, 5> chname = {"abhay", "abha"};
        // memcpy(charray.data(), cstr, 12);
        auto it1 = chname.data();
        auto it2 = myarray1.data();
        cout << "output of charray.data(): " << *(charray.data());
        cout << "\noutput of charray.data(): " << *it1;
        cout << "\noutput of myarray1.data(): " << *it2;

        cout << "\n----------------------------------------"
                "\nvi). Modifiers Member Functions"
                "\n\n1). fill() --> This function is used to fill the entire array with a particular value."
                "\n2). swap() --> Exchanges the content of the array by the content of x, which is another array object of the same type (including the same size)."
                "\n\nCode Example :- "
                "\n----------------------------------------";

        // using fill()
        myarray1.fill(5);
        cout << "\nmyarray contains (using fill(5)):";
        for (int &x : myarray1)
        {
            cout << ' ' << x;
        }

        // using swap()
        array<int, 5> list1 = {10, 20, 30, 40, 50};
        array<int, 5> list2 = {11, 22, 33, 44, 55};
        cout << "\nlist1 & list2 before using swap()" << endl;
        cout << "list1:";
        for (int &x : list1)
            cout << ' ' << x;

        cout << "list2:";
        for (int &x : list2)
            cout << ' ' << x;

        list1.swap(list2);
        cout << "\nswap list1 & list2 using swap()" << endl;
        cout << "list1:";
        for (int &x : list1)
            cout << ' ' << x;

        cout << "list2:";
        for (int &x : list2)
            cout << ' ' << x;

        cout << "\n----------------------------------------"
                "\nvi). Non-member Functions overloads"
                "\n\n1). get(array) --> Returns a reference to the Ith element of array arr."
                "\n\nCode Example :- "
                "\n----------------------------------------";

        myarray = {10, 20, 30};
        tuple<int, int, int> mytuple(10, 20, 30);
        tuple_element<0, decltype(myarray)>::type myelement; // int myelement
        myelement = get<2>(myarray);
        get<2>(myarray) = get<0>(myarray);
        get<0>(myarray) = myelement;
        cout << "\nfirst element in myarray: " << get<0>(myarray) << endl;
        cout << "first element in mytuple: " << get<0>(mytuple);
        cout << "\n----------------------------------------";
    }

    void Vector()
    {
        cout << "\n--------------------------------------//Vector NOTES\\\\---------------------------------------------"
                "\n1). Vectors are the same as dynamic arrays with the ability to resize themselves automatically."
                "\n2). Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators."
                "\n----------------------------------------------------------------------------------------------------"
                "\nHow to initialize a vector"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        // 1). Initializing Vector by Pushing values One by One
        vector<int> vec1;
        cout << "\n1). using push_back(): ";
        vec1.push_back(10);
        vec1.push_back(20);
        vec1.push_back(30);
        for (int x : vec1)
            cout << x << " ";
        // 2). Initializing Vector by Specifying Size and Initializing All Values
        vector<int> vec2(5, 10);
        cout << "\n2). using vec2(size, default_value): ";
        for (int &x : vec2)
            cout << x << " ";
        // 3). Initializing Vector like Arrays
        cout << "\n3). Initializing Vector like Arrays: ";
        vector<int> vec3 = {8, 9, 3, 4, 5};
        for (int &x : vec3)
            cout << x << " ";
        // 4). Initializing Vector from an Array
        int arr[] = {10, 20, 30};
        int n = sizeof(arr) / sizeof(arr[0]);
        vector<int> vec4(arr, arr + n);
        cout << "\n4). Initializing Vector from an Array: ";
        for (int x : vec4)
            cout << x << " ";
        // 5). Initializing Vector from Another Vector
        vector<int> vect1{10, 20, 30};
        vector<int> vect2(vect1.begin(), vect1.end());
        cout << "\n5). Initializing Vector from Another Vector: ";
        for (int x : vect2)
            cout << x << " ";
        // 6). Initializing all Elements of Vector with a Particular Value
        vector<int> _vect1(10);
        int value = 5;
        fill(_vect1.begin(), _vect1.end(), value);
        cout << "\n6). using fill(_vect1.begin(), _vect1.end(), value): ";
        for (int x : _vect1)
            cout << x << " ";
        // 7). Initialize Vector with Consecutive Numbers using std::iota
        vector<int> _vec(5);
        iota(_vec.begin(), _vec.end(), 5);
        cout << "\n7). using iota(_vec.begin(), _vec.end(), 5): ";
        for (int x : _vec)
            cout << x << " ";

        cout << "\n----------------------------------------"
                "\nMember Function in Vector"
                "\ni). Itrators --> These member functions work same as we learn in arrays."
                "\n                 eg :- begin(), end(), rbegin(), rend(), cbegin(), cend(), crbegin(), crend()."
                "\n\nCode Example :- "
                "\n----------------------------------------";
        vector<int> g1;
        for (int i = 1; i <= 5; i++)
            g1.push_back(i);
        cout << "\nOutput of begin and end: ";
        for (auto i = g1.begin(); i != g1.end(); ++i)
            cout << *i << " ";
        cout << "\nOutput of cbegin and cend: ";
        for (auto i = g1.cbegin(); i != g1.cend(); ++i)
            cout << *i << " ";
        cout << "\nOutput of rbegin and rend: ";
        for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
            cout << *ir << " ";
        cout << "\nOutput of crbegin and crend : ";
        for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
            cout << *ir << " ";

        cout << "\n----------------------------------------"
                "\nii). Capacity Methods"
                "\n\n1). size() - Returns the number of elements in the vector."
                "\n2). max_size() - Returns the maximum number of elements that the vector can hold."
                "\n3). capacity() - Returns the size of the storage space currently allocated to the vector expressed as number of elements."
                "\n4). resize(n) - Resizes the container so that it contains 'n' elements."
                "\n5). empty() - Returns whether the container is empty."
                "\n6). shrink_to_fit() - Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity."
                "\n7). reserve() - Requests that the vector capacity be at least enough to contain n elements."
                "\n                It helps in reducung initialization time for vector."
                "\n\nCode Example :- "
                "\n----------------------------------------";

        g1 = {};
        for (int i = 1; i <= 5; i++)
            g1.push_back(i);
        cout << "\nSize : " << g1.size();
        cout << "\nMax_Size : " << g1.max_size();
        cout << "\nCapacity : " << g1.capacity();
        // resizes the vector size to 4
        g1.resize(4);
        // prints the vector size after resize()
        cout << "\nSize (after resize to 4) : " << g1.size();
        // checks if the vector is empty or not
        if (g1.empty() == false)
            cout << "\nVector is not empty";
        else
            cout << "\nVector is empty";
        // Shrinks the vector
        g1.shrink_to_fit();
        g1.push_back(5);
        cout << "\nVector elements are: ";
        for (auto it = g1.begin(); it != g1.end(); it++)
            cout << *it << " ";

        // No of characters
        int N = (int)1e6;
        vector<int> v1, v2;
        // Reserve space in v2
        v2.reserve(N);
        cout << "\nusing v2.reserve(N)";

        // Start filling up elements in v1
        auto start = high_resolution_clock::now();
        for (int i = 0; i < N; ++i)
            v1.push_back(i);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << "\nMethod I took " << duration.count() << " microseconds";

        // Start filling up elements in v2
        start = high_resolution_clock::now();
        for (int i = 0; i < N; ++i)
            v2.push_back(i);
        stop = high_resolution_clock::now();
        duration = duration_cast<microseconds>(stop - start);
        cout << "\nMethod II took " << duration.count() << " microseconds";

        cout << "\nvalue of N : " << N;
        cout << "\nSize of v1 & v2 : " << v1.size() << " & " << v2.size();
        cout << "\nMax_Size of v1 & v2 : " << v1.max_size() << " & " << v2.max_size();
        cout << "\nCapacity of v1 & v2 : " << v1.capacity() << " & " << v2.capacity();

        cout << "\n----------------------------------------"
                "\niii). Element access methods"
                "\n\n1). reference operator [g] - Returns a reference to the element at position 'g' in the vector"
                "\n2). at(g) - Returns a reference to the element at position 'g' in the vector"
                "\n3). front() - Returns a reference to the first element in the vector"
                "\n4). back() - Returns a reference to the last element in the vector"
                "\n5). data() - Returns a direct pointer to the memory array used internally by the vector to store its owned elements."
                "\n\nCode Example :- "
                "\n----------------------------------------";

        g1 = {};
        for (int i = 1; i <= 10; i++)
            g1.push_back(i * 10);
        cout << "\nReference operator [g] : g1[3] = " << g1[3];
        cout << "\nat : g1.at(3) = " << g1.at(3);
        cout << "\nfront() : g1.front() = " << g1.front();
        cout << "\nback() : g1.back() = " << g1.back();
        // pointer to the first element
        int *pos = g1.data();
        cout << "\nThe first element is " << *pos;

        cout << "\n----------------------------------------"
                "\niv). Modifier Methods"
                "\n\n1). assign() - It assigns new value to the vector elements by replacing old ones"
                "\n2). push_back() - It push the elements into a vector from the back"
                "\n3). pop_back() - It is used to pop or remove elements from a vector from the back."
                "\n4). insert() - It inserts new elements before the element at the specified position"
                "\n5). erase() - It is used to remove elements from a container from the specified position or range."
                "\n6). swap() - It is used to swap the contents of one vector with another vector of same type. Sizes may differ."
                "\n7). clear() - It is used to remove all the elements of the vector container"
                "\n8). emplace() - It extends the container by inserting new element at position"
                "\n9). emplace_back() - It is used to insert a new element into the vector container, the new element is added to the end of the vector"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        // Assign vector
        vector<int> v;

        // fill the vector with 10 five times
        v.assign(5, 10);
        cout << "\nThe vector elements are: ";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        // inserts 15 to the last position
        v.push_back(15);
        n = v.size();
        cout << "\nThe last element is: " << v[n - 1] << " or use v.back(): " << v.back();

        // removes last element
        v.pop_back();

        // prints the vector
        cout << "\nThe vector elements are: ";
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        // inserts 5 at the beginning
        v.insert(v.begin(), 5);
        cout << "\nThe first element is: " << v[0];

        // removes the first element
        v.erase(v.begin());

        cout << "\nThe first element is: " << v[0];

        // inserts at the beginning
        v.emplace(v.begin(), 5);
        cout << "\nThe first element is: " << v[0];

        // Inserts 20 at the end
        v.emplace_back(20);
        n = v.size();
        cout << "\nThe last element is: " << v[n - 1];

        // erases the vector
        v.clear();
        cout << "\nVector size after clear(): " << v.size();

        // two vector to perform swap
        v1 = {}, v2 = {};
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
        v2.push_back(4);
        cout << "\n\nVector 1: ";
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
        cout << "\nVector 2: ";
        for (int i = 0; i < v2.size(); i++)
            cout << v2[i] << " ";

        // Swaps v1 and v2
        v1.swap(v2);
        cout << "\nAfter Swap \nVector 1: ";
        for (int i = 0; i < v1.size(); i++)
            cout << v1[i] << " ";
        cout << "\nVector 2: ";
        for (int i = 0; i < v2.size(); i++)
            cout << v2[i] << " ";
        cout << "\n----------------------------------------";
    }

    void Deque()
    {
        cout << "\n--------------------------------------//Deque NOTES\\\\---------------------------------------------"
                "\n1). Double-ended queues are sequence containers with the feature of expansion and contraction on both ends."
                "\n2). They are similar to vectors, but are more efficient in case of insertion and deletion of elements."
                "\n    Unlike vectors, contiguous storage allocation may not be guaranteed."
                "\n----------------------------------------------------------------------------------------------------"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        deque<int> gquiz{99, 10, 85};
        gquiz.push_back(10);
        gquiz.push_front(20);
        gquiz.push_back(30);
        gquiz.push_front(15);
        cout << "\nThe deque gquiz is : ";
        deque<int>::iterator it;
        for (it = gquiz.begin(); it != gquiz.end(); ++it)
            cout << ' ' << *it;
        cout << "\ngquiz.size() : " << gquiz.size();
        cout << "\ngquiz.max_size() : " << gquiz.max_size();
        cout << "\ngquiz.at(2) : " << gquiz.at(2);
        cout << "\ngquiz.front() : " << gquiz.front();
        cout << "\ngquiz.back() : " << gquiz.back();
        cout << "\ngquiz.pop_front() : ";
        gquiz.pop_front();
        for (it = gquiz.begin(); it != gquiz.end(); ++it)
            cout << ' ' << *it;
        cout << "\ngquiz.pop_back() : ";
        gquiz.pop_back();
        for (it = gquiz.begin(); it != gquiz.end(); ++it)
            cout << ' ' << *it;
        cout << "\nInsert in Deque :- ";
        deque<int> dq = {1, 2, 3, 4, 5};
        it = dq.begin();
        // 10 10 1 2 3 4 5
        dq.insert(it, 2, 10);
        cout << "Deque contains :";
        for (it = dq.begin(); it != dq.end(); ++it)
            cout << ' ' << *it;
        // insert single value
        it = dq.begin();
        ++it;
        it = dq.insert(it, 50);
        cout << "\nDeque contains after insert single value:";
        for (it = dq.begin(); it != dq.end(); ++it)
            cout << ' ' << *it;
        // insert a range of elements
        it = dq.begin();
        it += 2;
        it = dq.insert(it, gquiz.begin(), gquiz.end());
        cout << "\nDeque contains after insert a range:";
        for (it = dq.begin(); it != dq.end(); ++it)
            cout << ' ' << *it;
        cout << "\noutput of dq.rbegin() : " << *(dq.rbegin());
        cout << "\noutput of dq.rend() : " << *(dq.rend() - 1);
        cout << "\noutput of dq.cbegin() : " << *(dq.cbegin());
        cout << "\noutput of dq.cend() : " << *(dq.cend() - 1);
    }

    void List()
    {
        cout << "\n--------------------------------------//List NOTES\\\\---------------------------------------------"
                "\n1). Lists are sequence containers that allow non-contiguous memory allocation."
                "\n2). As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time)."
                "\n3). Normally, when we say a List, we talk about a doubly linked list. For implementing a singly linked list, we use a forward_list."
                "\n----------------------------------------------------------------------------------------------------"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        list<int> gqlist1, gqlist2;
        for (int i = 0; i < 10; ++i)
        {
            gqlist1.push_back(i * 2);
            gqlist2.push_front(i * 3);
        }
        cout << "\nList 1 (gqlist1) is : ";
        list<int>::iterator it;
        for (it = gqlist1.begin(); it != gqlist1.end(); ++it)
            cout << ' ' << *it;

        cout << "\nList 2 (gqlist2) is : ";
        for (it = gqlist2.begin(); it != gqlist2.end(); ++it)
            cout << ' ' << *it;

        cout << "\ngqlist1.front() : " << gqlist1.front();
        cout << "\ngqlist1.back() : " << gqlist1.back();

        cout << "\ngqlist1.pop_front() : ";
        gqlist1.pop_front();
        for (it = gqlist1.begin(); it != gqlist1.end(); ++it)
            cout << ' ' << *it;

        cout << "\ngqlist2.pop_back() : ";
        gqlist2.pop_back();
        for (it = gqlist2.begin(); it != gqlist2.end(); ++it)
            cout << ' ' << *it;

        cout << "\ngqlist1.reverse() : ";
        gqlist1.reverse();
        for (it = gqlist1.begin(); it != gqlist1.end(); ++it)
            cout << ' ' << *it;

        cout << "\ngqlist2.sort(): ";
        gqlist2.sort();
        for (it = gqlist2.begin(); it != gqlist2.end(); ++it)
            cout << ' ' << *it;
    }

    void Forward_List()
    {
        cout << "\n--------------------------------------//Forward_List NOTES\\\\---------------------------------------------"
                "\n1). Forward list in STL implements singly linked list. "
                "\n2). Introduced from C++11, forward list are more useful than other containers in insertion, removal, and moving operations (like sort) and allow time constant insertion and removal of elements."
                "\n3). The drawback of a forward list is that it cannot be iterated backward and its individual elements cannot be accessed directly."
                "\n----------------------------------------------------------------------------------------------------"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        // Declaring forward list
        forward_list<int> flist1;

        // Declaring another forward list
        forward_list<int> flist2;

        // Declaring another forward list
        forward_list<int> flist3;

        // Assigning values using assign()
        flist1.assign({1, 2, 3});

        // Assigning repeating values using assign()
        // 5 elements with value 10
        flist2.assign(5, 10);

        // Assigning values of list 1 to list 3
        flist3.assign(flist1.begin(), flist1.end());

        // Displaying forward lists
        cout << "\nThe elements of first forward list are : ";
        for (int &a : flist1)
            cout << a << " ";

        cout << "\nThe elements of second forward list are : ";
        for (int &b : flist2)
            cout << b << " ";

        cout << "\nThe elements of third forward list are : ";
        for (int &c : flist3)
            cout << c << " ";

        // Initializing forward list
        forward_list<int> flist = {10, 20, 30, 40, 50};

        // Inserting value using push_front()
        // Inserts 60 at front
        flist.push_front(60);

        // Displaying the forward list
        cout << "\nThe forward list after push_front operation : ";
        for (int &c : flist)
            cout << c << " ";

        // Inserting value using emplace_front()
        // Inserts 70 at front
        flist.emplace_front(70);

        // Displaying the forward list
        cout << "\nThe forward list after emplace_front operation : ";
        for (int &c : flist)
            cout << c << " ";

        // Deleting first value using pop_front()
        // Pops 70
        flist.pop_front();

        // Displaying the forward list
        cout << "\nThe forward list after pop_front operation : ";
        for (int &c : flist)
            cout << c << " ";

        // Initializing forward list
        flist = {10, 20, 30, 25, 40, 40};

        // Removing element using remove()
        // Removes all occurrences of 40
        flist.remove(40);

        // Displaying the forward list
        cout << "\nThe forward list after remove operation : ";
        for (int &c : flist)
            cout << c << " ";

        // Removing according to condition. Removes
        // elements greater than 20. Removes 25 and 30
        flist.remove_if([](int x)
                        { return x > 20; });

        // Displaying the forward list
        cout << "\nThe forward list after remove_if operation : ";
        for (int &c : flist)
            cout << c << " ";

        // creating forward list
        flist.assign({1, 2, 3, 4, 5});

        // Printing forward list
        cout << "\nForward list: ";
        for (auto i : flist)
        {
            cout << i << " ";
        }

        flist.clear();
        // Forward List becomes empty

        // Printing the Forward list
        cout << "\nForward list after using clear function: ";
        for (auto it = flist.begin(); it != flist.end(); ++it)
            cout << ' ' << *it;

        // Printing the Forward list size
        int size = distance(flist.begin(), flist.end());
        cout << "\nSize of flist: " << size;
        cout << "\n----------------------------------------";
    }

    void Set()
    {
        cout << "\n--------------------------------------//Set NOTES\\\\---------------------------------------------"
                "\n1). Sets are a type of associative container in which each element has to be unique because the value of the element identifies it."
                "\n2). The values are stored in a specific sorted order i.e. either ascending or descending."
                "\n\nProperties"
                "\n  -> Storing order - The set stores the elements in sorted order."
                "\n  -> Values Characteristics - All the elements in a set have unique values."
                "\n  -> Values Nature - The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable."
                "\n  -> Search Technique - Sets follow the Binary search tree implementation."
                "\n  -> Arranging order - The values in a set are unindexed."
                "\n----------------------------------------------------------------------------------------------------"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        // creating a set
        set<char> set1;
        set1.insert('G');
        set1.insert('F');
        set1.insert('G');
        set1.insert('F');
        set1.insert('A');
        cout << "\nPrinting the inserted elements in set1: ";
        for (char str : set1)
            cout << str << ' ';

        // set sorted in descending order
        set<int, greater<int>> set2;
        set2.insert(10);
        set2.insert(5);
        set2.insert(12);
        set2.insert(4);
        cout << "\nSet sorted in descending order: ";
        for (auto i : set2)
            cout << i << ' ';

        // empty set container
        set<int, greater<int>> s1;

        // insert elements in random order
        s1.insert(40);
        s1.insert(30);
        s1.insert(60);
        s1.insert(20);
        s1.insert(50);

        // only one 50 will be added to the set
        s1.insert(50);
        s1.insert(10);

        // printing set s1
        set<int, greater<int>>::iterator itr;
        cout << "\nThe set s1 is : \n";
        for (itr = s1.begin(); itr != s1.end(); itr++)
        {
            cout << *itr << " ";
        }

        // assigning the elements from s1 to s2
        set<int> s2(s1.begin(), s1.end());

        // print all elements of the set s2
        cout << "\nThe set s2 after assign from s1 is : ";
        for (itr = s2.begin(); itr != s2.end(); itr++)
        {
            cout << *itr << " ";
        }

        // remove all elements up to 30 in s2
        cout << "\ns2 after removal of elements less than 30 : ";
        s2.erase(s2.begin(), s2.find(30));
        for (itr = s2.begin(); itr != s2.end(); itr++)
        {
            cout << *itr << " ";
        }

        // remove element with value 50 in s2
        int num;
        num = s2.erase(50);
        cout << "\ns2.erase(50) : ";
        cout << num << " removed\n";
        for (itr = s2.begin(); itr != s2.end(); itr++)
        {
            cout << *itr << " ";
        }

        // lower bound and upper bound for set s1
        cout << "\n\ns1.lower_bound(40) : "
             << *s1.lower_bound(40) << endl;
        cout << "s1.upper_bound(40) : "
             << *s1.upper_bound(40) << endl;

        // lower bound and upper bound for set s2
        cout << "s2.lower_bound(40) : "
             << *s2.lower_bound(40) << endl;
        cout << "s2.upper_bound(40) : "
             << *s2.upper_bound(40) << endl;
    }

    void Map()
    {
        cout << "\n--------------------------------------//Map NOTES\\\\---------------------------------------------"
                "\n1). Maps are associative containers that store elements in a mapped fashion."
                "\n2). Each element has a key value and a mapped value. No two mapped values can have the same key values."
                "\n----------------------------------------------------------------------------------------------------"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        // empty map container
        map<int, int> gquiz1;

        // insert elements in random order
        gquiz1.insert(pair<int, int>(1, 10));
        gquiz1.insert(pair<int, int>(2, 30));
        gquiz1.insert(pair<int, int>(3, 60));
        gquiz1.insert(pair<int, int>(4, 20));
        gquiz1.insert(pair<int, int>(5, 50));
        gquiz1.insert(pair<int, int>(6, 60));

        // another way of inserting a value in a map
        gquiz1[7] = 10;
        gquiz1[7] = 40;

        // printing map gquiz1
        map<int, int>::iterator itr;
        cout << "\nThe map gquiz1 is : \n";
        cout << "\tKEY\tELEMENT\n";
        for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
            cout << '\t' << itr->first << '\t' << itr->second
                 << endl;

        // assigning the elements from gquiz1 to gquiz2
        map<int, int> gquiz2(gquiz1.begin(), gquiz1.end());
        // print all elements of the map gquiz2
        cout << "\nThe map gquiz2 after"
             << " assign from gquiz1 is : \n";
        cout << "\tKEY\tELEMENT\n";
        for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
            cout << '\t' << itr->first << '\t' << itr->second
                 << endl;

        // remove all elements up to
        // element with key=3 in gquiz2
        cout << "\ngquiz2 after removal of"
                " elements less than key=3 : \n";
        cout << "\tKEY\tELEMENT\n";
        gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
        for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
            cout << '\t' << itr->first << '\t' << itr->second
                 << endl;

        // remove all elements with key = 4
        int num;
        num = gquiz2.erase(4);
        cout << "\ngquiz2.erase(4) : ";
        cout << num << " removed \n";
        cout << "\tKEY\tELEMENT\n";
        for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
            cout << '\t' << itr->first << '\t' << itr->second
                 << endl;

        // lower bound and upper bound for map gquiz1 key = 5
        cout << "\ngquiz1.lower_bound(5) : "
             << "KEY = ";
        cout << gquiz1.lower_bound(5)->first << ", ";
        cout << "ELEMENT = " << gquiz1.lower_bound(5)->second
             << endl;
        cout << "gquiz1.upper_bound(5) : "
             << "KEY = ";
        cout << gquiz1.upper_bound(5)->first << ", ";
        cout << "ELEMENT = " << gquiz1.upper_bound(5)->second
             << endl;

        // Using m.value_comp()(*i++, last)
        cout << "\nUsing m.value_comp()(*i++, last) :-";
        map<char, int> m = {
            {'a', 1},
            {'b', 2},
            {'c', 3},
            {'d', 4},
            {'e', 5},
        };
        auto last = *m.rbegin();
        auto i = m.begin();

        cout << "\nMap contains "
             << "following elements"
             << endl;
        do
        {
            cout << i->first
                 << " = "
                 << i->second
                 << endl;
        } while (m.value_comp()(*i++, last));
        cout << "first : " << i->first << ", second : " << i->second;
    }

    void Multiset()
    {

        cout << "\n--------------------------------------//Multiset NOTES\\\\---------------------------------------------"
                "\n1). Multisets are a type of associative containers similar to the set, with the exception that multiple elements can have the same values."
                "\n----------------------------------------------------------------------------------------------------"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        // empty multiset container
        multiset<int, greater<int>> gquiz1;

        // insert elements in random order
        gquiz1.insert(40);
        gquiz1.insert(30);
        gquiz1.insert(60);
        gquiz1.insert(20);
        gquiz1.insert(50);

        // 50 will be added again to
        // the multiset unlike set
        gquiz1.insert(50);
        gquiz1.insert(10);

        // printing multiset gquiz1
        multiset<int, greater<int>>::iterator itr;
        cout << "\nThe multiset gquiz1 is : ";
        for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
            cout << *itr << " ";

        // assigning the elements from gquiz1 to gquiz2
        multiset<int> gquiz2(gquiz1.begin(), gquiz1.end());

        // print all elements of the multiset gquiz2
        cout << "\n\nThe multiset gquiz2 after assign from gquiz1 is : ";
        for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
            cout << *itr << " ";

        // remove all elements up to element
        // with value 30 in gquiz2
        cout << "\n\ngquiz2 after removal of elements less than 30 : ";
        gquiz2.erase(gquiz2.begin(), gquiz2.find(30));
        for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
            cout << *itr << " ";

        // remove all elements with value 50 in gquiz2
        int num = gquiz2.erase(50);
        cout << "\n\ngquiz2.erase(50) : " << num << " removed\n";
        for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
            cout << *itr << " ";

        // lower bound and upper bound for multiset gquiz1
        cout << "\n\ngquiz1.lower_bound(40) : "
             << *gquiz1.lower_bound(40) << endl;
        cout << "gquiz1.upper_bound(40) : "
             << *gquiz1.upper_bound(40) << endl;

        // lower bound and upper bound for multiset gquiz2
        cout << "gquiz2.lower_bound(40) : "
             << *gquiz2.lower_bound(40) << endl;
        cout << "gquiz2.upper_bound(40) : "
             << *gquiz2.upper_bound(40) << endl;
        cout << "gquiz2.upper_bound(50) : "
             << *gquiz2.upper_bound(50) << endl;
    }

    void Multimap()
    {

        cout << "\n--------------------------------------//Multimap NOTES\\\\---------------------------------------------"
                "\n1). Multimap is similar to a map with the addition that multiple elements can have the same keys."
                "\n2). One important thing to note about multimap is that multimap keeps all the keys in sorted order always. These properties of multimap make it very much useful in competitive programming."
                "\n----------------------------------------------------------------------------------------------------"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        multimap<int, int> gquiz1; // empty multimap container

        // insert elements in random order
        gquiz1.insert(pair<int, int>(1, 1));
        gquiz1.insert(pair<int, int>(3, 60));
        gquiz1.insert(pair<int, int>(2, 30));
        gquiz1.insert(pair<int, int>(6, 50));
        gquiz1.insert(pair<int, int>(6, 10));

        // printing multimap gquiz1
        multimap<int, int>::iterator itr;
        cout << "\nThe multimap gquiz1 is : \n";
        cout << "\tKEY\tELEMENT\n";
        for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
        {
            cout << '\t' << itr->first << '\t' << itr->second
                 << '\n';
        }

        // adding elements randomly,
        // to check the sorted keys property
        gquiz1.insert(pair<int, int>(4, 50));
        gquiz1.insert(pair<int, int>(5, 10));

        // printing multimap gquiz1 again
        cout << "\nThe multimap gquiz1 after adding extra "
                "elements is : \n";
        cout << "\tKEY\tELEMENT\n";
        for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr)
        {
            cout << '\t' << itr->first << '\t' << itr->second
                 << '\n';
        }

        // assigning the elements from gquiz1 to gquiz2
        multimap<int, int> gquiz2(gquiz1.begin(), gquiz1.end());

        // print all elements of the multimap gquiz2
        cout << "\nThe multimap gquiz2 after assign from "
                "gquiz1 is : \n";
        cout << "\tKEY\tELEMENT\n";
        for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
        {
            cout << '\t' << itr->first << '\t' << itr->second
                 << '\n';
        }

        // remove all elements up to
        // key with value 3 in gquiz2
        cout << "\ngquiz2 after removal of elements less than "
                "key=3 : \n";
        cout << "\tKEY\tELEMENT\n";
        gquiz2.erase(gquiz2.begin(), gquiz2.find(3));
        for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
        {
            cout << '\t' << itr->first << '\t' << itr->second
                 << '\n';
        }

        // remove all elements with key = 4
        int num;
        num = gquiz2.erase(4);
        cout << "\ngquiz2.erase(4) : ";
        cout << num << " removed \n";
        cout << "\tKEY\tELEMENT\n";
        for (itr = gquiz2.begin(); itr != gquiz2.end(); ++itr)
        {
            cout << '\t' << itr->first << '\t' << itr->second
                 << '\n';
        }

        // lower bound and upper bound for multimap gquiz1 key =
        // 5
        cout << "gquiz1.lower_bound(5) : "
             << "\tKEY = ";
        cout << gquiz1.lower_bound(5)->first << '\t';
        cout << "\tELEMENT = " << gquiz1.lower_bound(5)->second
             << endl;
        cout << "gquiz1.upper_bound(5) : "
             << "\tKEY = ";
        cout << gquiz1.upper_bound(5)->first << '\t';
        cout << "\tELEMENT = " << gquiz1.upper_bound(5)->second
             << endl;
    }

    void Stack()
    {
        cout << "\n--------------------------------------//Stack NOTES\\\\---------------------------------------------"
                "\n1). Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only."
                "\n2). Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements."
                "\n----------------------------------------------------------------------------------------------------"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        stack<int> stack1;
        stack1.push(21); // The values pushed in the stack1 should be of the same data which is written during declaration of stack1
        stack1.push(22);
        stack1.push(24);
        stack1.push(25);
        int num = 0;
        stack1.push(num);
        stack1.pop();
        stack1.pop();
        stack1.pop();
        stack1.emplace(100);

        while (!stack1.empty())
        {
            cout << endl
                 << stack1.top() << " ";
            stack1.pop();
        }

        if (!stack1.empty())
        {
            cout << "\nstack is not empty.";
        }
        else
        {
            cout << "\nstack is empty.";
        }

        // stack container declaration
        stack<int> mystack1;
        stack<int> mystack2;

        // pushing elements into first stack
        mystack1.push(1);
        mystack1.push(2);
        mystack1.push(3);
        mystack1.push(4);

        // pushing elements into 2nd stack
        mystack2.push(3);
        mystack2.push(5);
        mystack2.push(7);
        mystack2.push(9);

        // using swap() function to swap elements of stacks
        mystack1.swap(mystack2);

        // printing the first stack
        cout << "\nmystack1 = ";
        while (!mystack1.empty())
        {
            cout << mystack1.top() << " ";
            mystack1.pop();
        }

        // printing the second stack
        cout << endl
             << "mystack2 = ";
        while (!mystack2.empty())
        {
            cout << mystack2.top() << " ";
            mystack2.pop();
        }
    }

    void Queue()
    {
        cout << "\n--------------------------------------//Queue NOTES\\\\---------------------------------------------"
                "\n1). Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front."
                "\n2). Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements."
                "\n----------------------------------------------------------------------------------------------------"
                "\n\nCode Example :- "
                "\n----------------------------------------";
        queue<int> gquiz;
        gquiz.push(10);
        gquiz.push(20);
        gquiz.push(30);

        cout << "\nThe queue gquiz is : ";
        queue<int> g = gquiz;
        while (!g.empty())
        {
            cout << g.front() << ' ';
            g.pop();
        }

        cout << "\ngquiz.size() : " << gquiz.size();
        cout << "\ngquiz.front() : " << gquiz.front();
        cout << "\ngquiz.back() : " << gquiz.back();

        cout << "\ngquiz.pop() : ";
        gquiz.pop();
        g = gquiz;
        while (!g.empty())
        {
            cout << g.front() << ' ';
            g.pop();
        }

        queue<int> q1;
        q1.push(1);
        q1.push(2);
        q1.push(3);
        cout << "\n\nThe first queue is : ";
        g = q1;
        while (!g.empty())
        {
            cout << g.front() << ' ';
            g.pop();
        }

        queue<int> q2;
        q2.push(4);
        q2.push(5);
        q2.push(6);
        cout << "\nThe second queue is : ";
        g = q2;
        while (!g.empty())
        {
            cout << g.front() << ' ';
            g.pop();
        }

        // swap q1 & q2
        q1.swap(q2);

        cout << "\n\nAfter swapping, the first queue is : ";
        g = q1;
        while (!g.empty())
        {
            cout << g.front() << ' ';
            g.pop();
        }

        cout << "\nAfter swapping the second queue is : ";
        g = q2;
        while (!g.empty())
        {
            cout << g.front() << ' ';
            g.pop();
        }

        cout << "\nq1.empty(): " << q1.empty(); // returns false since q1 is not empty
    }

    void Priority_Queue()
    {
        cout << "\n--------------------------------------//Priority_Queue NOTES\\\\---------------------------------------------"
                "\n1). A C++ priority queue is a type of container adapter, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue,"
                "\n    and elements are in non-increasing or non-decreasing order (hence we can see that each element of the queue has a priority {fixed order})."
                "\n2). In C++ STL, the top element is always the greatest by default. We can also change it to the smallest element at the top. Priority queues are built on the top of the max heap and use an array or vector as an internal structure. In simple terms,"
                "\n    STL Priority Queue is the implementation of Heap Data Structure."
                "\n----------------------------------------------------------------------------------------------------"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        int arr[6] = {10, 2, 4, 8, 6, 9};

        // defining priority queue
        priority_queue<int> pq;

        // printing array
        cout << "\nP_Queue in Descending Order\nArray: ";
        for (auto i : arr)
        {
            cout << i << ' ';
        }

        // pushing array sequentially one by one
        for (int i = 0; i < 6; i++)
        {
            pq.push(arr[i]);
        }

        // printing priority queue
        cout << "\nPriority Queue: ";
        while (!pq.empty())
        {
            cout << pq.top() << ' ';
            pq.pop();
        }

        // printing queue in ascending order
        int n = sizeof(arr) / sizeof(arr[0]);
        priority_queue<int, vector<int>, greater<int>> gquiz(arr, arr + n);

        cout << "\n\nP_Queue in Ascending Order\nArray: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << ' ';
        }

        cout << "\nPriority Queue : ";
        while (!gquiz.empty())
        {
            cout << ' ' << gquiz.top();
            gquiz.pop();
        }

        priority_queue<int> gquiz1;
        // used in inserting the element
        gquiz1.push(10);
        gquiz1.push(30);
        gquiz1.push(20);
        gquiz1.push(5);
        gquiz1.push(1);

        cout << "\n\nThe priority queue gquiz is : ";

        // used for highlighting the element
        priority_queue<int> g = gquiz1;
        while (!g.empty())
        {
            cout << ' ' << g.top();
            g.pop();
        }

        // used for identifying the size
        // of the priority queue
        cout << "\ngquiz.size() : " << gquiz1.size();
        // used for telling the top element
        // in priority queue
        cout << "\ngquiz.top() : " << gquiz1.top();

        // used for popping the element
        // from a priority queue
        cout << "\ngquiz.pop() : ";
        gquiz1.pop();

        g = gquiz1;
        while (!g.empty())
        {
            cout << ' ' << g.top();
            g.pop();
        }

        // declare integer value_type for priority queue
        priority_queue<int>::value_type AnInt;

        // declare string value_type for priority queue
        priority_queue<string>::value_type AString;

        // Declares priority_queues
        priority_queue<int> q1;
        priority_queue<string> q2;

        // Here AnInt acts as a variable of int data type
        AnInt = 20;
        cout << "\n\nThe value_type is AnInt = " << AnInt << endl;
        q1.push(AnInt);
        AnInt = 30;
        q1.push(AnInt);
        cout << "Top element of the integer priority_queue is: "
             << q1.top() << endl;

        // here AString acts as a variable of string data type
        AString = "geek";
        cout << endl
             << "The value_type is AString = " << AString
             << endl;
        q2.push(AString);
        AString = "for";
        q2.push(AString);
        AString = "geeks";
        q2.push(AString);

        cout << "Top element of the string priority_queue is: "
             << q2.top() << endl;
    }

    void Unordered_Set()
    {

        cout << "\n--------------------------------------//Unordered_Set NOTES\\\\---------------------------------------------"
                "\n1). An unordered_set is an unordered associative container implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized."
                "\n2). All operations on the unordered_set take constant time O(1) on an average which can go up to linear time O(n) in the worst case which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation."
                "\n----------------------------------------------------------------------------------------------------"
                "\n\nCode Example :- "
                "\n----------------------------------------";

        // declaring set for storing string data-type
        unordered_set<string> stringSet;

        // inserting various string, same string will be stored
        // once in set

        stringSet.insert("code");
        stringSet.insert("in");
        stringSet.insert("c++");
        stringSet.insert("is");
        stringSet.insert("fast");

        string key = "slow";

        // find returns end iterator if key is not found,
        // else it returns iterator to that key

        if (stringSet.find(key) == stringSet.end())
            cout << endl
                 << key << " not found" << endl
                 << endl;
        else
            cout << "Found " << key << endl
                 << endl;

        key = "c++";
        if (stringSet.find(key) == stringSet.end())
            cout << key << " not found\n";
        else
            cout << "Found " << key << endl;

        // now iterating over whole set and printing its
        // content
        cout << "\nAll elements : \n";
        unordered_set<string>::iterator itr;
        for (itr = stringSet.begin(); itr != stringSet.end();
             itr++)
            cout << (*itr) << endl;
    }
};
