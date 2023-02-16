#pragma once
#ifndef PRIMEGENERATOR_H
#define PRIMEGENERATOR_H

#include <vector>
#include <unordered_map>

// template class to generate primes of numeric type T
// T must support the operators T+T, T*T, ++T, T++
// It must be legal to assign 2 to T
template<typename T>
class PrimeGenerator {
public:
	T nextPrime() {
		if(D.count(q) == 0) {
			D[q*q] = {q};
			return q++;
		}
		// q is composite, D[q] is the list of primes that divide it
		for(T p : D[q]) {
			T ppq = p+q;
			if(D.count(ppq) == 0) D[ppq] = {};
			D[ppq].push_back(p);
		}
		D.erase(q);
		++q;
		return nextPrime();
	}
private:
	T q = 2;
	std::unordered_map<T, std::vector<T>> D;
};

#endif
