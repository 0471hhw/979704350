// ConsoleApplication4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

void PrinrN(int N){
	int i;
	for (i = 1; i <= N; i++){
	
		printf("%d\n", i);
	}

}

void PrintM(int M)
{
	if (M){
		PrintM(M - 1);
		printf("%d\n", M);
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	//PrinrN(100000);
	PrintM(1000);
	return 0;
}


