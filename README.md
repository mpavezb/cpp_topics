# C++ Reference

Modern C++ knowledge base

This document serves as a knowledge base of important topics to know as a C++ Developer.
* All concepts are linked to the official documentation (https://en.cppreference.com/) when possible. These links can be identified by the `cpp:` prefix, as in [cpp:string](https://en.cppreference.com/w/cpp/string).
* To avoid redundant information, only small descriptions of each concept are provided, and further clarification when the official documentation might be hard to read.
* There is also an index of topics by level of experience, which can be used as a guideline to study the language.

Examples can be compiled through:
```cpp
mkdir -p build && cd build
cmake ../src -DCMAKE_INSTALL_PREFIX=../bin && make && make install
```

## Contents

- [Resources](#resources)
- [Categories](#categories)
- [Topics by Level](#topics-by-level)

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

**Online Tools:**
- Compiler and Execution: https://wandbox.org/
- Compilers to asm: https://godbolt.org/
- Compile to show hidden optimizations: https://cppinsights.io/

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

## Categories

Categorization comes directly from the official categorization: [cpp:cpp](https://en.cppreference.com/w/cpp).

The following categorization is used:

* [C++ Language](#c-language): [Basic Concepts](#c-basic-concepts), [Keywords](#c-keywords), [Preprocessor](#c-preprocessor), [Expressions](#c-expressions), [Declaration](#c-declaration), [Initialization](#c-initialization), [Functions](#c-functions), [Statements](#c-statements), [Classes](#c-classes), [Templates](#c-templates), [Exceptions](#c-exceptions)

* [STL](#stl): [General Utilities](#stl-general-utilities), [Concepts](#stl-concepts), [Diagnostics](#stl-diagnostics), [Strings](#stl-strings), [Containers](#stl-containers), [Iterators](#stl-iterators), [Ranges](#stl-ranges), [Algorithms](#stl-algorithms), [Numerics](#stl-numerics), [Localization](#stl-localization), [Input/Output](#stl-inputoutput), [Filesystem](#stl-filesystem), [Regular Expressions](#stl-regular-expressions), [Atomic Operations](#stl-atomic-operations), [Threading](#stl-threading)

* [Idioms and Best Practices](#idioms-and-best-practices)

* [General](#general): [Application Binary Interface](#g-application-binary-interface).

* Language Agnostic Topics:
  - GRASP (OOD).
  - SOLID: theory and code reviews.
  - Design Patterns: Creational, Structural, Behavioralm and **Concurrency**.
  - Working with Legacy Code
  - CLEAN Arquitecture
  - TDD

## Topics by Level

**Beginner**
* C++ Language:
  - Basics: loops, conditions, [reading type declarations](#c-reading-type-declarations), [semantics and syntax](#c-semantics-and-syntax).
  - Declaration: [pointers and references](#c-pointers-and-references), [static_assert](#c-static-assert-c11), [enum class](#c-enum-class).
  - Expressions: [nullptr](#c-nullptr), [operator overloading](#c-operator-overloading).
  - Statements: [range based for loops](#c-range-based-for-loops).
  - Functions: [function overloading](#c-function-overloading).
  - Classes: [struct and class](#c-struct-and-class), [POD Type](#c-pod-type), [class size](#c-class-size), [object lifetime](#c-object-lifetime), [class initialization order](#c-class-initialization-order), [derived classes](#c-derived-classes), [public inheritance](#c-public-inheritance), [abstract class](#c-abstract-class), [dynamic polymorphism](#c-dynamic-polymorphism), [overriding non-virtual functions](#c-overriding-non-virtual-functions).
* STL:
  - Utils: [assert](#stl-assert).
  - Containers: [std::vector](https://en.cppreference.com/w/cpp/container/vector), [std::array](https://en.cppreference.com/w/cpp/container/array).
  - Strings: [std::string](https://en.cppreference.com/w/cpp/string)

**Intermediate**
* C++ Language:
  - Functions: [functors](#c-functors), [lambda expressions](#c-lambda-expressions), [deleted and defaulted functions](#c-deleted-and-defaulted-functions).
  - Classes: [copy constructor](#c-copy-constructor), [copy assignment](#c-copy-assignment-operator), [private inheritance](#c-private-inheritance), [multiple inheritance](#c-multiple-inheritance), [diamond problem](#c-diamond-problem), [constructor delegation](#c-constructor-delegation), [explicit](#c-explicit).
  - Declarations: [auto](#c-auto), [decltype](#c-decltype).
  - Expressions: [user-defined literals](#c-user-defined-literals), [string literals](#c-string-literals).
  - Initialization: [list initialization](#c-list-initialization), [uniform initialization](#c-uniform-initialization), [copy elision](#c-copy-elision).
  -
  - templates (basics): https://en.cppreference.com/w/cpp/language/templates
  - template specialization: https://en.cppreference.com/w/cpp/language/template_specialization, https://en.cppreference.com/w/cpp/language/partial_specialization
  - dynamic memory management with new and delete: https://en.cppreference.com/w/cpp/language/delete https://en.cppreference.com/w/cpp/language/new  https://en.cppreference.com/w/cpp/memory
  - exception handling (basics): https://en.cppreference.com/w/cpp/language/exceptions, https://isocpp.org/wiki/faq/exceptions,
  - `this` pointer and functions.
* STL:
  - Algorithm : https://en.cppreference.com/w/cpp/algorithm
  - Chrono: https://en.cppreference.com/w/cpp/chrono
  - Containers: https://en.cppreference.com/w/cpp/container
  - String: [stl:string_view](#stl-string_view).
  - Utils: [smart pointers](#stl-smart-pointers)
  -
  - std::string small string optimization : https://shaharmike.com/cpp/std-string/ https://stackoverflow.com/questions/21694302/what-are-the-mechanics-of-short-string-optimization-in-libc
  - std::function: https://en.cppreference.com/w/cpp/utility/functional/function
  - std::optional : https://en.cppreference.com/w/cpp/utility/optional
  - iterators : https://en.cppreference.com/w/cpp/iterator
  - random number generation: https://en.cppreference.com/w/cpp/numeric/random
* Idioms and Best Practices:
  - [composition versus inheritance](#i-composition-vs-inheritance)
  - [const-correctness](#i-const-correctness)
  - [copy and swap idiom](#i-copy-and-swap-idiom)
  - [pimpl](#i-pimpl)
  - [raii](#i-raii)
  - rule of five, rule of three, rule of zero: https://en.cppreference.com/w/cpp/language/rule_of_three, https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three

**Experienced:**
* C++ Language:
  - Declarations: [const-and-volatile](#c-const-and-volatile), [constexpr](#c-constexpr), [rvalue references](#c-rvalue-references).
  - Expressions: [value categories](#c-value-categories), [casts](#c-casts).
  - Classes: [Empty base optimization](#c-empty-base-optimization), [virtual inheritance](#c-virtual-inheritance), [dynamic polymorphism drawbacks](#c-dynamic-polymorphism-drawbacks), [move semantics](#c-move-semantics), [object slicing](#c-object-slicing).
  - Exceptions: [exception safety guarantees](#c-exception-safety-guarantees), [noexcept](#c-noexcept).
* STL:
  - Utils: [stl:move](#stl-std-move), [stl:forward](#stl-std-forward).
  - std::bind: [stl:bind](https://en.cppreference.com/w/cpp/utility/functional/bind), [sample:bind.cpp](src/stl/bind.cpp).
* Idioms and Best Practices:
  - [runtime concept idiom](#i-runtime-concept-idiom)
* TODO:
  - IMPORTANT static polymorphism : https://stackoverflow.com/questions/19062733/what-is-the-motivation-behind-static-polymorphism-in-c
  - multi-threading
	- threads
	- atomics
	- condition variables
	- futures
  - Argument-Dependent Lookup:  https://en.cppreference.com/w/cpp/language/adl
  - Regular Expressions: https://en.cppreference.com/w/cpp/regex
  - I/O with streams: https://en.cppreference.com/w/cpp/io
  - Custom memory Management: https://en.cppreference.com/w/cpp/memory/allocator
	- std::allocator
	- operator new and why
  - https://en.cppreference.com/w/cpp/language/sfinae
  - https://en.cppreference.com/w/cpp/language/crtp

**Expert:**
* General: [ABI](#g-application-binary-interface).
* C++ Language:
  - Declarations: [reference collapsing rules](#c-reference-collapsing-rules).
* STL:
* Idioms and Best Practices:
* TODO:
  - Auto Type Deduction : https://en.cppreference.com/w/cpp/language/auto
  - Template Type Deduction :https://en.cppreference.com/w/cpp/language/template_argument_deduction
  - Variadic Templates : https://en.cppreference.com/w/cpp/language/parameter_pack , https://en.cppreference.com/w/cpp/language/variable_template
  - Template Recursion : https://stackoverflow.com/questions/54744252/recursive-template-explanation-c
  - Template Meta-Programming
  - Tag-Dispatch : https://arne-mertz.de/2016/10/tag-dispatch/,  https://stackoverflow.com/questions/32522279/tag-dispatching-example-in-c, https://www.fluentcpp.com/2018/04/27/tag-dispatching/
  - Iterator Categories: Forward, Bidirectional, Input, Output, Random Access.https://en.cppreference.com/w/cpp/iterator
  - Overload Resolution https://en.cppreference.com/w/cpp/language/overload_resolution
 ,
  - Universal References. https://isocpp.org/blog/2012/11/universal-references-in-c11-scott-meyers, https://en.cppreference.com/w/cpp/language/reference
  - https://en.cppreference.com/w/cpp/language/Zero-overhead_principle
  - calling conventions: https://stackoverflow.com/questions/949862/what-are-the-different-calling-conventions-in-c-c-and-what-do-each-mean

**Unassigned:**
* Erase-Remove Idiom: https://en.wikipedia.org/wiki/Erase%E2%80%93remove_idiom
* Associative Containers
* What would happen if you insert a user defined class into a map that only has operator == defined?
* Problem with vector of bools
* function ref-qualifiers: https://en.cppreference.com/w/cpp/language/function, https://stackoverflow.com/questions/23011532/const-reference-qualifier-on-a-member-function, https://docs.microsoft.com/en-us/cpp/cpp/function-overloading?view=vs-2019#ref-qualifiers
* std::expected
* important: multithreading, how vector is implemented, iterators.
* Class Layout: memory, typetraits, ppadding, optimizations, safety, baremetal https://www.youtube.com/watch?v=SShSV_iV1Ko
* vtable in depth.
* Arquitecture independence and safeties: avoid pragma, use static_assert.
* Memory initialization: heap and stack start to zero? always?, this may cause checks to pass with undefined data!.
* CppCon - The structure of a program https://www.youtube.com/watch?v=3KoXeegncrs : translation unit, phases, decl, def, link, Odr, duration, abi, names.
* CppCon - The hidden secrests of move semantics: https://www.youtube.com/watch?v=TFMKjL38xAI
* CppCon - SOLID: https://www.youtube.com/watch?v=Ntraj80qN2k
* CppCon - Design Patterns https://www.youtube.com/watch?v=2UUqX2eIdSM
* CppCon - MoveSemantics https://www.youtube.com/watch?v=ZG59Bqo7qX4
* CppCon - Exceptions https://www.youtube.com/watch?v=0ojB8c0xUd8
* CppCon - Concurrency https://www.youtube.com/watch?v=F6Ipn7gCOsY
* CppCon - Performance https://www.youtube.com/watch?v=koTf7u0v41o
* CppCon - Generic Algorithms https://www.youtube.com/channel/UCMlGfpWw-RUdWX_JbLCukXg
* CppCon - Dynamic Polymorphism with metaclasses and code injection https://www.youtube.com/channel/UCMlGfpWw-RUdWX_JbLCukXg
* CppCon - Sanitizers: https://www.youtube.com/watch?v=xEzfnbTabyE&t=217s
* https://stackoverflow.com/questions/44320465/whats-the-proper-way-to-enable-addresssanitizer-in-cmake-that-works-in-xcode
* https://en.cppreference.com/w/cpp/language/storage_duration
* https://stackoverflow.com/questions/461203/when-to-use-virtual-destructors
* https://en.cppreference.com/w/cpp/language/friend
* http://gafter.blogspot.com/2007/07/internal-versus-external-iterators.html
* https://stackoverflow.com/questions/3318410/pragma-pack-effect
* https://stackoverflow.com/questions/130794/what-is-dependency-injection

## C++ Language

* [Basic Concepts](#c-basic-concepts)
* [Keywords](#c-keywords)
* [Preprocessor](#c-preprocessor)
* [Expressions](#c-expressions)
* [Declarations](#c-declarations)
* [Initialization](#c-initialization)
* [Functions](#c-functions)
* [Statements](#c-statements)
* [Classes](#c-classes)
* [Templates](#c-templates)
* [Exceptions](#c-exceptions)

### C++: Basic Concepts

#### C++: Object Lifetime

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


#### C++: TODO Name Lookup:
  - Qualified Name Lookup: https://en.cppreference.com/w/cpp/language/qualified_lookup
  - Unqualified Name Lookup: https://en.cppreference.com/w/cpp/language/unqualified_lookup

#### C++: Reading Type Declarations

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


#### C++: Semantics and Syntax

* Regular types where the regular operations are implemented with the standard names are said to have *value semantics*.
* When objects are referred to indirectly, through a shared reference or pointer, the objects are said to have reference semantics.

### C++: Keywords
### C++: Preprocessor
### C++: Expressions

* [value categories](#c-value-categories)
* [casts](#c-casts)

#### C++: nullptr

`nullptr` is a pointer literal and a `prvalue` of type `std::nullptr_t`. [cpp:nullptr](https://en.cppreference.com/w/cpp/language/nullptr).

Never use the `NULL` macro or `0` as replacements for null:
* `nullptr` is always a pointer type.
* `NULL` and `0` may cause ambiguity in overloaded function resolution.

#### C++: Operator Overloading

Language operators can be overloaded [cpp:operator-overloading](https://en.cppreference.com/w/cpp/language/operators).

Operators `::`, `.`, `.*`, and `?:` cannot be overloaded. Some restrictions apply to the overloading of other operators.

See also:
* https://stackoverflow.com/questions/4421706/what-are-the-basic-rules-and-idioms-for-operator-overloading#4421719

#### C++: User-Defined Literals

Allows producing objects of user-defined type based on a basic type and user-defined suffix: [cpp:user-literal](https://en.cppreference.com/w/cpp/language/user_literal).

Considerations:
* There is no reason not to use `constexpr`.
* Suffix must start with `_`.

```cpp
struct MyReal {};

// user-defined captures
constexpr MyReal operator""_mr(long double x);                // 9.0_mr, .9_mr, 1.6e-19_mr
constexpr MyReal operator""_mr(long long x);                  // 9_mr, 0x6_mr, 0b1010_mr, 076_mr
constexpr MyReal operator""_mr(char x);                       // 'a'_mr
constexpr MyReal operator""_mr(const char* x, std::size_t n); // "hello"_mr // tag dispatch: add argument for different signature
constexpr MyReal operator""_mr(const char* x);                // 90'123'456'789_mr (useful for big numbers)

// usage
constexpr auto x = 9.0_mr; // captures: long double
```

#### C++: String Literals

String literals allow declaring `std::string` and `const char*` objects, based on literals. They are inherited from C, but C++ adds extra functionality. [cpp:string-literals](https://en.cppreference.com/w/cpp/language/string_literal).

Prefixes define encoding:
* `"..."`: narrow string literal: `const char[N]`.
* `L"..."`: wide string literal: `const wchar_t[N]`.
* `u8"..."`: UTF-8 encoded literal: `const char[N]`.
* `u"..."`: UTF-16 encoded literal: `const char[N]`.
* `U"..."`: UTF-32 encoded literal: `const char[N]`.
* `<encoding>R"<delimiter-seq>(raw-characters)<delimiter-seq>"`: Allows escaping sequence.

Suffix is used to specify the type:
* `"..."`: `const char[N]`.
* `"..."s`: `std::string`.

Using the `"..."s` suffix is important:
* Optimization: No need to call `std::string` constructor with type `const char*` and no need to compute length. Using the literal the conversion is known at compile time.
* Type Deduction: Useful for proper type deductions where `const char*` is not wanted!: Return types, template calls, ...
```cpp
// Type Deductions
auto str = "Foo"s;         // variable
[]() {return "Foo"s;}      // return

template<typename T> void foo(T &&t) {...}  // function template call
foo("Foo"s);

// optimization
std::string str = "foo";  // NOK
std::string str = "foo"s; // OK
```

#### C++: Value Categories

Are a semantic framework for the compiler to understand the language. They are not language features. It helps understanding how the language works. [cpp:value_category](https://en.cppreference.com/w/cpp/language/value_category).

In older C/C++, only *lvalues* and *rvalues* existed. The distinction is important, so that compilers can assume rvalues *might not* take space in memory.

C++ introduced new value categories **to support move semantics**. They can be easily explained by defining the following concepts:
* `i` as in has-identity: Can have addres taken.
* `m` as in can-be-moved-from: We are allowed to leave it in some indeterminate, but valid state.
* `I` as in not `i`: temporary or not associated with an object.
* `M` as in not `m`:

Then the following configurations are of interest: `im`, `iM`, `Im`, `i` as the combination of `iM` and `im`, and `m` as the combination of `Im` and `im`.
* `iM`: *lvalue*
* `im`: *xvalue*  (expiring value)
* `Im`: *prvalue* (pure rvalue)
* `i` : *glvalue* (generalized lvalue) : either a *lvalue* or *xvalue*.
* `m` : *rvalue*: either a *prvalue* or *xvalue*.

The compiler can select move operations only when it is unquestionably safe to do so:
1. *prvalues*: implicit moves.
2. *xvalues*: explicit moves (through `std::move`).

For a pass-by-ref to const to work as a replacement to pass by value, there is an exception to the rule that `T const &` must bind to an lvalue object of the same type. In this case, **binding or to a temporal expression which can be converted to that type is allowed**:
```cpp
{
	// 1. conversion: int -> double
	// 2. create temp double
	// 3. rg binds to the temp object.
	double const &rd = 3;
} // temp is destroyed when out of scope.
```

References:
* https://stackoverflow.com/questions/3601602/what-are-rvalues-lvalues-xvalues-glvalues-and-prvalues
* https://en.cppreference.com/w/cpp/language/decltype
* CppCon 2019:Ben Saks "Back to Basics: Understanding Value Categories": https://www.youtube.com/watch?v=XS2JddPq7GQ

#### C++: Casts

Old style C casts are hard to predict and understand, they may result in static, dynamic, reinterpret, const. C++ defines explicit cast operations for those.

Considerations:
* Both `static_cast` and `dynamic_cast` are generally safe, as long as we take some precautions.
* Both `const_cast` and `reinterpret_cast` are generally dangerous, as they tell the compiler not to trust the type system.
* An "up-cast" (cast to the base class) is always valid with both `static_cast` and `dynamic_cast`, and also without any cast, as an "up-cast" is an implicit conversion.

The cast operator enables implicit or explisit conversions from a class type to another [cpp:cast-operator](User defined: https://en.cppreference.com/w/cpp/language/cast_operator).
* The conversion function is declared like a non-static member function (or funtion template) with no parameters, no return type, and with(out) the `explicit` specifier.
```cpp
struct X {
			 operator int () const { return 7;       } // implicit conversion
	explicit operator int*() const { return nullptr; } // explicit conversion
};
```

`static_cast` [cpp:static-cast](https://en.cppreference.com/w/cpp/language/static_cast) converts between types using a combination of implicit and user-defined conversions.
* Cannot cast away cv-qualifiers.
* Type conversion if possible is equivalent to `new_type tmp(expression);`.
* Can be used to downcast from a non-virtual base to a derived class.
* There are no runtime checks, that must be ensured through other means!!.

`dynamic_cast` [cpp:dynamic-cast](https://en.cppreference.com/w/cpp/language/dynamic_cast)
* It is useful when we dont know the dynamic type of the object.
* If the object referred doesn't contain the type casted to as a base class, it returns a null pointer (for pointers), and throws a `bad_case` exception (for references).
* It is safe as long as the result is checked.
* The downcast is not valid if the base class is not-polymorphic (does not contain virtual functions).

`const_cast` [cpp:const-cast](https://en.cppreference.com/w/cpp/language/const_cast) converts between types with different cv-qualification.
* Does not work on pointers to (member) functions.
* Using it on `const` variables results in undefined behavior.
* It is used to remove the constness from references and pointers that ultimately refer to something that is not const.
```cpp
int i = 0;
const int& ref = i;
const int* ptr = &i;
const_cast<int&>(ref) = 3;   // this is ok
*const_cast<int*>(ptr) = 3;  // this is ok

struct type {
	int i;
	void f(int d) const {
		const_cast<type*>(this)->i = d; // OK as long as the actual object is not really const.
	}
};
```

`reinterpret_cast` [cpp:reinterpret-cast](https://en.cppreference.com/w/cpp/language/reinterpret_cast)
* https://stackoverflow.com/questions/573294/when-to-use-reinterpret-cast
* `static_cast`ing a pointer to and from `void*` preserves the address. The intermediate `void*` is valid!.
* `reinterpret_cast` only guarantees that if you cast a pointer to a different type, and then `reinterpret_cast` it back to the original type, you get the original value. The intermediate value (not necessarily `void*`) is in a unspecified state!.
* `static_cast` should be used when the intermediate value is `void*`.
```cpp
int* a = new int();

void* b = static_cast<void*>(a);      // b is valid
int* c = static_cast<int*>(b);        // c is valid

void* b = reinterpret_cast<void*>(a); // b is in unspecified state
int* c = reinterpret_cast<int*>(b);   // c is valid
```

See also:
* https://en.cppreference.com/w/cpp/language/explicit_cast
* https://en.cppreference.com/w/cpp/language/implicit_conversion
* https://stackoverflow.com/questions/28002/regular-cast-vs-static-cast-vs-dynamic-cast
* https://stackoverflow.com/questions/103512/why-use-static-castintx-instead-of-intx
* https://stackoverflow.com/questions/19554841/how-to-use-const-cast

### C++: Declarations

* [rvalue references](#c-rvalue-references)
* [reference collapsing rules](#c-reference-collapsing-rules)

#### C++: Pointers and References

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

Reference Declaration Limitations:
* There cannot be to `void`.
* Reference types cannot be *cv-qualified*.
* References are not objects: there cannot be arrays of references, pointers to references, or references to references.

Most code using references can be rewritten as using `* const`. They were really introduced to be able to implement special overloaded operators, like `++` and `*`, just like if we were using them for built-in types. Moreover, special operators cannot be overloaded using pointers!.
```cpp
struct S {
	... operator++(month  x) {}; // NOK
	... operator++(month *x) {}; // NOK
	... operator++(month &x) {}; // OK
};
S s;
int a;
++a;   // built-in
++s;   // by-value   - looks good, but only modifies the temporary!.
++&s;  // by-pointer - breaks illusion of expected usage.
++s;   // by-ref     - OK!.
```

Dangling:
* Dangling Pointer: When the lifetime of the pointed object ends before the end of the lifetime of the pointer, leading to a deallocated memory space.
* Dangling Reference: When the lifetime of the referred object ends before the end of the lifetime of the reference (undefined behavior).

#### C++: RValue References

References declare a named variable as an alias to an already-existing object or function [cpp:reference](https://en.cppreference.com/w/cpp/language/reference).

Reference types:
* lvalue reference `&`: only binds to lvalues.
* rvalue reference `&&`: only binds to rvalues.
* const lvalue ref `const &`: binds to both.

RValue reference properties:
* Prolongs the lifetime of temporary objects (the same as `const &`).
* It has binding priority in case if overloads accept `const &`.

An lvalue argument can be forced to become a rvalue reference through the `std::move` function.

#### C++: Reference Collapsing Rules:

Forming references to references is **only allowed through manipulations in templates or typedefs**, in which case the *reference-collapsing* rules apply [cpp:reference](https://en.cppreference.com/w/cpp/language/reference):

The reference collapsing rules (save for `A& & -> A&`, which is from C++98/03) exist for one reason: to allow perfect forwarding to work.

The rule:
* `T&& &&` collapses to `T&&`.
* All other combinations collapse to `T&`.

Because of how the collapsing rules work, rvalue references are also called *universal references*.

| `template<class T>`| `5` |`int a`|`int &r=a`|`int &&rr=5`|`const int a`|`const int& cr=ca`|
| ------------------ |-----| ----- | -------- |----------- | ----------- | ---------------  |
| `foo(T x)`         |`int`|`int`  |`int`     |`int`       |`int`        |`int`             |
| `foo(T& x)`        |  -  |`int`  |`int`     |`int`       |`const int`  |`const int`       |
| `foo(const T& x)`  |`int`|`int`  |`int`     |`int`       |`int`        |`int`             |
| `foo(T&& x)`       |`int`|`int&` |`int&`    |`int&`      |`const int&` |`const int&`      |

See also:
* https://isocpp.org/blog/2012/11/universal-references-in-c11-scott-meyers
* TODO: https://stackoverflow.com/questions/13725747/concise-explanation-of-reference-collapsing-rules-requested-1-a-a-2


#### C++: auto

Allows automatic type deduction [cpp:auto](https://en.cppreference.com/w/cpp/language/auto). However, it does not mean that the type is unknown!.

The `auto` placeholder may be accompanied by modifiers, such as `const` or `&`, which will participate in the type deduction.

TODO: Almost Always Auto idiom.

The `auto` keyword is a breaking change:
* The previous meaning was automatic storage duration, which is the default.
* The commitee considers that the introduction of new keywords is extremely expensive.

The main reasons for `auto` are: very complex types (like in STL), implementation of templates, and lambda functions.

#### C++: decltype

Inspects the declared type of an entity or the type and value category of an expression [cpp:decltype](https://en.cppreference.com/w/cpp/language/decltype). `decltype` is useful when declaring types that are difficult or impossible to declare using standard notation, like lambda-related types or types that depend on template parameters.

* `decltype(entity)`: Yields the type of the entity.
* `decltype(expression)`: If the argument is an expression of type `T` and:
  - Category *xvalue*, then yields: `T&&`.
  - Category *lvalue*, then yields: `T&`.
  - Category *prvalue*, then yields: `T`.
  - The type does not require completeness or to have a destructor. It can also be abstract.

```cpp
// Example 1: entity vs expression
struct A { double x; };
const A* a;
decltype(a->x) y;         // entity type              : double
decltype((a->x)) z = y;   // (lvalue) expression type : const double&

// Example 2: Function Template
// (but this can be deduced since C++14)
template<typename T, typename U>
auto add(T t, U u) -> decltype(t + u) { return t + u; }

// Example 3: Lambda Fuction
auto f = [](int a, int b) -> int { return a * b; };
decltype(f) g = f;
f(2, 2);
g(3, 3);
```

When to use `decltype`:
* `decltype` should be used when we need a type to be precisely the type as another one. The type which `auto` yields could be potentially different than the type we need!.
* Sometimes using `auto` and `decltype` yields the same results, so there is no win on using `decltype`.
* Similar to `auto`, `decltype` can be used to write shorter expressions, when the type is complex and we have a good expression to mirror.


The placeholder `decltype(auto)` can also be used, and it must be the the sole constituent of the declared type:
```cpp
// Allows perfect forwarding of return type:
template<class Fun, class... Args>
decltype(auto) Example(Fun fun, Args&&... args) {
	return fun(std::forward<Args>(args)...);
}

// Allows keeping the referenceness of the return type
string  lookup1();
string& lookup2();
decltype(auto) wrapper_1() { return lookup1(); }  // string
decltype(auto) wrapper_2() { return lookup2(); }  // string&
```

#### C++: const and volatile

Appears in any type specifier, to specify constness or volatility of the object being declared or type being named [cpp:cv-qualifiers](#https://en.cppreference.com/w/cpp/language/cv).

For any type T, other than function or reference, C++ defines the types:
* `const object`: Object cannot be modified. Attempts result in **compile time error**.
* `volatile object`: TODO.
* `const volatile object`: Behaves as both.

The `const` keyword tells the compiler to report a compile time error for any command that could change the object **in runtime**. The compiler does not need to know the exact value, just that that variable is read-only.

The *constness* of a value can be used by the compiler to create optimizations when it can prove which values will be computed:
```cpp
const int offset{10};
int foo(int x)
{
	if (x>0) return x + offset;
	else return x * 2;
}

// compiler can simply optimize out the following function calls!
int a = foo(5);  // --> int a = 15;
int b = foo(-5); // --> int b = -10;
```

The `mutable` specifier allows the modification of objects declared as `const`.

#### C++: constexpr

Specifies that the value of a variable or function can appear in constant expressions [cpp:constexpr](https://en.cppreference.com/w/cpp/language/constexpr). In other words, it tells the compiler that something should be constant at compile time.

The compiler enforces that `constexpr` definitions can be computed at compile-time. There some restrictions. In particular, all chained calls must be explicitely declared as constexpr.
```cpp
constexpr int x = 5 * 6;
const     int foo() {}      // invalid
constexpr int foo() {}      // OK
constexpr int foo(int d) {} // OK, but if called in constexpr context, the argument also needs to be constexpr.
```

Considerations:
* `constexpr` used in an object declaration (or non-static member function) implies `const`.
* `constexpr` used in a function or static member variable (since C++17) declaration implies inline.

Objects and functions declared `constexpr` can also be called in non-constexpr contexts. C++20 adds keyword `consteval` to enforce usage in compile-time.

Note: std::vector is not constexpr compliant, but std::array is.

#### C++: Enum Class

The `enum class` and `enum struct` types provide solutions to problems the plain `enum` generates. [cpp:enum-class](https://en.cppreference.com/w/cpp/language/enum).

Old Plain Enum:
* Symbols are kept in current scope.
* Integer type for members cannot be defined (`uint8_t`, `long`, ...): Cannot do math, and cannot forward declare! (compiler needs type).
* Implicit conversion to integer!. May not be desired.

Enum class and struct:
* Members are scoped to the class.
* Type is `int` unless specified.
* No implicit conversion to number!. `static_cast` must be used.


#### C++: Static Assert (C++11)

Performs compile time assertion checking. [cpp:static_assert](https://en.cppreference.com/w/cpp/language/static_assert).

```cpp
static_assert ( bool_constexpr , message );
static_assert(FooLib::Version > 2, "An updated FooLib is required.!");
```

- The call is only evaluated once, at compile time, and only in one context (templates are different contexts).
- For dynamic time assertion checking see: [assert](#c-assert).


### C++: Initialization

The *initialization* of an object provides its initial value at the time of construction: [cpp:initialization](https://en.cppreference.com/w/cpp/language/initialization).

It happens through the following expressions: `(expression-list)`, `= expression`, and `{ initializer-list}`.

Index:
* [copy elision](#c-copy-elision)

#### C++: List Initialization

Allows initialization of an object from a *braced-init-list*: `{initializer-list}` [cpp:list-initialization](https://en.cppreference.com/w/cpp/language/list_initialization).

Depending on how the list is constructed, the standard defines *direct-list-initialization* and *copy-list-initialization*:
* *direct-list-initialization* works for any constructor.
* *copy-list-initialization* only works for non `explicit` constructors.
* On any case, the list expression always uses braces.

```cpp
// direct-list-initialization
T object { arg1, arg2, ... };                    // initialize named variable
T { arg1, arg2, ... }                            // initialize unnamed temporary
new T { arg1, arg2, ... }                        // initialize in new expression
Class { T member { arg1, arg2, ... }; };         // initialize class member
Class::Class() : member{arg1, arg2, ...} ... {}  // in ctor member-initializer-list

// copy-list-initialization
T object = {arg1, arg2, ...};               // initialize named variable after =
Class { T member = { arg1, arg2, ... }; };  // initialize class member after =
function( { arg1, arg2, ... } )             // initialize parameter to function
return { arg1, arg2, ... } ;                // initialize returned object
object[ { arg1, arg2, ... } ]               // initialize parameter to []
object = { arg1, arg2, ... }                // initialize parameter to operator=
U( { arg1, arg2, ... } )                    // initialize parameter to ctor
```

C++11 introduces the type `std::initializer_list<T>`. Objects of that class are container proxies with forward iterators and a size to a temporary array. These are different to the list initialization concept!.

list-initialization limits the allowed implicit conversions by prohibiting the following:
* demotion of `long double`, `double` or `float` to smaller types (except when constant expression and no overflow).
* conversion from floating-point type to integer type.
* conversion from integer type to floating-point type (except when constant expression and can be stored exactly).
* ...

TODO: Can an object be partially initialized? See: [sample:list-initialization.cpp](src/language/list_initialization.cpp).

See also:
* https://stackoverflow.com/questions/13461027/why-does-the-standard-differentiate-between-direct-list-initialization-and-copy
* https://stackoverflow.com/questions/50422129/differences-between-direct-list-initialization-and-copy-list-initialization
* http://mikelui.io/2019/01/03/seriously-bonkers.html

#### C++: Uniform Initialization

Was introduced in C++11, where almost anything can be initialized using curly braces: initializer lists.

In short, it solves the following problems:
* Aggregates (arrays, POD types) can be initialized in the initializer list (avoids executing body if initialization fails!).
* Solves the *most vexing parse* problem, where `C c()` may look like a ctor call, but it actually means function declaration.
* Initialization of complex containers is easier.

Drawbacks:
* The list initialization may select a constructor which is not intende to be used (see the example below).

```cpp
// initializer list
struct PODType { int d; float x; }
struct C {
	PODType pod;
	int array[3];
	double d;
	C() : pod{2, 1.0}, array{0,1,2}, d{3.0} {}
};

// Most Vexing Parse problem
C c(); // Maybe not ok. Function declaration!!!
C c{}; // Good.

// complex containers
std::vector<std::string> names{ "Braum", "Janna", "Leona", "Sona" };
std::map<std::string, int> scores{ {"Alex", 522}, {"Pumu", 423}, {"Kitten", 956} };

// Problem with constructors
std::vector<int> aDozenOfFives{12, 5}; // actually creates a vector of two elements, instead of 12
std::vector<int> aDozenOfFives(12, 5); // explicit call solves the issue.
```

See: https://arne-mertz.de/2015/07/new-c-features-uniform-initialization-and-initializer_list/

#### C++: Copy Elision

> Elision - The omission of a sound or syllable

Omits copy and move constructors, resulting in zero-copy pass-by-value semantics [cpp:copy-elision](https://en.cppreference.com/w/cpp/language/copy_elision). Copy elision is an optimization implemented by most compilers to prevent extra (potentially expensive) copies in certain situations. It makes returning by value or pass-by-value feasible in practice (restrictions apply).

In some cases the compilers are required to do elision, or just permitted to do so.
* Elision will happen even if the copy/move constructor and the destructor have observable side-effects.
* The objects are constructed directly into the storage where they would otherwise be copied/moved to.
* Multiple copy elisions may be chained to eliminate multiple copies.
* You shouldn't have critical logic inside copy/move-constructors or destructors, as you can't rely on them being called.
* All elisions ignore cv-qualifications.

(Named) Return Value Optimization - (N)RVO:
* When an object returned by-value from a method has its copy elided.
* The object must have the same class type as the return type.
* Its called RVO when the operand is a prvalue of the same class type as the function return type.
* Its called NRVO when the returned object is the name of an object which is non-volatile, has automatic storage, is not a function parameter.
* Guaranteed in constant expressions and constant initialization.
* RVO is mandatory since C++17.

```cpp
struct C {
  C() {}
  C(const C&) { std::cout << "A copy was made.\n"; }
};

C f() {
  return C(); // RVO
}

C g() {
	C c;
	return c; // NRVO
}

int main() {
  std::cout << "Hello World!\n";
  C obj = f(); // Copy constructor isn't called
}
```

Elision on initialization:
* In the initialization of an object, when the initializer expression is a prvalue of the same class type as the variable type.
```cpp
// only one call to default constructor of T, to initialize x
T x = T(T(f()));
```

Mandatory elision of copy/move operations (since C++17):
* The copy/move constructors need not be present or accessible.
1. RVO.
2. Elision on initialization.

Non-Mandatory elision of copy/move operations:
* The copy/move constructors must be present and accessible (as if no optimization happened at all).
1. NRVO
4. In throw expressions and catch clauses.

Common limitations:
* multiple return points.
* conditional initialization.

See also:
* https://en.wikipedia.org/wiki/Copy_elision#Return_value_optimization
* https://stackoverflow.com/questions/12953127/what-are-copy-elision-and-return-value-optimization

### C++: Functions

#### C++: Function Overloading

Functions are said to be overloaded when they share the name and they differ on any of the following:
* Number of arguments.
* Type of arguments.
* References to `const` or `volatile`: `const T&` versus `T&`.
* Pointers to `const` or `volatile`: `const T*` versus `T*`.
* `const` or `volatile` when applied to the entire function.
* Presence of ellipsis.
* Function Ref-Qualifiers.

Overloaded functions differentiate between argument types that take different initializers. Therefore, `T` and `T&` are considered the same for the purposes of overloading.

The following elements are not considered for overloading.
* Return Type. This can be modified only any of the other elements differ.
* Type vs Type&

```cpp
// Valid Overloads
void foo() {}
void foo(int d) {}
bool foo(double x) {}
void foo(int a, int b) {}
void foo(T& t) {}
void foo(T* t) {}
void foo(const T& t) {}
void foo(const T* t) {}
void foo(volatile T& t) {}
void foo(volatile T* t) {}

// Error: Conflicting return type
void foo(int d) {}
bool foo(int d) {}

// Error: Conflicting type resolution
void foo(T t) {}
void foo(T& t) {}         // compiler error! conflicts with: void foo(T t) {}
```

##### Argument Matching

Overloaded functions are selected for the best match of function declarations in the current scope:
1. An exact match is found.
2. A trivial conversion is performed.
3. An integral promotion is performed.
4. A standard conversion exists.
5. A user-defined conversion exists: through conversion operator or constructor.
6. Arguments represented by an ellipsis were found.

The application of conversions is subject to the following rules:
* Sequences of conversions using more than one user-defined conversion are not considered.
* Sequences of conversions that can be shortened by removing intermediate conversions are not considered.

Under the hood, the compiler creates a set of *best-matching-functions* for each of the arguments (number of sets is equal to the number of arguments). The selected function is the intersections of all those sets. If this results in multiple or missing functions, then there is a compiler error.

TODO: Conversion Operator: https://en.cppreference.com/w/cpp/language/cast_operator

##### Argument Matching and the this pointer

Non-static functions have an implicit argument that supplies the `this` pointer. These functions require that the implied `this` pointer matches the object type through which the function is being called.

Unlike other arguments in overloaded functions, no temporary objects are introduced and no conversions are attempted when trying to match the `this` pointer argument.
* When the `->` member-selection operator is used, the `this` pointer has a type of `T * const`. If the members are declared `const` or `volatile`, the type is `const/volatile T * const`.
* When the `.` member-selection operator works in the same way, but `obj.name` is switched to `(&obj)->name`.

References:
* https://docs.microsoft.com/en-us/cpp/cpp/function-overloading?view=vs-2019

#### C++: Deleted and Defaulted Functions

The keywords `default` and `delete` were introduced in C++11 to replace the body of some functions: [cpp:default](https://en.cppreference.com/w/cpp/language/function#Function_definition), [cpp:delete](https://en.cppreference.com/w/cpp/language/function#Deleted_functions).

`default`:
* Can be applied to special member functions (ctor, copy, move, assgnmnt, dtor) and comparison operators.
* Defaulted functions are implemented by the compiler.
* Can be used to avoid deletion of default constructor, when other ctors are provided.
* The default constructor is created with argument list and empty body!.

```cpp
class A {
	// Avoid deletion of the defaut constructor
	A() = default;
	A(int d) {}
};
```


`delete`:
* Can be applied to any function.
* Deleted functions are hidden by the compiler.
* Can be used to forbid functions like copy ctors (this was done by defining them as private or protected).
* Can be used to avoid implicit conversions.

```cpp
class A {
	// Forbid copy assignment and copy constructor
	A& operator=(const X&) = delete;
	A(const X&) = delete;

	// Forbid implicit conversion
	A(long long);     // can initialize with an long long
	A(long) = delete; // but not anything less
};
```

#### C++: Functors

A Functor (Function Object) is an object which behave as functions [cpp:functor](https://en.cppreference.com/w/cpp/named_req/FunctionObject), [cpp:functional](https://en.cppreference.com/w/cpp/utility/functional). It is achieved by defining the `operator()`. Unlike regular functions, they can contain state, extra functions, and overloads:
```cpp
class Foo {
	// overloads
	bool operator()(int d) { return d > 0; }
	bool operator()(float x) { return x > 0; }
};

Foo foo;
bool a = foo(0);
```

Functors and types [sample:functors-and-types.cpp](src/language/functors_and_types.cpp):
* A regular function type is defined by: the number of parameters, their type, and the type of the return value.
* Two functor classes defining the same function have different types!.
* Both, functors and functions can be used to instanciate same templates, because they syntactically behave the same.

Benefits:
* Regular functions are not functor types, but can be used where functors are expected due to function-to-pointer implicit conversion.
* When passed as functions, the compiler can know exactly what method to inline. When using function pointers, this is not clear, and has to be computed at runtime.
* Using functors with Function Templates allows reuse and faster code, because the same Funtion Template works for multiple functors, and because the compiler exactly knows which functions will be called.
* Functors can be easily parameterized, because they are classes which can have other members.

```cpp
// LessThan Functor
struct LessThan {
	int val;
	LessThan(int& x) : val(x) {}
	bool operator()(const int& x) const { return x < val; }
};

// using functor with function template from STL
auto p = find_if(v.begin(), v.end(), LessThan(100));
```

See Also:
* Code example in [sample:functors.cpp](src/language/functors.cpp).
* https://www.fluentcpp.com/2017/03/09/functors-are-not-dead-the-double-functor-trick/
* https://stackoverflow.com/questions/356950/what-are-c-functors-and-their-uses


#### C++: Lambda Expressions

Lambda expressions are shorthands (syntactic sugar) for closures. A closure is an unnamed functor capable of capturing variables in scope. [cpp:lambda-expressions](https://en.cppreference.com/w/cpp/language/lambda).
```cpp
auto f = [captures](params) -> ret {body} // normal lambda declaration
auto f = [captures](params){body}         // deduced return type
auto f = [captures]{body}                 // no params, deduced return
```

Lambda Captures [cpp:lambda-captures](https://en.cppreference.com/w/cpp/language/lambda#Lambda_capture):
* Only objects of automatic storage duration can be captured (local variables which are not static).
* Static storage duration objects cannot be captured, but they can still be accessed.
* Data members can be captured through `this`, which (as a pointer) is captured by value.
* Variables are captured by value, unless a reference is specified.
* The capture by value is `const` by default, unless the lambda is specified as `mutable`. However, the external value wont be changed.
* Pack expansions can be captured.
* Initializers can also be captured. (C++14)
* By-copy capture: `*this`. (C++17).
* Default capture modes can be used: `=` (by-value) and `&` (by-ref).

```bash
struct Sample {
	void func() {
		int data = 0;
		auto f = [ data] () {};          // capture by: const int
		auto f = [&data] () {};          // capture by: int&
		auto f = [ data] () mutable {};  // capture by: int

		auto f = [ this]() {};           // capture this (pointer)
		auto f = [*this]() {};           // capture this by const value
		auto f = [*this]() mutable {};   // capture this by value

		// This can lead to unwanted capturing!.
		auto f  [=](){};                 // equivalent: [ a, this] (and other by-value!)
		auto f  [=,&a](){};              // equivalent: [&a, this] (and other by-value!)
		auto f  [&](){};                 // equivalent: [&a, this] (and other by-reference!)
		auto f  [&,a](){};               // equivalent: [ a, this] (and other by-reference!)
	}
};
```

Compiler Point of View:
* For each lambda declaration, the compiler declares a functor and instanciates it.
* In the case of *state-less* or *capture-less* lambdas, the functor is not created by the compiler, just the function call (dont take resources!).
* As the closure is defined by an unnamed type (not exposed), `auto` must be used as the lambda type.
* Only capture-less allow being set to variables of function pointer type.
* Lambdas typically generate better code. And calls through closures allow full inlining.
```cpp
typedef int (*Fp)(int);

Fp f = [    ](int d) {} // OK
Fp f = [data](int d) {} // NOK!! error
```

Generic Lambdas:
* Allow type deduction for their arguments: `auto fn = [](auto x, auto y) { return x + y; }`.
* Creates just one functor which declares multiple overloads based on a template.
* Up to C++17 this is the only case where lambdas are defined without the `template` keyword.

The trailing-return-type and return-type-deduction works for regular functions too!. This is specially useful for function templates.
```cpp
int  foo(int a, int b) { return a + b; }            //
auto foo(int a, int b) { return a + b; }            // return-type-deduction
auto foo(int a, int b) -> int { return a + b; }     // trailing-return-type

// ERROR: compiler does not know a,b when parsing decltype.
template<typename T>
decltype(a+b) foo (T a, T b) { return a + b; }

// GOOD:  compiler knows a,b when parsing decltype.
template<typename T>
auto foo (T a, T b) -> decltype(a+b) { return a + b; }
```


### C++: Statements

* [range based for loops](#c-range-based-for-loops).

#### C++: Range-Based FOR loops
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

### C++: Classes

* [object slicing](#c-object-slicing)

#### C++: Struct and Class

They are the exactly the same, but `struct` has default `public` members and bases, while `class` has default `private` members and bases. Both `class` and `struct` can have a mixture of `public`, `protected` and `private` members, can use inheritance and can have member functions.

The recommendation is to use `struct` for plain-old-data (POD) structures, and `class` for aggregate data structures with `private` data and member functions.

#### C++: POD Type

A Plain Old Data Structure in C++ is either a scalar type, or an aggregate class type that.

* contains only PODS as members
* has no user-defined destructor
* has no user-defined copy assignment operator
* has no nonstatic members of pointer-to-member type.

See:
* [cpp:PODType](https://en.cppreference.com/w/cpp/named_req/PODType)
* [cpp:is_pod](https://en.cppreference.com/w/cpp/types/is_pod)


#### C++: Class Size

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

#### C++: Empty Base Optimization

EBO allows the size of an empty base (no non-static data members) subobject to be zero. [cpp:empty-base-optimization](https://en.cppreference.com/w/cpp/language/ebo).

The size of any object is required to be at least 1 byte, even if the type is an empty class, in order to guarantee that the addresses of objects are always distinct. However, empty base classes can be completely optimized out from the object layout.

This optimization is forbidden when the type of the first non-static data member (of the derived class) is the same type of one of the empty classes or derived from it, since the two subobjects (base class and member) are required to have different addresses.

This optimization relevant in policy based design, where classes can inherit privately from multiple policies, some of which can be optimized.


#### C++: Class Initialization Order

Initialization order depends on base classes and order of declarations. [cpp:initialization_order](https://en.cppreference.com/w/cpp/language/constructor#Initialization_order).

In short, the order is as follows:
0. Object memory is allocated.
1. Virtual bases: depth-first left-to-right order.
2. Direct bases: left-to-right order.
3. Non-static data members: order of declaration. (does not depend on the initializer list!)
4. The object becomes a true instance of the class.
5. Body of the constructor is executed.

Destruction happends in reverse order.

See also: https://stackoverflow.com/questions/7539282/order-of-calling-constructors-destructors-in-inheritance

#### C++: Constructor Delegation

Constructors can now be defined based on other constructors: [cpp:delegating-constructor](https://en.cppreference.com/w/cpp/language/constructor#Delegating_constructor).

This must be done in the initialization list, otherwise a temporary object will be created. We can even make the constructor private!.

```cpp
struct Rectangle {
	Rectangle(Point xy, int ww, int hh) : x(xy), w(ww), h(hh) {
		if (h <= 0 || w <= 0) error("Bad arguments");
	}

	// delegates hard work to other constructor
	Rectangle(Point a, Point b) : Rectangle(a, b.x-a.x, b.y-a.y) {}

	point x;
	int w;
	int h;
};
```

#### C++: Explicit

The `explicit` specifier forces a function to be called explicitly, without implicit conversions: [cpp:explicit](https://en.cppreference.com/w/cpp/language/explicit).

It can be used to avoid unintended implicit conversions. But conversion to `bool` is considered explicit when used in a condition-like context (see [discussion here](https://stackoverflow.com/questions/39995573/when-can-i-use-explicit-operator-bool-without-a-cast)):
```cpp
struct MyClass {
	explicit MyClass(int d) {};
	explicit operator int() const;
	friend MyClass operator+(MyClass a, MyClass b);

	explicit operator bool() const { return true; }
};

void foo(MyClass c);
void bar(int d);

MyClass c{0};  // OK
MyClass c = 0; // Does not compile

foo(0);                       // Does not compile
foo(static_cast<MyClass>(0)); // OK

bar(c);        // Does not compile
bar(int(c));   // OK!

c = c + 0;     // Does not compile
c = c + c;     // OK!

if (c) ;          // OK!
static_assert(c); // OK!
c || c ;          // OK!.
```

#### C++: Copy Constructor
https://en.cppreference.com/w/cpp/language/copy_constructor

`class_name ( const class_name & );`:
* Constructs an object based on the state of an existing object.
* If not provided, the compiler declares it as non-explicit, inline, and public.
* Can be deleted or defaulted.

```cpp
struct Foo
{
	int n;
	Foo(int n = 1): n(n) { }

	// user-defined copy ctor
	Foo(const Foo& o): n(o.n) { }
};

Foo o1(0);
Foo o2(o1); // copy!
```

#### C++: Copy Assignment Operator
https://en.cppreference.com/w/cpp/language/copy_assignment

`T& operator=(T )` or `T& operator=(const T&)`:
* Copies the state of an object into the other.
* More complex, because the target object is already in some valid state.
* If not provided, the compiler declares it as inline and public.
* Can be deleted or defaulted.
* The `const` version cannot use the *copy-and-swap* idiom.

This should be implemented using the [copy and swap idiom](#i-copy-and-swap-idiom).

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

A a1, a2;
a1 = a2;  // copy!
```

#### C++: Move Semantics

The final goal from move semantics is to avoid copy operations [cpp:move-ctor](https://en.cppreference.com/w/cpp/language/move_constructor). Copies happen through arguments to functions (can use `const T&` instead), returns, and assignment operations. The move operations allow taking ownership of a piece of memory or a dying object (destructor is not called).

```cpp
struct Matrix {
	Matrix() {};
	~Matrix() { delete[] data; }

	Matrix(const Matrix& x);
	Matrix(Matrix&& x);

	Matrix& operator=(const Matrix& x);
	Matrix& operator=(Matrix&& x);
private:
	double* data = nullptr;
	int size = 0;
};
```

The move ctor/operator will be called implicitely on cases where the compiler knows the object is dying, e.g, returns and temporary objects in expressions.

```cpp
Matrix foo() {
	Matrix m;
	...
	return m; // move ctor is called instead of copy.
}

Matrix a, b, c;
c = a + b;        // move assignment is called
Matrix d = a + b; // move constructor is called
```

The rule of five might enter into the standard to be enforced. Most often you will custom define all 5 special member functions or none (copy ctor, copy assignment, move ctor, move assignment, dtor).

For *strong exception guarantee*, user-defined move constructors should not throw exceptions.

See also:
* https://stackoverflow.com/questions/3413470/what-is-stdmove-and-when-should-it-be-used
* https://stackoverflow.com/questions/3106110/what-is-move-semantics

#### C++: Derived Classes

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

#### C++: Public Inheritance

Implements subtyping relationship in OOP. The *derived* object IS-A *base* class object. References and pointers to the derived objects are expected to be usable by any code expecting any of its public bases (see Liskov-Substitution-Principle) [cpp:public-inheritance](https://en.cppreference.com/w/cpp/language/derived_class#Public_inheritance).

When a class is derived using the `public` specifier:
* All `public` members of the base class are accessible as `public` members of the derived class.
* All `protected` members of the base class are accessible as `protected` members of the derived class.
* Private members are never accessible unless friended.

#### C++: Protected Inheritance

Protected Inheritance can be used for *controlled polymorphism*, where the IS-A relationship is only kept within the members of the derived class, as well as within the members of all further-derived classes. [cpp:protected-inheritance](https://en.cppreference.com/w/cpp/language/derived_class#Protected_inheritance).

When a class is derived using the `protected` specifier:
* All `public` and `protected` members of the base class are accessible as `protected` members of the derived class.
* Private members are never accessible unless friended.

To make a `public` member of the base class `public` in the derived class, `using B::foo;` can be used.

#### C++: Private Inheritance

Private Inheritance can be used for *controlled polymorphism*, where the IS-A relationship is only kept within the members of the derived class, but not within further-derived classes. [cpp:private-inheritance](https://en.cppreference.com/w/cpp/language/derived_class#Private_inheritance).

When a class is derived using the `private` specifier:
* All `public` and `protected` members of the base class are accessible as `private` members of the derived class.
* Private members are never accessible unless friended.

To make a `public` member of the base class `public` in the derived class, `using B::foo;` can be used.

Private inheritance is commonly used in policy-based design, leveraging empty-base-optimization.

See also [faq:private-inheritance](https://isocpp.org/wiki/faq/private-inheritance).

#### C++: Multiple Inheritance

Any class may derive from multiple classes [cpp:derived_class](https://en.cppreference.com/w/cpp/language/derived_class), but be cautious about this [faq:multiple-inheritance](https://isocpp.org/wiki/faq/multiple-inheritance).

Rules of thumb for (multiple) inheritance: [faq:multiple-inheritance-disciplines](https://isocpp.org/wiki/faq/multiple-inheritance#mi-disciplines).
1. Use inheritance only if doing so will remove `if`/`switch` statements from the caller code.
2. Try hard to use pure ABCs (abstract base classes) when using multiple-inheritance.
3. Consider the bridge pattern or nested generalization as possible alternatives.

#### C++: Virtual Inheritance

For each `virtual` base class, the derived object contains only one base class subobject of that type. [cpp:virtual-inheritance](https://en.cppreference.com/w/cpp/language/derived_class#Virtual_base_classes).

In this example, every object of type `D` has one `X`, one `Y`, one `Z`, and two `B`'s: one that is the base of `Z` and one that is **shared by X and Y**.
```cpp
struct B { int n; };
struct X : virtual B {};
struct Y : virtual B {};
struct Z : B {};
struct D : X, Y, Z {};
```

All virtual base subobjects are initialized before any non-virtual base subobject, so only the most derived class calls the constructors of the virtual bases in its member initializer list.

Considerations:
* Derived classes classes must initialize all the virtual bases in the hierarchy. This can be a problem, as the derived contructor might need to provide arguments to the virtual base constructors.
* `dynamic_cast` must be used instead of `static_cast`.
* Virtual base classes are most suitable when the classes that derive from the virtual base, and especially the virtual base itself, are pure abstract classes.

It is commonly used to solve the diamond problem in multiple inheritance. See [faq:virtual-inheritance-where](https://isocpp.org/wiki/faq/multiple-inheritance#virtual-inheritance-where).

#### C++: Diamond Problem

The diamond problem is an issue with multiple inheritance, when a class derives from two classes, both deriving from a same base class. Class `D` would inherit 1 subobject for `B`, 1 for `C`, and 2 from `A`. Then the compiler cannot decide which one to use!.
```cpp
struct A {};
struct B : A {};
struct C : A {};
struct D : B, C {}; // not possible!, D contains: A, B, A, C subobjects.
```

The problem can be solved through virtual inheritance, so that class `D` only gets one shared subobject for class `A`, instead of 2:
```cpp
struct A {};
struct B : virtual A {};
struct C : virtual A {};
struct D : B, C {}; // OK!. D contains: B, C, A (shared) subobjects.
```

#### C++: Object Slicing
- https://stackoverflow.com/questions/274626/what-is-object-slicing
- https://www.geeksforgeeks.org/object-slicing-in-c/

- Happens when a derived class object is assigned to a base class object, additional attributes of a derived class object are sliced off to form the base class object. If a function gets the object by value, then only Base class methods will be called.
- This can be avoided when pointers/references to objects are passed as function arguments. This way, the binding is delayed to runtime, and the proper methods will be called.
- It can also be avoided by making the Base pure virtual.


#### C++: Abstract Class

Defines an abstract type which cannot be instantiated, but can be used as a base class. [cpp:abstract-class](https://en.cppreference.com/w/cpp/language/abstract_class).
* Abstract class: Defines or inherits at least one pure virtual function.
* Pure abstract class: Only pure virtual functions.

#### C++: Dynamic Polymorphism

Runtime polymorphism is best suited to manipulate an open set of related types with different representations. This is implemented through inheritance, where derived classes implement a common interface.

```cpp
struct Vehicle {
	virtual void accelerate() = 0;
	virtual ~Vehicle() { }
};
struct Car   : Vehicle { void accelerate() override; };
struct Truck : Vehicle { void accelerate() override; };
```

Compilers usually implement dynamic polymorphism through a *virtual table* `vtable` (not in the standard!). The derived class holds a pointer to a table containing function pointers to the most derived implementations for the base class interface [see also](https://stackoverflow.com/questions/99297/how-are-virtual-functions-and-vtable-implemented). Using the example above:
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

#### C++: Dynamic Polymorphism Drawbacks

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

#### C++: Static Polymorphism

#### C++: Overriding Non-Virtual Functions

Overriding non-virtual functions is possible (not an error), but dynamic dispatch won't be used.

```cpp
struct Base {
	void foo() {};
	virtual void vFoo() {};
};

struct Derived : Base {
	void foo() {};           // hides Base::foo()
	void vFoo() override {}; // dynamic dispatch
};

Base *b;
Derived d;

b = new Base();
b->foo();  // calls Base::foo()      // ok
b->vfoo(); // calls Base::vfoo()     // ok

d = new Derived();
d->foo();  // calls Derived::foo()   // hides
d->vfoo(); // calls Derived::vfoo()  // overrides

b = new Derived();
b->foo();  // calls Base::foo()      // Not Dynamic Dispatch!
b->vfoo(); // calls Derived::vfoo()  // Dynamic Dispatch
```

References:
* https://stackoverflow.com/questions/11067975/overriding-non-virtual-methods

### C++: Templates
### C++: Exceptions

#### C++: Exception Safety Guarantees

Provide information with regards to the state of the program after an error condition is thrown [cpp:exception-safety](https://en.cppreference.com/w/cpp/language/exceptions#Exception_safety). The standard does not recognize the exception safety guarantees, but they are used in STL.

The exception safety levels are:
1. *Nothrow/Nofail exception guarantee*:
   * Nothrow: The function never throws exceptions.
	 - Errors are reported by other means or concealed.
	 - It is expected for destructors and other functions that may be called during stack unwinding.
	 - Destructors are declared `noexcept` by default.
   * Nofail: The function always succeeds.
	 - It is expected of swaps, move constructors, and other functions used by lower safety levels.
2. *Strong exception guarantee*: If the function throws an exception, the state of the program is rolled back to the state just before the function call.
3. *Basic exception guarantee*: If the function throws an exception, the program is in a valid state. No resources are leaked, and all objects' invariants are intact.
4. *No exception guarantee*: If the function throws an exception, the program may not be in a valid state: resource leaks, memory corruption, or other invariant-destroying errors may have occurred.

In short:
1. *Nothrow*: Don't throw even on failures.
2. *Strong*: Commit/Rollback semantics. Objects are repared before throw.
3. *Basic*: No leak. Objects in usable state.
4. *No guarantee*: Objects should not be used.

Exception safety for move enabled types may be difficult, as there is no way to rollback. Try making the move constructor nothrow in order to provide fast and strong guarantees.

There is a special *exception-neutral guarantee* for templates: If an exception is thrown from a template parameter, it is propagated, unchanged, to the caller.

#### C++: noexcept

The `noexcept` keyword has two uses: marking functions as nothrow, and checking whether a function is marked [cpp:noexcept-operator](https://en.cppreference.com/w/cpp/language/noexcept), [cpp:noexcept-specifier](https://en.cppreference.com/w/cpp/language/noexcept_spec).

The compiler does not check compliance with the specifier, but the execution will fail at runtime with std::terminate.

```cpp
void may_throw();
void no_throw() noexcept;
auto lmay_throw = []{};
auto lno_throw = []() noexcept {};

noexcept(may_throw())  // true
noexcept(no_throw())   // true
noexcept(lmay_throw()) // true
noexcept(lno_throw())  // true
```

This operator is best suited when used in templates:
```cpp
// noexcept declaration depends on if the expression T() will throw
template <class T>
void foo() noexcept(noexcept(T())) {}

foo<int>();  // noexcept(noexcept(int())) => noexcept(true), so this is fine
```

TODO: https://www.youtube.com/watch?v=ARYP83yNAWk, CppCon 2019: Herb Sutter "De-fragmenting C++: Making Exceptions and RTTI More Affordable and Usable"
TODO: C++Now 2019: Andreas Weis Exceptions Demystified https://www.youtube.com/watch?v=kO0KVB-XIeE
TODO: std::move_if_noexcept

## STL

Depend on STL libraries. They are usually faster, tested, and well documented. Also, this removes loops and improves readability.

* [General Utilities](#stl-general-utilities)
* [Concepts](#stl-concepts)
* [Diagnostics](#stl-diagnostics)
* [Strings](#stl-strings)
* [Containers](#stl-containers)
* [Iterators](#stl-iterators)
* [Ranges](#stl-ranges)
* [Algorithms](#stl-algorithms)
* [Numerics](#stl-numerics)
* [Localization](#stl-localization)
* [Input/Output](#stl-input-output)
* [Filesystem](#stl-filesystem)
* [Regular Expressions](#stl-regular-expressions)
* [Atomic Operations](#stl-atomic-operations)
* [Threading](#stl-threading)

### STL: General Utilities

#### STL: Smart Pointers

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


#### STL: std::move

Indicates that an object **may be moved from**, allowing the efficient transfer of resources (move ctor) [cpp:move](https://en.cppreference.com/w/cpp/utility/move).

The `std::move()` function is a cast that produces an *rvalue* reference to an object, so it can be moved.

After an object marked with `std::move`:
* it is considered to be in an indeterminate, but valid state.
* only two operations are safe: destruction or reassignement.

It can be used to avoid copies from lvalues. For example, a std::vector could just copy its internal pointer to data to the new object:
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

#### STL: std::forward

Allows implementing perfect forwarding of lvalue and rvalue references in function templates [cpp:forwarding-reference](https://en.cppreference.com/w/cpp/language/reference#Forwarding_references), [cpp:forward](https://en.cppreference.com/w/cpp/utility/forward).

A *forwarding reference* is a special kind of reference, which preserves the value category of a function argument (lvalue, rvalue, and cv-qualifiers). They can be forwarded through the `std::forward` function.

Forwarding reference as a function template parameter:
* Function parameter is declared as a forwarding reference (rvalue reference to cv-unqualified type template parameter).
* Accepts both: lvalues and rvalues.
* Even if the value was originally an rvalue, a function argument is always considered lvalue in the function body.
* `std::forward` is used to preserve the original reference category.
```cpp
template<class T>
int f(T&& x) {                    // x is a forwarding reference.
								  // x is considered lvalue if std::forward is not used.
	return g(std::forward<T>(x)); // and so can be forwarded as lvalue or rvalue
}
```

Forwarding reference when deduced by `auto`:
* Works in a similar way.
* Only when not deduced from a brace-enclosed initializer list.
```cpp
// forwarding reference for temporary
auto&& vec = foo();                  // foo() may be lvalue or rvalue
g(std::forward<decltype(vec)>(vec)); // forwards, preserving value category

// forwarding reference in for loop
// this is the safest way to use range for loops
for (auto&& x: f()) {
}

// Not a forwarding reference
auto&& z = {1, 2, 3};
```

The compiler will generate all possible overloads for the function template. This is even more useful when multiple arguments are used.

It is often used with variadic templates to wrap calls to functions with an arbitrary number of arguments. For example, `std::make_unique` and `std::make_shared` both use perfect forwarding to forward their arguments to the constructor of the wrapped type.

See also:
* https://stackoverflow.com/questions/6829241/perfect-forwarding-whats-it-all-about
* https://cpppatterns.com/patterns/perfect-forwarding.html
* https://www.modernescpp.com/index.php/perfect-forwarding


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


### STL: Concepts
### STL: Diagnostics
### STL: Strings

#### STL: String View

Provides a cheap read-only accessor to a `std::string`, which avoids unwanted memory allocations [cpp:string-view](https://en.cppreference.com/w/cpp/header/string_view).

Motivation: Many uses of `std::string` don't really require owning the string, but the old C string require the null terminator to be part of the string, forcing a mutation whenever a substring is needed.

Implementation: Wrapper over a pointer to he first character and a size.

Benefits:
* The `std::string_view` is cheap and can be passed by value.
* Substring operations are cheap and dont require mutation (just adjust pointer an size).

```cpp
std::string str = "...";                  // A really long and expensive to copy string
std::cout << str.substr(15, 10) << '\n';  // BAD!
std::string_view view = str;              // BETTER: no copies.
std::cout << view.substr(15, 10) << '\n'; // returns new string_view

// These are old ways to "try" avoiding copies
void foo(std::string const& s);                      // This can result in allocation
void foo(const char* s, size_t len);                 // Mess
void foo(const char* s);                             // Must call strlen()
template <class StringT> void foo(StringT const& s); // forces header and template

// GOOD
void foo(std::string_view s);                        // Zero copies!
```

TODO: C++20 adds the `std::span` abstraction, which works similar, but for lists of any type. https://en.cppreference.com/w/cpp/container/span, https://stackoverflow.com/questions/45723819/what-is-a-span-and-when-should-i-use-one

### STL: Containers
### STL: Iterators
### STL: Ranges
### STL: Algorithms
### STL: Numerics
### STL: Localization
### STL: Input/Output
### STL: Filesystem
### STL: Regular Expressions
### STL: Atomic Operations
### STL: Threading

## General

### G: The Structure of a Program

### G: Application Binary Interface

The ABI (Application Binary Interface) is equivalent to an API but at the machine language level. 
- It defines structs and methods at a lower level.
- It defines how data/args are stored and passed around (registers, stack, heap).
- It defines how the code is stored in the library file, so that other binaries can locate specific components.

ABIs are important when using external libraries. Programs use the ABI too look for library elements.
- **If the ABI changes, then any program using it must be recompiled**.
- If the ABI changes but the API does not, the old and new library are called "source compatible".

Keeping an **stable ABI** means:
- Not changing function interfaces (return type and number, types, order of arguments).
- Not changing data type definitions or constants.
- New funcitons and data types can be added.

See also: https://stackoverflow.com/questions/2171177/what-is-an-application-binary-interface-abi

### G: Compilers TODO
### G: Linkers TODO
### G: Debuggers TODO
### G: Sanitizers TODO

## Idioms and Best Practices

* [composition versus inheritance](#i-composition-vs-inheritance)
* [const correctness](#i-const-correctness)
* [copy and swap idiom](#i-copy-and-swap-idiom)
* [pimpl](#i-pimpl)
* [raii](#i-raii)
* [runtime concept idiom](#i-runtime-concept-idiom)

#### I: Composition vs Inheritance

Composition:
* Represents a **has-a** relationship.
* Class contains other classes as members.

Inheritance:
* Represents a **is-a** relationship.
* Class derives from other classes as bases.

Inheritance is not for code reuse, but for subtyping and flexibility. Composition is best suited for code reuse. [faq:composition-and-inheritance](https://isocpp.org/wiki/faq/objective-c#objective-c-and-inherit).

#### I: Const Correctness

It is a good practice. It means using the keyword `const` to prevent objects from being modified. Const-Correctness can also be enforced through member functions using the `const` qualifier. [faq:const-correctness](https://isocpp.org/wiki/faq/const-correctness).

In short, const-correctness:
1. Protects from accidentally changing variables that aren't intended to be changed.
2. Protects from accidental variable assignments.
3. Allows compiler optimizations.

#### I: Copy-and-Swap Idiom

The copy assignment operator is difficult to implement!. If an exception is thrown, the object MUST keep its invariant and remain in a valid state.
This idiom helps avoiding code duplication and provides a strong exception guarantee.

Requisites:
* Working copy-constructor.
* Working destructor.
* Non-throwing swap function!!!.

We cannot use std::swap, as it is based on the copy ctor and copy assignment operator.

Generally, the implementation IS NOT SIMPLE!. In C++11, there is a simpler solution!. Better check: https://stackoverflow.com/questions/3279543/what-is-the-copy-and-swap-idiom

#### I: PIMPL

The Pointer to Implementation [cpp:pimpl](https://en.cppreference.com/w/cpp/language/pimpl) idiom helps us hidding implementation details we do not want to expose. The details are put in a separate class, accessed through an opaque pointer. As a side feature, it introduces a compilation firewall and ABU stability.

Pros:
* Compilation Firewall: Pimpl allows us to change the internal implementation without touching the consumer headers. This way, we do not introduce binary incompatibility and compilation times are faster.
* ABI (Application Binary Interface) stability: Newer versions of the library may change the implementation details while remaining ABI compatible with older versions.

Cons:
* Maintenance overhead: Dedicated translation unit (.cpp file), additional class, forwarding functions, allocators are exposed.
* Runtime overhead:
  - Access overhead: Double indirection on calls (from interface to impl, and vice versa), each crossing translation unit boundaries. This can only be optimized out link-time opimization.
  - Space overhead: A pointer is required for pimpl, and another may be required for the implementation to access the interface members.
  - Lifetime Management overhead: The implementation lives in the heap, causing overhead on construction and destruction.

Example implementation in [sample:pimpl.h](src/idioms/pimpl.h) and [sample:pimpl.cpp](src/idioms/pimpl.cpp).

Resources:
* https://arne-mertz.de/2019/01/the-pimpl-idiom/
* https://stackoverflow.com/questions/60570/why-should-the-pimpl-idiom-be-used

#### I: RAII

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


#### I: Runtime Concept Idiom

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



## SCRATCH


### PARAMETER PACK - FUNCTIONS AND TEMPLATES  (C++11)
https://en.cppreference.com/w/cpp/language/parameter_pack

```cpp
// Variadic class template
template<class ... Types> struct Tuple {};
Tuple<> t0;			// Types contains no arguments
Tuple<int> t1;		// Types contains one argument: int
Tuple<int, float> t2; // Types contains two arguments: int and float
Tuple<0> error;		// error: 0 is not a type

// Variadic function template
template<class ... Types> void f(Types ... args);
f();       // OK: args contains no arguments
f(1);      // OK: args contains one argument: int
f(2, 1.0); // OK: args contains two arguments: int and double
```


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

### STD FUNCTION (C++11)
https://en.cppreference.com/w/cpp/utility/functional/function
https://stackoverflow.com/questions/20353210/usage-and-syntax-of-stdfunction

	• std::function is a type erasure object. That means it erases the details of how some operations happen, and provides a uniform run time interface to them. For std::function, the operations are copy/move and 'invocation' with operator() -- the 'function like call operator'.
	• In less abstruse English, it means that std::function can contain almost any object that acts like a function pointer in how you call it.
	• The signature it supports goes inside the angle brackets: std::function<void()> takes zero arguments and returns nothing. std::function< double( int, int ) > takes two int arguments and returns double. In general, std::function supports storing any function-like object whose arguments can be converted-from its argument list, and whose return value can be converted-to its return value.


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


# General

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
