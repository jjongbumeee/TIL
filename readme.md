# Today I Learned (TIL)
## Since 2020.06.01 by DanielJung
### 원칙 1 : 주 2회 이상은 알고리즘 관련된 학습을 진행 후 작성  
### 2020.06.01
- 컴파일러  
LR 구문 분석  
LL 구문 분석은 left-recursion 문제와 backtracking으로 인한 속도 문제로 인해 실제 컴파일러 사용하기엔 부적절
따라서 위 2문제가 없는 LR 파싱을 주로 사용
LR의 L은 Left-to-Right를 의미하며 R은 Rightmost derivation을 이용한다는 것을 의미한다.
LR 구문분석방법으로는 SLR, CLR, LALR방법이 있다.

SLR 구문분석
SLR 구문분석은 LR(0) 항목과 FOLLOW를 이용하여 파싱표 작성 [파싱표 작성법 동영상](https://www.youtube.com/watch?v=ig-R03WwgLs)
1. Augmented grammar 생성(S' -> S)
2. LR(0) 항목 나열
GOTO(I~0~, symbol)의 경우 I~0~집합에서 symbol을 처리한 경우의 나오는 집합으로 I~0~에서 E 이후에 dot symbol을 위치한 후 CLOSURE를 계산한다.
새로 나오는 집합에 대해서는 I~n~으로 이름을 붙여주고, 새로운 집합이 나오지 않을 때까지 반복한다.
3. 모든 non-Terminal symbol에 대해 FOLLOW를 계산하여 나열한다.
4. SLR 파싱표의 GOTO표 부분은 symbol이 V~N~인 경우 