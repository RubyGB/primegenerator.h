# primegenerator.h
A templated class that generates prime numbers by sieving on-demand (i.e., one at a time as needed).

## Usage
See the provided cpp file for an example. Include the header and declare a `PrimeGenerator<T>` instance with your favourite integral type `T` (e.g., `int` or `long long`) then start generating primes with `PrimeGenerator<T>::nextPrime()`.

## Why
I found myself reinventing this wheel time and time again while working on Project Euler problems. I wrote up this code which made my life a lot easier, and uploaded it here for easier access on multiple computers.
