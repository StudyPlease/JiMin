# JiMin

<h1>지민 자료구조 복습</h1>

<h2>문제 풀이 사이트</h2>
백준 : https://www.acmicpc.net/

프로그래머스 : https://programmers.co.kr/

++ solved.ac(백준과 연동되어 티어 측정) : https://solved.ac/

<h2>Repository 사용법</h2>    
<b>본인 이름으로 된 Repository</b>에서 
해당 주차의 branch를 생성하여 해당 주차의 branch에만 소스코드를 올릴 수 있도록 합니다.  


<details>
  <summary><h3>예시</h3></summary>
  
  <img src="https://user-images.githubusercontent.com/81570533/175817395-520597b9-8ded-4f18-9553-03c77c1606e0.png">
  <em><strong>예시를 위해 0week로 시작했고, 2022-06-27부터는 1week 시작!!!!!!!!!!!</strong></em>
</details>


<br><hr><br>

- **git init** -> "해당 폴더를 git으로 버전관리 하겠다." 라는 뜻의 명령어. .git파일이 버전을 관리하는 파일로 생성된다. 
- **git branch 브랜치명** -> 브랜치를 생성한다. 브랜치명은 해당주자+week. ex) git branch 1week
- **git checkout 브랜치명** -> 해당 브랜치로 이동. 처음에는 모두 디폴트값으로 master브랜치에 있을 것임. 반드시 해당 주차 브랜치로 이동 후 작업하기!!!!
- **git add 파일명** -> 해당 파일을 staging area로 올린다. <strong>꼭 다른 파일 말고 cpp, py파일만 올리기!!!</strong> ex) git add 1406.cpp 
- **git commit -m "백준 문제번호 문제이름 [난이도]"** -> 버전을 만든다. ex) git commit -m "백준 1158 요세푸스 문제 [실버2]" 
- **git branch** -> push 하기 전에 마지막으로 branch 확인. 현재 작업중인 branch 출력된다. 맞으면 넘어가기
- **git push origin 브랜치명** : 원격저장소에 push한다. ex) git push origin 1week
