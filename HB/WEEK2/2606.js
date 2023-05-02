// 1번 노드부터 출발하는 경우 , index 0은 사용하지 않도록해 직관적으로 볼 수 있게 하면 좋다.
let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');
let n = Number(input[0]); // 정점의 개수(N)
let m = Number(input[1]); // 간선의 개수(M)

let graph = []; // 그래프 정보 입력

// 정점의 갯수 만큼의 빈 배열을 만들어준다.
for (let i = 1; i <= n; i++) {
  graph[i] = [];
}
for (let i = 2; i <= m + 1; i++) {
  // 간선의 갯수만큼 x,y형태로 반복됨
  // 따라서 스프레드 문법으로 x, y에 할당
  let [x, y] = input[i].split(' ').map(Number);
  // 각 정점에 따라 연결된 정점 push (양방향 연결)
  graph[x].push(y);
  graph[y].push(x);
}

let cnt = 0;
let visited = new Array(n + 1).fill(false);
function dfs(x) {
  // 깊이 우선 탐색(DFS) 수행
  visited[x] = true; // 현재 노드를 방문 처리
  cnt++; // dfs로 도달 가능한 수를 구함
  for (y of graph[x]) {
    // 현재 노드와 연결된 다른 노드(인접노드)를 재귀적으로 방문
    if (!visited[y]) dfs(y);
  }
}
dfs(1);

//dfs 재귀가 끝났을 때 1번을 통해 바이러스가 퍼진 갯수가 나오게 된다.
console.log(cnt - 1);
