다음 사항은 문제에 정확하게 기술되어 있지 않아 직접 정의하였음

1. 허락되지 않은 character가 들어온 경우 모두 illid error로 처리
      ex) aa&aa: 잘못된 문자 &를 포함한 identifier
      
2. illsp error는 구분자가 연속하여 들어오는 경우라고 정의하였음
      ex) ab?!?cd: ?!?에서 illsp error 출력

3. identifier에서 발생할 수 있는 에러는 3가지(longid, swdigit, illid), 에러가 중복하여 발생하여도 에러 우선순위가 높은 한 가지만을 출력
      id관련 에러 우선순위: longid > illid > swdigit
      ex) aaaaaaaaaaaaaaaaaa#: longid error
      ex) 1111111111111111aaa: longid error
      ex) 111#: illid error
