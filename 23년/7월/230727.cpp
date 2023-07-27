#include<iostream>
#include <typeinfo>
using namespace std;


int main()
{/*
	int iA(10), iB(20);
	cout << iA << iB << endl;
	
	int iC(20);

	cout << iC;*/


	/*F5: 디버그 시작 / 정지
	Shift + F5 : 디버그 종료
	Ctrl + F5 : 시작(디버그 실행 x)
	F9 : breakpoint on / off
	F10 : 디버그 현재 라인 실행(한줄씩 실행), 함수를 만나면 함수 안으로 들어가지 않음
	F11 : 디버그 함수의 경우 함수 내부로 들어가서 실행
	Shift + F11 : 디버그 하고 있는 현재 함수 빠져나오기*/

	//int		iA(0);
	//iA = 10;
	//cout << iA << endl;


#pragma region 포인터 각종 문법

	// const 와 포인터의 관계

	// 포인터가 변수로써 동작하는 예
	//int		iA(10);

	//int*	p = &iA;
	//
	//*p = 20;

	////cout << iA << endl;
	////cout << *(&iA) << endl;
	//cout << (*p) << endl;
	//
	//int	iB(300);

	//p = &iB;

	//cout << (*p) << endl;

	//int		iA(0);
	//int		iTemp(100);

	//const int iB = 10;
	//int iC = 20;
	//iB = iC;

	//const int*	p = &iA;		// 읽기 전용 포인터 : 소유한 주소값 변경은 가능하지만 주소값이 가리키는 공간의 값을 쓰지는 못한다.

	//cout << (*p) << endl;	// 읽기만 수행 중

	//p = &iTemp;
	//cout << (*p) << endl;	// 읽기만 수행 중

	//*p = 20;			// 쓰기 코드이기 때문에 컴파일 에러 발생


	//int		iDst(50), iSrc(60);
	//int* const p = &iDst;		// 상수 포인터 : 오로지 하나의 주소만 참조가 가능한 포인터, 읽기, 쓰기 모두 가능 하지만 다른 변수의 주소를 참조 할 수 없다.

	//p = &iSrc;

	//*p = 100;

	//cout << iDst << endl;

	//int		iTest(100);
	//const int* const p = &iTest;	// 오로지 읽기만 가능한 포인터 : 주소값 변경 및 값 쓰기 불가능한 포인터
	//cout << *p << endl;


#pragma endregion

#pragma region 포인터 연산

	// 포인터 연산 : 주소값 이동을 통하여 빠르게 데이터에 접근하기 위한 주소이동 연산

	//short	iA(100);

	//short*	p = &iA;

	//cout << p << endl;
	//cout << (*p) << endl;
	//*p = 200;
	//cout << (*p) << endl;

	//++p;

	//cout << "=========after========" << endl;

	//cout << p << endl;
	//cout << (*p) << endl;
	//*p = 200;
	//cout << (*p) << endl;


	//int iA(0), iB(1), iC(2);
	//cout << &iA << "\t" << &iB << "\t" << &iC << endl;



#pragma endregion

#pragma region 이중 포인터

	// 이중 포인터 : 포인터의 주소를 저장하는 용도의 포인터, 
	// 마찬가지로 개발 환경에 따라 포인터의 크기가 확정되어 있다. 
	//대게 여러 개의 포인터를 하나로 관리하기 위한 용도로 사용

	int		iA(10);
	int*	p = &iA;
	int**	pp = &p;

	cout << p << endl;
	cout << (*pp) << endl;

	//cout << sizeof(p) << endl;
	//cout << sizeof(pp) << endl;




#pragma endregion

    return 0;
}

#pragma region 디버깅

//int main()
//{
//
//    //debuging 모드는 디버그코드가 실행되어 용량이 크고 느리다
//    //release 모드는 디버그코드가 포함되지 않아 용량이 적고 빠르다.
//    //디버그 단축키
//
//    //F10 디버그 현재 라인 실행(한줄씩 실행), 함수를 만나면 함수로
//
//    int iA(0); //F9 디버그포인트 (breakpoint)
//
//    iA = 10;
//
//    cout << iA << endl;
//
//
//
//    return 0;
//}

#pragma endregion

#pragma region 포인터 각종 문법

//
//int main()
//{
//    // const와 포인터의 관계
//    // 읽기 전용 포인터: 소유한 주소값 변경은 가능하나, 주소값이 가르키는 값을 바꿀 수 없다.
//    // 상수 포인터: 다른 변수의 주소를 참조할 수 없다. 읽고 쓰고 출력하는 것은 다 되나
//    int iA(0), iTemp(50);
//    //const int* p = &iA;// 읽기 전용 포인터(출력용): 포인터를 상수로 만드는 것이 아니고... 음원파일 경로 불러올때 등등
//    //cout << (*p) << endl;
//
//    //*p = 20;
//    //p = &iTemp;
//    //cout << (*p) << endl; //읽기만 하는 것이니까
//
//
//    //상수포인터
//    //int* const p = &iA; //나는 얘만 관리할 거야.
//    //cout << (*p) << endl;
//    
//    const int* const p = &iTemp; // 오로지 읽기 (주소값x, 쓰기x) = 함수에는 사용할 수 있음.
//    
//    
//
//
//    //
//    //int iA(0);
//    //int* p = &iA;
//    //*p = 20;
//    //int iB(200);
//    //p = &iB; //포인터가 변수인 이유
//    //cout << (*p) << endl;
//    //cout << iA << endl;
//
//
//    return 0;
//}


#pragma endregion

#pragma region 포인터 연산
//
//int main()
//{
//    // int자료형의 변수를 연속적으로 초기화(or 선언)해줄때 12바이트씩 차이나는 것을 알 수 있다. 
//    // 이는 서로를 구분해주기 위해 int가 4바이트임에도 불구하고 떨어트린 것이다.
//    // 그래서 이를 불러오는데에는 상대적으로 시간이 오래걸린다.
//    // 시간 걸리는 것을 줄이기 위해선 어떻게 해야할까? 바로 포인터를 이용한 접근이 되시겠다.
//    // 배열 부분을 배우면 알 수 있겠지만, 여러 자료형이 연속되어 메모리 주소공간에 붙어 나온다면 
//    // 포인터로 이를 처리해주어 각 공간에 빠르게 접근이 가능하다는 것이다.
//    // 원하는 값을 일일이 찾는 것보다 while을 돌려 pointer를 이용하는 것이 더 빠르다.
//    // 
//    // 
//    // 
//    // 
//    //포인터 연산: 주소값 이동을 통하여 빠르게 데이터에 접근하기 위한 주소 이동 연산
//
//    // 참조하는 자료형에 따라 int는 4바이트이 이동 char은 1바이트 이동 한다.
//    int iArr[] = { 1,2,3,4,5 };
//    int* pA = iArr;
//    cout << pA << endl;
//    cout << ++pA << endl;
//    cout << "==========================" << endl;
//    int iA(0);
//    int* p = &iA;
//    cout << p << endl;
//    // 주소만 있으면 다른 곳에도 침범할수 있다는 예시
//    ++p; // 포인터를 이용하여 주소 공간의 이동
//    cout << p << endl;
//    cout << (*p) << endl; //쓰레기 값 나옴
//
//
//}


#pragma endregion

#pragma region 이중 포인터

//int main()
//{
//    // 이중 포인터: 마찬가지로 환경에 따라 포인터의 크기 확 =====> 음 선생님 코드를 참조하도록하자.
//    // 용량이 있다는 것은 가르키는 주소가 있다는 것
//    // 
//    // 포인터는 무조건 운영체제의 비트에 따라 32bit = 4바이트, 64bit = 8바이트다.
//
//    int iA(10);
//    int* p = &iA;
//    int** pp = &p; //int형을 연속된 메모리에 넣고 다 접근하기 위해서
//    cout << p << endl;
//    cout << (*pp) << endl;
//
//
//    // 사용성은 떨어짐 = 더 좋은 문법이 있기 때문에
//

//}


#pragma endregion

#pragma region 상수 변수

//int main()
//{
//    // r-value:  l-value: 는 adress연산자를 붙여보면 안다.
//    const int iA = 10;
//    const int* p = &iA; //상수로 선언했으나 l-value이다.
//    int iB = iA;
//
//
//}


#pragma endregion

