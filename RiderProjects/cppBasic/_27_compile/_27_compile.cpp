#include "struct.h"
// 헤더 파일을 여러 파일에 포함시킬 때에, 반드시 한 번만 포함시켜야 한다.
// ============ header file ======
/*
 * 1. 함수 원형
 * 2. #define, const
 * 3. 구조체 선언
 * 4. 클래스 선언
 * 5. 템플릿 선언
 * 6. 인라인 함수
 */
// ================================

int main(int argc, char* argv[])
{
    // 분할 컴파일 : c와 마찬가지로 C++은 프로그램을 구성하는 함수들을 별개의 파일에 넣는 것을 권장한다.
    // 파일을 분할하여 컴파일한 후에 그것들을 하나의 최종 실행 프로그램으로 연결할 수 있다.
    // 이러한 기능을 효율적으로 사용하기 위해서 전처리 지시자 include를 지원한다.
    my_struct alohyomora = {
        "alohyomora",
        25,
    };
    display(alohyomora);
    
    return 0;
}


