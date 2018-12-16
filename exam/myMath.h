//#pragma once //it's called a header gaurd and is equivalent to defining __MyMath macro ...

#ifndef __mymath
#define __mymath

namespace mymath
{
/*
	we can define function-like macros to be replaced in
	first C++ compile level (preproccesor) instead of being compiled!
	but it can produce logical errors
	so make program more buggy like below!
	#define myMin(a,b) a<b?a:b
	^^^ instead of vvv
	#define myMin(a,b) ((a)<(b))?((a):(b))
	to have the performance without make code more buggy, we can inline them instead
*/
	inline static int myMin(int a,int b){ return a<b?a:b;}
}

#endif //__mymath
