# Notes on Containers

## About Iterators

### What are Iterators?
An iterator is an object that points to an element inside a container. Like a pointer, an iterator can be used to access the element it points to and can be moved through the content of the container. Each container in the C++ Standard Library provides its own iterator, as well as some methods to retrieve it. Using iterators is quite easy: obtain an instance from a container, move it around where needed and then get the pointed element.

Concretely, an iterator is a simple class that provides a bunch of operators: increment ++, dereference * and few others which make it very similar to a pointer and the arithmetic operations you can perform on it. In fact, iterators are a generalization of pointers, which are often used as a foundation when writing the iterator itself.

Iterators are one of the building blocks of the Standard Library containers, but they are also useful when you want to provide the ability to iterate over elements of a custom container that you wrote yourself: this is what I want to investigate in the present article. Adding iterators to your containers will make them compatible with the range-based for loops and the C++ Algorithms library: a collection of functions for searching, sorting, counting and manipulating containers, based on iterators. [source](https://internalpointers.com/post/writing-custom-iterators-modern-cpp)

### Types of Iterators
| Name of Iterator      | Description of iterator	|
| ----------- 			| ----------- 				|
| Input Iterator      | Can scan the container forward only once, can't change the value it points to (read-only);       |
| Output Iterator   | Can scan the container forward only once, can't read the value it points to (write-only);        |
| Forward Iterator	|	Can scan the container forward multiple times, can read and write the value it points to; |
| Bidirectional Iterator | Same as previous one but can scan the container back and forth; |
| Random Access Iterator | Same as previous one but can access the container also non-sequentially (i.e. by jumping around); |
| Contiguous Iterator | Same as previous one, with the addition that logically adjacent elements are also physically adjacent in memory. |

### Practical information about iterators
Every container has its own iterators as every iterator has different functions depending on the functions of the container. Therefore, for every container you write, you must also write their subsequent iterators.
[how to write your own iterator](https://internalpointers.com/post/writing-custom-iterators-modern-cpp)
