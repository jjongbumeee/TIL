# Today I Learned (TIL)
## Since 2020.06.01 by DanielJung  
### 2020.06.01
- 컴파일러  
--  LR 구문 분석  
LL 구문 분석은 left-recursion 문제와 backtracking으로 인한 속도 문제로 인해 실제 컴파일러 사용하기엔 부적절
따라서 위 2문제가 없는 LR 파싱을 주로 사용
LR의 L은 Left-to-Right를 의미하며 R은 Rightmost derivation을 이용한다는 것을 의미한다.
