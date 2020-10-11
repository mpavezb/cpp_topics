# C++ Reference

Modern C++ knowledge base

This document serves as a knowledge base of important topics to know as a C++ Developer.
* All concepts are linked to the official documentation (https://en.cppreference.com/) when possible. These links can be identified by the `cpp:` prefix, as in [cpp:string](https://en.cppreference.com/w/cpp/string).
* To avoid redundant information, only small descriptions of each concept are provided, and further clarification when the official documentation might be hard to read.
* There is also an index of topics by level of experience, which can be used as a guideline to study the language.

## Contents

- [Resources](#resources)
- [Topics by Level](#topics-by-level)
- [Topics](#topics)
- [Language Agnostic Topics](#language-agnostic-topics)

## Resources

**Official Resources:**
- cppreference.com: https://en.cppreference.com/w/
- C++ Language: https://en.cppreference.com/w/cpp/language
- ISO C++ (FAQ, Core Guidelines, Standard): https://isocpp.org/faq
- New Language Features:
  - C++11: https://en.cppreference.com/w/cpp/11
  - C++14: https://en.cppreference.com/w/cpp/14
  - C++17: https://en.cppreference.com/w/cpp/17
  - C++20: https://en.cppreference.com/w/cpp/20
- Standard Library: https://en.cppreference.com/w/cpp/header

**Important Third-Party Libraries:**
- GTest: https://github.com/google/googletest
- Boost: https://www.boost.org/
- Sanitizers: https://github.com/google/sanitizers
- List of Important Libraries:: https://stackoverflow.com/a/782146

**Media, Blogs, Conferences:**
- Cpp Podcasts: https://cppcast.com/
- CppCon: https://www.youtube.com/channel/UCMlGfpWw-RUdWX_JbLCukXg
  - [CppCon 2015: Bjarne Stroustrup “Writing Good C++14”](https://www.youtube.com/watch?v=1OEu9C51K2A)
  - [C++20: An (Almost) Complete Overview - Marc Gregoire - CppCon 2020](https://www.youtube.com/watch?v=FRkJCvHWdwQ)
- C++ Notes: https://goalkicker.com/CPlusPlusBook/
- Christopher Di Bella Blog: https://www.cjdb.com.au/sg20-and-videos
- Bartosz Milewski Blog: https://bartoszmilewski.com/

**Coding Interview:**
- Cracking The Coding Interview Solutions: https://github.com/dassencio/cracking-the-coding-interview
- https://leetcode.com/

**Books:**
- Effective Modern C++. Scott Meyers.
- More Effective C++. Scott Meyers.
- Modern C++ Design, Generic Programming and Design Patterns Applied. Andrei Alexandrescu.
- The C++ Programming Language. Bjarne Stroustrup.
- Real-Time C++: Efficient Object-Oriented and Template Microcontroller Programming. Christopher Kormanyos.

**Courses:**
- Udemy, Complete Modern C++ (C++11/14/17), Umar Lone: https://www.udemy.com/course/beg-modern-cpp/
- Udemy, Design Patterns in Modern C++, Dmitri Nesteruk: https://www.udemy.com/course/patterns-cplusplus/
- Uni Bonn, Modern C++: http://www.ipb.uni-bonn.de/teaching/modern-cpp/

**Paid Training:**
- Jon Kalb, http://exceptionsafecode.com/
- Herb Sutter, https://herbsutter.com/about/training-and-consulting/
- Gregory Consulting, http://gregcons.com/
- Andrei Alexandrescu, https://www.qa-systems.com/qa-academy/dr-andrei-alexandrescu/

## Topics by Level

**Beginner**
* C programming language
* Basic Concepts:
  * loops
  * conditions
  * [pointers and references](#t-pointers-and-references)
  * [reading type declarations](#t-reading-type-declarations)
  * [semantics and syntax](#t-semantics-and-syntax)
  * [nullptr](#t-nullptr)
  * [enum class](#t-enum-class)
* Classes:
  * [struct and class](#t-struct-and-class)
  * [POD Type](#t-pod-type)
  * [class size](#t-class-size)
  * [object lifetime](#t-object-lifetime)
  * [class initialization order](#t-class-initialization-order)
  * [derived classes](#t-derived-classes)
  * [public inheritance](#t-public-inheritance)
  * [abstract class](#t-abstract-class)
  * [dynamic polymorphism](#t-dynamic-polymorphism)
  * function overloading
  * operator overloading
* STL:
  * std::string: https://en.cppreference.com/w/cpp/string
  * std::vector: https://en.cppreference.com/w/cpp/container/vector
  * std::array: https://en.cppreference.com/w/cpp/container/array
* Error Handling:
  * [static_assert](#t-static-assert-c11)
  * [assert](#t-assert)

**Intermediate**
* [const-correctness](#t-const-correctness)
* [smart pointers](#t-smart-pointers)
* [RAII](#t-raii)
* PIMPL: https://en.cppreference.com/w/cpp/language/pimpl
* dynamic memory management with new and delete
* deleted and defaulted functions
* constructor delegation
* exception handling (basics)
* [private inheritance](#t-private-inheritance)
* lambda expressions
* functors
* std::function
* std::string_view
* std::optional
* [multiple inheritance](#t-multiple-inheritance)
* diamond problem.
* uniform initialization
* [user-defined literals](#t-user-defined-literals)
* Chrono
* random number generation
* STL containers
* STL iterators
* STL algorithms
* templates (basics)
* template specialization
* type inference (auto, decltype)
* rule of five, rule of three, rule of zero.
* small string optimization
* return value optimization

**Experienced:**
* [dynamic polymorphism drawbacks](#t-dynamic-polymorphism-drawbacks)
* [runtime concept idiom](#t-dynamic-polymorphism-drawbacks)
* static polymorphism
* casts in dept: `const_cast`, `reinterpret_cast`, `static_cast`, `dynamic_cast`, `pointer_cast`.
* Static Polimorphism
* RValue References
* [Object Slicing](#t-object-slicing)
* Move Semantics
* Perfect Forwarding
* Exception Safety Guarantees
* noexcept
* constexpr
* multi-threading
  * threads
  * atomics
  * condition variables
  * futures
* Argument-Dependent Lookup
* [virtual inheritance](#t-virtual-inheritance)
* Regular Expressions
* I/O with streams
* Iterator Categories
* Custom memory Management
  * std::allocator
  * operator new and why
* [Empty base optimization](#t-empty-base-optimization)
  
**Expert:**
* Auto Type Deduction
* Template Type Deduction
* Variadic Templates
* Reference Collapsing
* Template Recursion
* Template Meta-Programming
* Tag-Dispatch
* Random Number Generation
* Iterator Categories: Forward, Bidirectional, Input, Output, Random Access.
* Overload Resolution
* Application Binary Interface
* Universal References.

**New in C++20**
-  https://en.cppreference.com/w/cpp/language/constraints

**Unassigned:**
* Cyclic dependencies
* Weak Ptr
* Associative Containers
* What would happen if you insert a user defined class into a map that only has operator == defined?
* Problem with vector of bools

## Language Agnostic Topics

* GRASP (OOD).
* SOLID: theory and code reviews.
* Design Patterns: Creational, Structural, Behavioralm and **Concurrency**.
* Working with Legacy Code
* CLEAN Arquitecture
* TDD


## Topics

### C Programming Language

### Basic Concepts

TODO
* Name Lookup:
  - Qualified Name Lookup: https://en.cppreference.com/w/cpp/language/qualified_lookup
  - Unqualified Name Lookup: https://en.cppreference.com/w/cpp/language/unqualified_lookup

#### T: Reading Type Declarations

Reading composed types with pointers, qualifiers, and other symbols may get difficult. The easy way is to follow the [clockwise/spiral rule](http://c-faq.com/decl/spiral.anderson.html).

Usually, the rule can be simplified as read from **right-to-left**.

```cpp
int*              // pointer to int
int const *       // pointer to const int
int * const       // const pointer to int
int const * const // const pointer to const int
...
int ** const      // const pointer to a pointer to int

// functions require the spiral rule
char *(*fp)(int, float *);  // fp is a pointer to a function passing (int, float*), returning a pointer to a char.
```

References:
* http://c-faq.com/decl/spiral.anderson.html
* https://stackoverflow.com/questions/1143262/what-is-the-difference-between-const-int-const-int-const-and-int-const

#### T: Pointers and References

In short, a reference is an alternative name for a variable, while a pointer is a variable that holds the address of another.

A pointer `*` [cpp:pointer](https://en.cppreference.com/w/cpp/language/pointer):
* Holds the object's assigned memory address,
* Can be reassigned any number of times, to different objects.
* Takes storage equal to the address size.
* Can point to other pointer, having multiple levels of indirection.

A reference `&` [cpp:reference](https://en.cppreference.com/w/cpp/language/reference):
* Must be initialized when declared, or during construction when used as a class member.
* Cannot point to something else.
* Manipulate the object itself.
* Is stored as an address to the object, in most implementations.
* Cannot be assigned `nullptr`.

Dangling:
* Dangling Pointer: When the lifetime of the pointed object ends before the end of the lifetime of the pointer, leading to a deallocated memory space.
* Dangling Reference: When the lifetime of the referred object ends before the end of the lifetime of the reference (undefined behavior).

#### T: Semantics and Syntax

* Regular types where the regular operations are implemented with the standard names are said to have *value semantics*.
* When objects are referred to indirectly, through a shared reference or pointer, the objects are said to have reference semantics.

#### T: Value Categories

LV, RV, PV, XV, ..
TODO.

See [cpp:value_category](https://en.cppreference.com/w/cpp/language/value_category).


#### T: nullptr

`nullptr` is a pointer literal and a `prvalue` of type `std::nullptr_t`. [cpp:nullptr](https://en.cppreference.com/w/cpp/language/nullptr).

Never use the `NULL` macro or `0` as replacements for null:
* `nullptr` is always a pointer type.
* `NULL` and `0` may cause ambiguity in overloaded function resolution.

#### T: Enum Class

The `enum class` and `enum struct` types provide solutions to problems the plain `enum` generates. [cpp:enum-class](https://en.cppreference.com/w/cpp/language/enum).

Old Plain Enum:
* Symbols are kept in current scope.
* Integer type for members cannot be defined (`uint8_t`, `long`, ...): Cannot do math, and cannot forward declare! (compiler needs type).
* Implicit conversion to integer!. May not be desired.

Enum class and struct:
* Members are scoped to the class.
* Type is `int` unless specified.
* No implicit conversion to number!. `static_cast` must be used.

#### T: Const Correctness

It is a good practice. It means using the keyword `const` to prevent objects from being modified. Const-Correctness can also be enforced through member functions using the `const` qualifier. [faq:const-correctness](https://isocpp.org/wiki/faq/const-correctness).

In short, const-correctness:
1. Protects from accidentally changing variables that aren't intended to be changed.
2. Protects from accidental variable assignments.
3. Allows compiler optimizations.

#### T: Smart Pointers

A smart pointer is a class that wraps a 'raw' (or 'bare') C++ pointer, to manage the lifetime of the object being pointed to. With raw pointers, the programmer has to explicitly destroy the object when it is no longer useful. If there is any exception or interruption, the resources could not be freed, leading to a memory leak!.

A smart pointer by comparison defines a policy as to when the object is destroyed. You still have to create the object, but you no longer have to worry about destroying it.

`unique_ptr` [cpp:unique-ptr](https://en.cppreference.com/w/cpp/memory/unique_ptr):
* Move enabled and copy disabled: Prevents multiple deletion and enforces unique ownership.
* References to the pointer can be passed around instead.
* Destructor is called when the pointer goes out of scope.

`shared_ptr` [cpp:shared-ptr](https://en.cppreference.com/w/cpp/memory/shared_ptr).
* Allows the pointer to be copied.
* Destructor is called when the reference count goes to zero.

`weak_ptr` [cpp:weak-ptr](https://en.cppreference.com/w/cpp/memory/weak_ptr):
* Holds a non-owning reference to an object that is managed by a `shared_ptr`.
* It must be converted to `shared_ptr` in order to access the referenced object.
* The object may be deleted at any time by someone else.
* An important use case is to break reference cycles formed by objects managed by `shared_ptr`. If there were cycles, then the reference count would never get to zero, and the memory would leak.
* Another good use case for `weak_ptr` is a cache, as it allows you to locate an object if it's still around, but it doesn't keep it around if nothing else needs it.

The library functions `make_unique` and `make_shared` should be used instead of the constructor:
* Avoids using the `new` operator explicitly!.
* A `shared_ptr` manages 2 entities (control block + object), and `make_shared` ensures there will only be 1 heap-allocation instead of 2. This avoid having sparse memory allocations!.
* Exception Safety (not a problem since C++17): `make_` functions prevent *unspecified-evaluation-order leak* triggered by expressions. Since C++17, each argument to a function is required to fully execute before evaluation of other arguments.

```cpp
auto ptr = std::unique_ptr<T>(new T()); // uses new!
auto ptr = std::make_unique<T>();       // good

// C++ allows arbitrary order of evaluation of subexpressions, so one possible ordering is:
//  new Lhs();
//  new Rhs();           // <--- If exception is thrown here, memory for Lhs will leak!.
//  std::shared_ptr<Lhs>
//  std::shared_ptr<Rhs>
//
void foo(const std::shared_ptr<Lhs> &lhs, const std::shared_ptr<Rhs> &rhs) {};
foo(std::shared_ptr<Lhs>(new Lhs()),
    std::shared_ptr<Rhs>(new Rhs()));
```

See also:
* Advantages of using std::make_unique over new operator: https://stackoverflow.com/a/37514601

#### T: RAII

RAII (Resource Acquisition is Initialization) [cpp:raii](https://en.cppreference.com/w/cpp/language/raii) is a programming idiom for Scope-Bounded Resource Management. A resource may be any thing with a finite supply for which we need to control their usage: memory, file handles, sockets, etc. In RAII, the lifetime of an object is bound to the scope of a variable, so that when the variable goes out of scope, then the destructor will release the resource.

Benefits of RAII are:
* Helps avoiding resource leaks (memory, handles, ...).
* Greater exception safety.

In good C++ code, most objects won't be constructed with `new`, and will be declared on the stack instead. Those constructed using `new` should be scoped (smart pointer).

This is implemented by encapsulating the resource handler in a class, which deals with the initialization and destruction: The contructor acquires the resource and the destructor releases it:
```cpp
// Without RAII
RawResource* handle = createNewResource();
handle->performInvalidOperation();          // throw!
deleteResource(handle);                     // not called -> leak 

// With RAII
class RAIIResource {
public:
   RAIIResource(RawResource* raw_) : raw(raw_) {};
   ~RAIIResource() { delete raw; }
private:
   RawResource* raw;
};

RAIIResource handle(createNewResource());
handle->performInvalidOperation();         // Resource is destroyed when stack is unwound
```

The RAII design is often used for controlling resources like mutex, pointers (smart pointers!), and files.

Resources:
* https://stackoverflow.com/questions/2321511/what-is-meant-by-resource-acquisition-is-initialization-raii
* https://stackoverflow.com/questions/76796/general-guidelines-to-avoid-memory-leaks-in-c

### Classes

#### T: Struct and Class

They are the exactly the same, but `struct` has default `public` members and bases, while `class` has default `private` members and bases. Both `class` and `struct` can have a mixture of `public`, `protected` and `private` members, can use inheritance and can have member functions.

The recommendation is to use `struct` for plain-old-data (POD) structures, and `class` for aggregate data structures with `private` data and member functions.

#### T: POD Type

A Plain Old Data Structure in C++ is either a scalar type, or an aggregate class type that.

* contains only PODS as members
* has no user-defined destructor
* has no user-defined copy assignment operator
* has no nonstatic members of pointer-to-member type.

See:
* [cpp:PODType](https://en.cppreference.com/w/cpp/named_req/PODType)
* [cpp:is_pod](https://en.cppreference.com/w/cpp/types/is_pod)


#### T: Class Size

See [cpp:sizeof](https://en.cppreference.com/w/cpp/language/sizeof).

Considerations:
* Classes have a size of at least 1 byte (for the address).
* Non-virtual functions have no impact in size, as the address is known at compile time.
* Virtual functions add at least a `sizeof(void*)` size, to hold the address of the *virtual function table*.
* Alignment.

```cpp
// 1 byte
class C1 {};

// 1 byte
class C2 {
    int f();
};

// sizeof(void*)
class C3 {
    virtual int vf1();
    virtual int vf2();
};

// sizeof(int)
class C4 {
    int data;
};

// sizeof(void*)
class C5 : public C3 { };
```

#### T: Empty Base Optimization

EBO allows the size of an empty base (no non-static data members) subobject to be zero. [cpp:empty-base-optimization](https://en.cppreference.com/w/cpp/language/ebo).

The size of any object is required to be at least 1 byte, even if the type is an empty class, in order to guarantee that the addresses of objects are always distinct. However, empty base classes can be completely optimized out from the object layout.

This optimization is forbidden when the type of the first non-static data member (of the derived class) is the same type of one of the empty classes or derived from it, since the two subobjects (base class and member) are required to have different addresses.

This optimization relevant in policy based design, where classes can inherit privately from multiple policies, some of which can be optimized.


#### T: Object Lifetime

The lifetime of an object or a reference is a runtime property: There is a begin and an end. [cpp:lifetime](https://en.cppreference.com/w/cpp/language/lifetime).

The lifetime of an object begins when:
* Its storage, with proper size and alignment, is obtained (or allocated). And,
* Its initialization is complete (constructor).

The lifetime of an object ends when:
* if it is of non-class type, the object is destroyed, or
* if it is of class type, the destructor call starts, or
* the storage is released or is reused by another object.

The lifetime of an object is less or equal than the lifetime of its storage. Lifetimes of non-static data members and base subobjects begin and end following class initialization order.

The lifetime of a reference begins when its initialization is complete and ends as if it were a scalar object. The lifetime of the referred object may end before the end of the lifetime of the reference, which makes dangling references possible.

#### T: Class Initialization Order

Initialization order depends on base classes and order of declarations. [cpp:initialization_order](https://en.cppreference.com/w/cpp/language/constructor#Initialization_order).

In short, the order is as follows:
1. Virtual bases: depth-first left-to-right order.
2. Direct bases: left-to-right order.
3. Non-static data members: order of declaration.
4. Body of the constructor is executed.

Destruction happends in reverse order.

#### T: Derived Classes

Any `class` or `struct` may be declared as *derived* from one or more *base classes*. [cpp:derived_class](https://en.cppreference.com/w/cpp/language/derived_class).

The base classes are listed as a comma-separated list of base-specifiers:
* attr: Sequence of attributes (e.g., ``[[deprecated]]``).
* access-specifier: `private`, `public`, or `protected`.
* virtual-specifier: `virtual` keyword.

```cpp
struct Derived : [attr] [access-specifier] [virtual-specifier] class-or-decltype {}
```

The listed classes are *direct base classes*, while their bases are *indirect base classes*. A class can be both, direct and indirect base class.

Each direct and indirect base class is present, as a *base class subobject*, within the object representation of the derived class. Empty bases usually do not increase the size of the derived object due to empty base optimization.

#### T: Public Inheritance

Implements subtyping relationship in OOP. The *derived* object IS-A *base* class object. References and pointers to the derived objects are expected to be usable by any code expecting any of its public bases (see Liskov-Substitution-Principle) [cpp:public-inheritance](https://en.cppreference.com/w/cpp/language/derived_class#Public_inheritance).

When a class is derived using the `public` specifier:
* All `public` members of the base class are accessible as `public` members of the derived class.
* All `protected` members of the base class are accessible as `protected` members of the derived class.
* Private members are never accessible unless friended.

#### T: Protected Inheritance

Protected Inheritance can be used for *controlled polymorphism*, where the IS-A relationship is only kept within the members of the derived class, as well as within the members of all further-derived classes. [cpp:protected-inheritance](https://en.cppreference.com/w/cpp/language/derived_class#Protected_inheritance).

When a class is derived using the `protected` specifier:
* All `public` and `protected` members of the base class are accessible as `protected` members of the derived class.
* Private members are never accessible unless friended.

To make a `public` member of the base class `public` in the derived class, `using B::foo;` can be used.

#### T: Private Inheritance

Private Inheritance can be used for *controlled polymorphism*, where the IS-A relationship is only kept within the members of the derived class, but not within further-derived classes. [cpp:private-inheritance](https://en.cppreference.com/w/cpp/language/derived_class#Private_inheritance).

When a class is derived using the `private` specifier:
* All `public` and `protected` members of the base class are accessible as `private` members of the derived class.
* Private members are never accessible unless friended.

To make a `public` member of the base class `public` in the derived class, `using B::foo;` can be used.

Private inheritance is commonly used in policy-based design, leveraging empty-base-optimization.

See also [faq:private-inheritance](https://isocpp.org/wiki/faq/private-inheritance).

#### T: Multiple Inheritance

#### T: Virtual Inheritance

For each `virtual` base class, the derived object contains only one base class subobject of that type. [cpp:virtual-inheritance](https://en.cppreference.com/w/cpp/language/derived_class#Virtual_base_classes).

In this example, every object of type `AA` has one `X`, one `Y`, one `Z`, and two `B`'s: one that is the base of `Z` and one that is **shared by X and Y**.
```cpp
struct B { int n; };
class X : public virtual B {};
class Y : virtual public B {};
class Z : public B {};
struct AA : X, Y, Z {};
```

All virtual base subobjects are initialized before any non-virtual base subobject, so only the most derived class calls the constructors of the virtual bases in its member initializer list.

Considerations:
* Derived classes classes must initialize all the virtual bases in the hierarchy. This can be a problem, as the derived contructor might need to provide arguments to the virtual base constructors.
* `dynamic_cast` must be used instead of `static_cast`.
* Virtual base classes are most suitable when the classes that derive from the virtual base, and especially the virtual base itself, are pure abstract classes.

It is commonly used to solve the diamond problem in multiple inheritance. See [faq:virtual-inheritance-where](https://isocpp.org/wiki/faq/multiple-inheritance#virtual-inheritance-where).


#### T: Abstract Class

Defines an abstract type which cannot be instantiated, but can be used as a base class. [cpp:abstract-class](https://en.cppreference.com/w/cpp/language/abstract_class).
* Abstract class: Defines or inherits at least one pure virtual function.
* Pure abstract class: Only pure virtual functions.

#### T: Dynamic Polymorphism

Runtime polymorphism is best suited to manipulate an open set of related types with different representations. This is implemented through inheritance, where derived classes implement a common interface. 

```cpp
struct Vehicle {
	virtual void accelerate() = 0;
	virtual ~Vehicle() { }
};
struct Car   : Vehicle { void accelerate() override; };
struct Truck : Vehicle { void accelerate() override; };
```

Compilers usually implement dynamic polymorphism through a *virtual table* `vtable`. The derived class holds a pointer to a table containing function pointers to the most derived implementations for the base class interface. Using the example above:
```cpp
struct Car : Vehicle {
	__vtable* _vptr;
	...
};

// Car's vtable:
{
	void (*accelerate)(Vehicle* __this);
	void (*__dtor)(Vehicle* __this);
}
```

The use cases are generally two, and as objects will usually have different sizes, we are forced to use reference semantics (pointers) for containers and signaturesm instead of value semantics:
* Return related types from a function.
* Store related types in a container.
```cpp
std::unique_ptr<Vehicle> selectVehicle(std::string choice) {
	if (choice == "car") return std::make_unique<Car>{...};
	else if (choice == "truck") return std::make_unique<Truck>{...};
	else die();
}

{
	std::vector<std::unique_ptr<Vehicle>> vehicles;
	vehicles.push_back(std::make_unique<Car>{...});
	vehicles.push_back(std::make_unique<Truck>{...});

	for (auto& vehicle: vehicles) {
		vehicle.accelerate();
	}
}
```

`std::variant` sometimes can be used instead of dynamic polymorphism, but:
* Only works if the number of types is limited and known.
* And the the visitation approach may not be convenient.
TODO: Add variant example.

#### T: Dynamic Polymorphism Drawbacks

**Runtime polymorphism has some important drawbacks:**
* Forces usage of reference semantics.
* Makes harder to reason about the code.
* Inefficient: vtable, heap, synchronization, lifetime management (garbage collection, reference counting).
* Encourages shared ownership and proliferation of incidental data-structures.
* Intrusive on external libraries.

Reference semantics makes harder to reason about the code:
* Changes the semantics of copy, assignment, and equality operators, as you cannot operate T through one pointer, without considering the effect on the other.
* Usage of pointers makes the code complex to write, read, and reason about.
* Usage of pointers introduces nullable semantics!: Code will need to handle null cases.
* The pointers break our ability to reason *locally* about code. **A shared pointer is as good as a global variable**.
* Does not play well with STL algorithms. For instance, when sorting the container, the pointers will be sorted by address!.

Dynamic Polymorphism is inefficient:
* Calls to virtual functions (including dtor) are indirected through the vtable.
* Forces to do heap allocations (expensive!).
  - What it there is no enough memory?
  - Leakages may happen.
  - Resources must be managed, e.g., using smart pointers. Moreover, when lazy shared_ptr may be used, which is even more costly.
* The access to the class must be synchronized.
* In C++ the compiler cannot optimize out heap allocations, but it could devirtualize the calls.

Dynamic Polymorphism is intrusive:
* When using an external library we are forced to wrap or the external type make it satisfy our interface, or reopen it to add a base class to it!.
* This problem is even worse in large systems, where objects start inheriting from multiple things.

```cpp
// Runtime Polymorphism is intrusive:
namespace lib {
	struct Motorcycle { void accelerate(); };
}

vehicles.push_back(std::make_unique<lib::Motorcycle>{...}); // can't work!
```

The root issue with polymorphic types, by definition, comes from it's use, and not from the type itself:
* We would like to deal with a set of types, that share a particular attribute, as if they were the same type.
* When using inheritance to represent that relationship, the use of the object is being encoded in the object itself! **(tight coupling).**
  - There are no polymorphic types, only a polymorphic use of similar types.
  - We would like to disclose the object from its use.

Polymorphism without inheritance can be achieved through the Runtime Concept Idiom.

References:
* CppCon 2017: Louis Dionne “Runtime Polymorphism: Back to the Basics”: https://www.youtube.com/watch?v=gVGtNFg4ay0
* Better Code: Runtime Polymorphism - Sean Parent: https://www.youtube.com/watch?v=QGcVXgEVMJg

#### T: Runtime Concept Idiom

Allows polymorphism when needed without inheritance. The only requirement is to provide external functions to satisfy the desired interface.

Pros:
* All drawbacks from dynamic polymorphism are avoided!.
* The client is not burdened with inheritance, factories, class registration, and memory management.
* Penalty of runtime polymorphism is only payed when needed.
* Polymorphic types are used like any other types, including built-in types.
* Greater reuse and fewer dependencies.
* There is no performance penalty to using value semantics, and often times there are benefits from not using the heap.

Cons:
* Relationship is not self-documenting, as it is not clear which objects are to be used for polymorphism, and why some functions exist.
* Not good when multiple-inheritance is required.
* Is more difficult to implement, as it requires good understanding of move-semantics.

For an example on how to implement this, see:
* Better Code: Runtime Polymorphism - Sean Parent: https://www.youtube.com/watch?v=QGcVXgEVMJg

#### T: Static Polymorphism

### Lambda Functions

### Templates

### Standard Library

### Error Handling

#### T: Static Assert (C++11)

Performs compile time assertion checking. [cpp:static_assert](https://en.cppreference.com/w/cpp/language/static_assert).

```cpp
static_assert ( bool_constexpr , message );
static_assert(FooLib::Version > 2, "An updated FooLib is required.!");
```

- The call is only evaluated once, at compile time, and only in one context (templates are different contexts).
- For dynamic time assertion checking see: [assert](#t-assert).

#### T: Assert

Performs dynamic assertion checking in debug build modes. [cpp:assert](https://en.cppreference.com/w/cpp/error/assert)

```cpp
#ifdef NDEBUG
#define assert(condition) ((void)0)
#else
#define assert(condition) /*implementation defined*/
#endif
```

- The `assert()` macro depends on debug flags, and calls `std::abort` on error.
- If `assert()` is called in a constexpr context, then it will work as expected at compile time!.


### Multi-Threading

### Concepts


## TODO

### T: Functors
https://en.cppreference.com/w/cpp/utility/functional
https://stackoverflow.com/questions/356950/what-are-c-functors-and-their-uses
https://www.fluentcpp.com/2017/03/09/functors-are-not-dead-the-double-functor-trick/
    • A functor is pretty much just a class which defines the operator(). That lets you create objects which "look like" a function:
    • Unlike regular functions, they can contain state. E.g., Functor behavior can be customized by their methods/constructor.
    • When passed as functions, the compiler can know exactly what method to inline. When using function pointers, this is not clear, and has to be computed at runtime.

### T: Object Slicing
- https://stackoverflow.com/questions/274626/what-is-object-slicing
- https://www.geeksforgeeks.org/object-slicing-in-c/

- Happens when a derived class object is assigned to a base class object, additional attributes of a derived class object are sliced off to form the base class object. If a function gets the object by value, then only Base class methods will be called.
- This can be avoided when pointers/references to objects are passed as function arguments. This way, the binding is delayed to runtime, and the proper methods will be called.
- It can also be avoided by making the Base pure virtual.

### ENUM CLASSES7
https://en.cppreference.com/w/cpp/language/enum
https://stackoverflow.com/questions/18335861/why-is-enum-class-preferred-over-plain-enum


### LAMBDA FUNCTIONS (C++11)
https://en.cppreference.com/w/cpp/language/lambda
https://stackoverflow.com/questions/7627098/what-is-a-lambda-expression-in-c11
    • Lambda functions are just syntactic sugar for anonymous functors.
    • It is possible to execute a lambda immediately upon definition
    • Under the hood, it is the object of an autogenerated class with overloading operator() const. Such object is called closure and created by compiler. This 'closure' concept is near with the bind concept from C++11. But lambdas typically generate better code. And calls through closures allow full inlining.\

    • [] is the capture list, () the argument list and {} the function body.
    • []() { } // barebone lambda
    • []() mutable -> T { } // T is the return type, still lacking throw()
    • auto lambda = [](auto x, auto y) {return x + y;}; // generic lambda

You can capture by both reference and value, which you can specify using & and = respectively:
    • [&foo] capture by reference
    • [&] captures all variables used in the lambda by reference
    • [=] captures all variables used in the lambda by value
    • [&, foo] captures variables like with [&], but foo by value
    • [=, &foo] captures variables like with [=], but foo by reference
The generated operator() is const by default, with the implication that captures will be const when you access them by default. This has the effect that each call with the same input would produce the same result, however you can mark the lambda as mutable to request that the operator() that is produced is not const.


### PARAMETER PACK - FUNCTIONS AND TEMPLATES  (C++11)
https://en.cppreference.com/w/cpp/language/parameter_pack

```cpp
// Variadic class template
template<class ... Types> struct Tuple {};
Tuple<> t0;       	// Types contains no arguments
Tuple<int> t1;    	// Types contains one argument: int
Tuple<int, float> t2; // Types contains two arguments: int and float
Tuple<0> error;   	// error: 0 is not a type

// Variadic function template
template<class ... Types> void f(Types ... args);
f();       // OK: args contains no arguments
f(1);      // OK: args contains one argument: int
f(2, 1.0); // OK: args contains two arguments: int and double
```


### PERFECT FORWARDING (C++11)
https://en.cppreference.com/w/cpp/utility/forward     (GOOD EXAMPLE!)
https://cpppatterns.com/patterns/perfect-forwarding.html
https://www.modernescpp.com/index.php/perfect-forwarding

    • Intent: Forward arguments of one function to another as though the wrapped function had been called directly.
    • Perfect forwarding allows us to preserve an argument’s value category (lvalue/rvalue) and const/volatile modifiers. Perfect forwarding is performed in two steps:
        ◦ receive a forwarding reference (also known as universal reference), 
        ◦ then forward it using std::forward.
    • It is often used with variadic templates to wrap calls to functions with an arbitrary number of arguments. For example, std::make_unique and std::make_shared both use perfect forwarding to forward their arguments to the constructor of the wrapped type.

```cpp
#include <utility> 
template<typename T, typename U> 
std::pair<T, U> make_pair_wrapper(T&& t, U&& u)
{
  return std::make_pair(std::forward<T>(t), std::forward<U>(u));
}
```
  • the arguments t and u are forwarding references because they are declared in the form X&& where X is a template parameter
  • std::forward forwards these arguments to std::make_pair, allowing them to be moved into the pair when the original argument was an rvalue expression.


### NOEXCEPT OPERATOR (C++11)
https://en.cppreference.com/w/cpp/language/noexcept

    • performs a compile-time check that returns true if an expression is declared to not throw any exceptions.
    • It can be used within a function template's noexcept specifier to declare that the function will throw exceptions for some types but not others.

```cpp
void may_throw();
void no_throw() noexcept;
auto lmay_throw = []{};
auto lno_throw = []() noexcept {};
std::cout << std::boolalpha
           << "Is may_throw() noexcept? " << noexcept(may_throw()) << '\n'  // true
           << "Is no_throw() noexcept? " << noexcept(no_throw()) << '\n'       // true
           << "Is lmay_throw() noexcept? " << noexcept(lmay_throw()) << '\n' // true
           << "Is lno_throw() noexcept? " << noexcept(lno_throw()) << '\n'    //true
```

### CONSTEXPR (C++11)
https://en.cppreference.com/w/cpp/language/constexpr

    • Declares that it is possible to evaluate the value of the function or variable at compile time. Such variables and functions can then be used where only compile time constant expressions are allowed 
    • A constexpr specifier used in an object declaration (or non-static member function) implies const.
    • A constexpr specifier used in a function or static member variable (since C++17) declaration implies inline.
A constexpr variable must satisfy the following requirements:
    • its type must be a LiteralType.
    • it must be immediately initialized
    • the full-expression of its initialization, including all implicit conversions, constructors calls, etc, must be a constant expression


### TEMPLATE RECURSION (C++11)
https://stackoverflow.com/questions/38775706/how-to-write-a-variadic-template-recursive-function
```cpp
// base case
template<class none = void>
constexpr int f() {  return 0; }

// recursion
template<int First, int... Rest>
constexpr int f() { return First + f<Rest...>(); }

// call
f<1, 2, 3>();
```

### CURIOUSLY RECURRING TEMPLATE PATTERN (CRTP)
https://stackoverflow.com/questions/4173254/what-is-the-curiously-recurring-template-pattern-crtp
https://www.fluentcpp.com/2017/05/12/curiously-recurring-template-pattern/
https://en.wikipedia.org/wiki/Curiously_recurring_template_pattern

```cpp
template <class T> 
class X{...};   // methods within Base can use template to access members of Derived
class A : public X<A> {...};

    • idiom in C++ in which a class X derives from a class template instantiation using X itself as template argument
    • known as F-bound polymorphism
    • This actually gives the X template the ability to be a base class for its specializations. 


Example: 
class A: public Singleton<A>
{
   //Rest of functionality for class A
};

    • From the perspective of the base object, the derived object is itself, but downcasted. Therefore the base class can access the derived class by static_casting itself into the derived class.
template <typename T>
class Base
{
public:
    void doSomething()
    {
        // Base class is designed to be inherited from by its template parameter
        T& derived = static_cast<T&>(*this);
        use derived...
    }
};
```

### SFINAE: Substitution Failure Is Not An Error
https://en.cppreference.com/w/cpp/language/sfinae
    • This rule applies during overload resolution of function templates.
    • When substituting the explicitly specified or deduced type for the template parameter fails, the specialization is discarded from the overload set instead of causing a compile error.
    • This feature is used in template metaprogramming.


### TEMPLATE META-PROGRAMMING
https://www.codeproject.com/Articles/3743/A-gentle-introduction-to-Template-Metaprogramming
https://en.wikipedia.org/wiki/Template_metaprogramming

    • Intent: Do the job at compile time.
    • They are not MACROS!. 
    • Based on extremely early binding. The compiler acts as an interpreter or a "virtual computer" that emits the instructions that make up the final program. 
    • Requires the template definition and an instantiation as starting point.
    • Optimization is an advantage, but can greatly increase the size of the program.
    • Template metaprogramming is Turing Complete!
    • 
    • There are no mutable variables!.
    • Flow control is usually made through recursion.
    • You can implement IF/ELSE, SWITCH, LOOPS,.. Everything computable at compile time.

```cpp
Example:
// Meta Template factorial function
template< int i >
class FACTOR{
  public:
      enum {RESULT = i * FACTOR<I-1>::RESULT};
};

class FACTOR< 1 >{
  public:
      enum {RESULT = 1};
};
// know at compile time!
// compiler sues recursion to generate classes from FACTOR<0> to FACTOR<5>.
int j = FACTOR< 5 >::RESULT; 
```

#### Loop Unrolling:
A great advantage of TMP is loop unrolling!. We avoid runtime checks and iterations.
We remove the loop, and just create lots of scenarios for each value.
    • there is no loop in the resulting binary code. 

```cpp
// Example: Addition on vector.
template <int length>
Vector<length>& Vector<length>::operator+=(const Vector<length>& rhs) 
{
    for (int i = 0; i < length; ++i)
        value[i] += rhs.value[i];
    return *this;
}

// Code like this is generated FOR EACH length.
template <>
Vector<2>& Vector<2>::operator+=(const Vector<2>& rhs) 
{
    value[0] += rhs.value[0];
    value[1] += rhs.value[1];
    return *this;
}
```


### STD CHRONO (C++11)
https://en.cppreference.com/w/cpp/chrono


### STD FUNCTION (C++11)
https://en.cppreference.com/w/cpp/utility/functional/function
https://stackoverflow.com/questions/20353210/usage-and-syntax-of-stdfunction

    • std::function is a type erasure object. That means it erases the details of how some operations happen, and provides a uniform run time interface to them. For std::function, the operations are copy/move and 'invocation' with operator() -- the 'function like call operator'.
    • In less abstruse English, it means that std::function can contain almost any object that acts like a function pointer in how you call it.
    • The signature it supports goes inside the angle brackets: std::function<void()> takes zero arguments and returns nothing. std::function< double( int, int ) > takes two int arguments and returns double. In general, std::function supports storing any function-like object whose arguments can be converted-from its argument list, and whose return value can be converted-to its return value.

### STD STRING_VIEW (C++17)
https://en.cppreference.com/w/cpp/string/basic_string_view
https://www.modernescpp.com/index.php/c-17-avoid-copying-with-std-string-view
https://www.modernescpp.com/index.php/c-17-what-s-new-in-the-library

The purpose of std::string_view is to avoid copying data which is already owned  by someone else and of which only a non-mutating view is required. So, this post is mainly about performance

### STD OPTIONAL (C++17)
https://devblogs.microsoft.com/cppblog/stdoptional-how-when-and-why/
https://en.cppreference.com/w/cpp/utility/optional

    • Allows to solve the problem where a value is SOMETIMES-A-THING.
    • This can mean sometimes a return, or sometimes a valid argument.
    • Also, can help with delayed initialization of resources.
    • Helps avoiding all common and ugly solutions to his problem. E.g., forget about using an extra bool arg, or a default value of -1 to overcome this.

```cpp
// UGLY -1
void maybe_take_an_int(int value = -1); // an argument of -1 means "no value"
int maybe_return_an_int(); // a return value of -1 means "no value"

// UGLY BOOL
void maybe_take_an_int(int value = -1, bool is_valid = false);

// UGLY STRUCTURE
void or_even_better(pair<int,bool> param = std::make_pair(-1, false));
pair<int, bool> maybe_return_an_int();

// SOLUTION
void maybe_take_an_int(optional<int> potential_value = nullopt);
optional<int> maybe_return_an_int();
```


### DRY PRINCIPLE - DONT REPEAT YOURSELF
https://en.wikipedia.org/wiki/Don%27t_repeat_yourself
"Every piece of knowledge must have a single, unambiguous, authoritative representation within a system" - Andy Hunt, Dave Thomas

WET: Violations of the DRY principle - "write everything twice", "we enjoy typing" or "waste everyone's time".


### AUTO TYPE DEDUCTION (C++11)
https://en.cppreference.com/w/cpp/language/auto
https://stackoverflow.com/questions/24109737/what-are-some-uses-of-decltypeauto

    • The auto and decltype(auto) type-speciﬁers designate a placeholder type that will be replaced later, either by deduction from an initializer or by explicit speciﬁcation with a trailing-return-type. 
    • auto:  For variables, specifies that the type of the variable that is being declared will be automatically deduced from its initializer. 
    • decltype(auto): For functions, specifies that the return type will be deduced from its return statements. (C++14)
    • For non-type template parameters, specifies that the type will be deduced from the argument. (C++17)
    • The auto type-speciﬁer is also used to signify that a lambda is a generic lambda.
    • The placeholder auto may be accompanied by modifiers, such as const or &, which will participate in the type deduction. 
    • The placeholder decltype(auto) must be the the sole constituent of the declared type. (since C++14)

```cpp
Usage examples
// Force usage of const& as return type.
auto const& Example(int const& i) { 	return i;  }

// in generic code you want to be able to perfectly forward a return type without knowing whether you are dealing with a reference or a value. decltype(auto) gives you that ability:
template<class Fun, class... Args>
decltype(auto) Example(Fun fun, Args&&... args) { 
    return fun(std::forward<Args>(args)...); 
}

// Example on decltype(auto)
string  lookup1();
string& lookup2();
// C++11 way of keeping the “referenceness” of the return type
string  look_up_a_string_1() { return lookup1(); }
string& look_up_a_string_2() { return lookup2(); }

// C++14 way of doing the same.
decltype(auto) look_up_a_string_1() { return lookup1(); }
decltype(auto) look_up_a_string_2() { return lookup2(); }
```

### VIRTUAL FUNCTIONS AND V-TABLE

The vtable is not in the standard, but is the common way on how compilers implement dynamic dispatch (virtual methods).

https://stackoverflow.com/questions/99297/how-are-virtual-functions-and-vtable-implemented

    • C++ specification does not define that vtables are required, but most compilers use them to store knowledge about virtual functions.
    • Modern compilers only create a vtable if a class has at least 1 virtual function.
    • Using the vtable implies a space and time overhead vs calling a non virtual function.
    • 




### REFERENCE COLLAPSING RULES
https://isocpp.org/blog/2012/11/universal-references-in-c11-scott-meyers
https://stackoverflow.com/questions/13725747/concise-explanation-of-reference-collapsing-rules-requested-1-a-a-2
https://en.cppreference.com/w/cpp/language/reference


    • The reference collapsing rules (save for A& & -> A&, which is C++98/03) exist for one reason: to allow perfect forwarding to work.
    • 
	
	
	
	
* Constructor call order
* Late vs early binding
* Pointer arithmetic
* C language aspects
* Lambdas


# Classes

### Ctor()=default; Ctor()=delete; (since C++11)
https://en.cppreference.com/w/cpp/language/default_constructor
A default constructor can be called without arguments. 
A type with a public default constructor is DefaultConstructible.

// Default constructor
// The compiler will define the implicit default constructor even if other constructors are present.
class_name() = default ;

// Deleted default constructor
// Deleted default constructor: if it is selected by overload resolution, the program fails to compile.
class_name() = delete ;
class_name c; // Fails to compile.
 

OBS: There are more rules about implicit declarations, definitions and deletions of the default constructor, depending on the members and inheritance properties. See the link below.

### Ctor/Dtor call order
https://stackoverflow.com/questions/7539282/order-of-calling-constructors-destructors-in-inheritance
0. Object memory is allocated. 
1. Construction always starts with the base class. 
  * virtual inheritance gets higher preference.
  * multiple base classes: starts with the leftmost base.
2. Initialize member fields in the order they are declared.
3. The object becomes a true instance of the class.
4. Constructor body is executed.
5. 
The order of the destructor is exactly the reverse

### Copy Constructor
https://en.cppreference.com/w/cpp/language/copy_constructor

class_name ( const class_name & ) ;   
Constructs an object based on the state of an existing object.
If not provided, the compiler declares it as non-explicit, inline, and public.
Can be deleted or defaulted.

```cpp
struct Foo
{
    int n;
    Foo(int n = 1): n(n) { }

    // user-defined copy ctor
    Foo(const Foo& o): n(o.n) { } 
};


// Create o2 based on o1. 
Foo o1(0);
Foo o2(o1); 
```

### Copy Assignment Operator
https://en.cppreference.com/w/cpp/language/copy_assignment

T& operator=(T ) or T& operator=(const T&)
* The “const” version cannot use the copy-and-swap idiom.
* Copies the state of an object into the other.
* It is a little more complex, because the target object is already in some valid state. 
* If not provided, the compiler declares it as inline and public.
* Can be deleted or defaulted.

```cpp
struct A {
  int n;
  std::string s1;

  // copy assignment, copy-and-swap form
  A& operator=(A other) {
    std::cout << "copy assignment of A\n";
    std::swap(n, other.n);
    std::swap(s1, other.s1);
    return *this;
  }
};

// example
A a1, a2;
a1 = a2;  // this cannot be done if deleted.

```

### Copy-and-Swap idiom (easier in C++11)
https://en.cppreference.com/w/cpp/language/operators#Assignment_operator
https://stackoverflow.com/questions/3279543/what-is-the-copy-and-swap-idiom

The copy assignment operator is difficult to implement!. If an exception is thrown, the object MUST keep its invariant and remain in a valid state.
This idiom helps avoiding code duplication and provides a strong exception guarantee.

Requisites:
* Working copy-constructor.
* Working destructor.
* Non-throwing swap function!!!.

We cannot use std::swap, as it is based on the copy ctor and copy assignment operator.
Generally, the implementation IS NOT SIMPLE!. In C++11, there is a simpler solution!. Better check the stackoverflow reference!.
 
### std::move (C++11)
https://stackoverflow.com/questions/3413470/what-is-stdmove-and-when-should-it-be-used
https://en.cppreference.com/w/cpp/utility/move

Indicates that an object MAY be "moved from" , allowing the efficient transfer of resources.
The move constructor could be used instead of the copy constructor, if the object has type "rvalue reference" (Type &&).
std::move() is a cast that produces an rvalue reference to an object, to enable moving from it.
It's a new C++ way to avoid copies. For example, using a move constructor, a std::vector could just copy its internal pointer to data to the new object, leaving the moved object in an incorrect state, avoiding to copy all data.

```cpp
std::string str = "Hello";
std::vector<std::string> v;
 
// This operation needs to copy the str.
v.push_back(str);

// This operation marks the str as movable.
// MAYBE the string will not be copied, instead, the contents of str will be moved into the vector.
// This also means str might now be empty.
v.push_back(std::move(str));
```

# General

### Range-Based FOR loops (since C++11)
https://en.cppreference.com/w/cpp/language/range-for

```cpp
Given: 
std::vector<int> v = {0, 1, 2, 3, 4, 5};
 
// traditional
for(int i=0;i<SIZE;i++)


// initializer == braced-init-list
for (int n : {0, 1, 2, 3, 4, 5})


// initializer == array
int a[] = {0, 1, 2, 3, 4, 5};
for (int n : a)


// iterator
for (auto iter = v.begin(); iter != v.end(); ++iter)
  
// access by const reference
for (const int& i : v)


// access by value
// the type of i is int
for (auto i : v) 


// access by forwarding reference
// the type of i is int&
for (auto&& i : v) 


// map access (since C++17)
for (auto&& [first,second] : mymap)
```


### for_each (algorithm)
https://en.cppreference.com/w/cpp/algorithm/for_each
https://en.cppreference.com/w/cpp/algorithm/accumulate
```cpp
std::vector<int> v{3, 4, 2, 8, 15, 267};
 
// Lambda (print)
auto print = [](const int& n) { std::cout << " " << n; };
std::for_each(nums.begin(), nums.end(), print);
 
// Lambda (increase by 1)
std::for_each(nums.begin(), nums.end(), [](int &n){ n++; });

// Struct (reduce by sum)
struct Sum {
    Sum(): sum{0} { }
    void operator()(int n) { sum += n; }
    int sum;
};
Sum s = std::for_each(nums.begin(), nums.end(), Sum());

// std::accumulate
int sum = std::accumulate(v.begin(), v.end(), 0);
int product = std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>());
```
