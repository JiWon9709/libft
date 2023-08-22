<42서울 본과정>
# libft
- 42SEOUL에서는 이미 정의되어 있는 표준 함수들을 사용해 프로젝트를 진행하는 것이 금지되어 있었기 때문에 C 라이브러리의 표준 함수들을 재구현하면서 함수의 작동 원리와 사용법, 그리고 C언어 프로그래밍을 하다 필요한 메모리를 어떻게 효율적으로 관리하고 다룰 수 있는지 배울 수 있었다.

- 프로그램 규칙:
  1. 프로젝트는 Norm 규칙에 맞춰 작성되어야 한다.
  2. 필요한 경우 heap에 할당된 모든 메모리 공간은 적절하게 해제되어야 한다. 메모리 누수는 용납되지 않는다.
  3. 전역 변수는 사용할 수 없다.

- Part 1. Libc functions
    : man에 정의되어 있는 대로 libc functions의 set을 재구현했다. 함수들은 원본과 같은 형식의 프로토타입을 선언한다. 함수의 이름 앞에는 ft_를 붙였다.
memset • bzero • memcpy • memccpy • memmove • memchr • memcmp • strlen • strlcpy • strlcat • strchr • strrchr • strnstr • strncmp • atoi • isalpha • isdigit • isalnum • isascii • isprint • toupper • tolower
calloc • strdup

- Part 2. Additional functions
    : libc에 포함되있지 않거나 다른 형식으로 포함된 functions의 set을 재구현
substr • strjoin • strtrim • split • itoa • strmapi • putchar_fd • putstr_fd • putendl_fd • putnbr_fd

- Part 3. List functions
    : 리스트를 다루는 유용한 함수 재구현
ft_lstnew • ft_lstadd_front • ft_lstsize • ft_lstlast • ft_lstadd_back • ft_lstdelone • ft_lstclear • ft_lstiter • ft_lstmap
