static int seed; //.c 파일 안에 있는 함수만 접근 가능함

int my_srand(int s) //함수정의(function definition)
{
        seed = s;
}

int my_rand(void)
{
        seed = seed * 1103515245 + 12345;
        return ((unsigned)(seed/65536) % 32768);
}

