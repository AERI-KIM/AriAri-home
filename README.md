# DATA STRUCTURE__STACK   
1. STACK과 STACK_NODE  
	Stack은 head structure과 data node로 구성된다. 둘 다 struct이며, typedef을 사용해 각각 STACK과 STACK_NODE으로 재정의한다.   
  
2. create_stack  
	먼저, stack 구조를 만든다. create_stack 함수는 크게 2가지를 수행하는데, stack의 공간을 할당하는 것과 STACK의 값을 초기화한다.   Malloc을 사용해 STACK의 크기만큼 동적 메모리를 할당하고, 포인터 변수 stack을 사용해 count와 top을 각각 0과 NULL로 초기화한다.  
  
3. push  
	주어진 데이터 student는 배열 구조체이다. 첨자 i로 각 배열을 가리켜서 for문으로 데이터를 저장한다.   stack의 특성을 활용해 데이터를 역순으로 꺼내기 위해서, 0에서 4 순서로 총 5개의 데이터를 stack에 집어넣는다.   즉, push 함수가 5번 시행되고 난 후에는 밑에서 위의 순서로 student[0], student[1], student[2], student[3], student[4]가 들어있다.
  
4. pop  
	Pop함수를 이용해 꺼낸 데이터( &student[i] )를 저장할 변수 boss를 선언한다.   while문은 stack안에 남아있는 데이터가 없을 때 까지 실행한다. 처음 pop 실행 후, boss에는 &student[4]가 저장된다. 차례대로 boss->name 은 Park이고, 그 위의 데이터는 (boss + 1) ->name으로 한다.   Boss + 1은 &student[5]를 가리키는데 이때 이는 존재하지 않으므로 NULL을 가리킨다.   같은 방식으로 [0]까지 pop을 이용해 호출문으로 값을 불러낸다. 그렇게 하면 역순으로 자료배치가 완료된다.
