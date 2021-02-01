#include <iostream>
#include <chrono>

long solution(){
	int n = 1;
	long sum = 0;
	auto a = 1;
	auto b = 1;
	long c = 0;
	while(sum < 4000000){
		sum  = a + b;
		a = b;
		b = sum;
		if (sum%2 == 0){
			c += sum;
		}
		n++;
	}
	return c;
}
	if (n < 2){
		return 1;
	}
	// 1 2 3 4 5 6  7  8  9  10
	// 1 2 3 5 8 13 21 34 55 89
	auto sum = fibo_recurse(n-1) + fibo_recurse(n-2);
	return sum;
}

long fibo(long n){
	if(n <= 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	long sum = 0;
	long x = 1;//we want our sequence to start from 1
	long y = 1;
	// 1 2 3 4 5 6 7  8  9 10
	// 0 1 1 2 3 5 8 13 21 34	
	for (int i=1; i<n; i++){
		sum = y + x;
		x = y;
		y = sum;
	}
	return sum;
}
		
int main(){
	long a = 0;
	auto b = solution();
	std::cout << b << '\n';
//	while(1){
//		std::cout << "Enter a number:";
//		std::cin >> a;
//		if (std::cin.fail()){return 0;}
//		auto start = std::chrono::high_resolution_clock::now();
//		auto b = fibo(a);
//		auto b = fibo_recurse(a);
//		std::cout << b << '\n';
//		auto end  = std::chrono::high_resolution_clock::now();
//		auto diff = std::chrono::duration_cast<std::chrono::microseconds>(end-start);
//		std::cout << diff.count() << '\n';
//	}
}
