해당 프로그램에 대한 설명

DDRx
= 포트에서 데이터의 흐름을 결정하는 레지스터
  -> 포트가 가지고 있는 비트의 상태를 입력이나 출력으로 결정짓는 레지스터
  -> 0 : 해당 위치의 비트는 입력으로 설정
     1 : 해당 위치의 비트는 출력으로 설정
  -> 각 비트 하나가 해당 포트의 비트 하나를 의미함

PORTx
= 해당 포트의 출력을 설정할 수 있는 레지스터
  -> 0 : 해당 포트의 위치의 비트는 0v가 출력됨
     1 : 해당 포트의 위치의 비트는 5v가 출력됨

왜 레지스터나 포트의 값을 0xff 식으로 설정하나요?
= AVR은 8비트 마이크로컨트롤러임
  -> 값은 0아니면 1로 설정함
  -> 따라서 8개의 비트를 모두 표시하려면은 0이나 1의 조합으로 8개를 적어야함
     ex) 00110111, 11111111, 00000000 => 2진수로 표현
  -> 하지만 위에 있는 이진수로 표현하면 약간 번거롭기 때문에 조금 편하게 표시하기 위한 16진수로 표기하도록 함
     ex) 0x37, 0xff, 0x00 => 16진수로 표현

delay_ms
= 밀리초(ms)단위로 프로그램이 실행되는 동안 해당 시간 만큼 지연시켜주는 함수
  ex) delay_ms(1000) => 1000ms = 1s 만큼 지연됨
