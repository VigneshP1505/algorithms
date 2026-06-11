package main

import (
	"fmt"
)

func bfs(graph map[int][]int, start int) {
	visited := make(map[int]bool)
	queue := []int{start}

	visited[start] = true
	for len(queue) > 0 {
		node := queue[0]
		queue = queue[1:]
		fmt.Println(node)

		//visit neighbors
		for _, neighbor := range graph[node] {
			if !visited[neighbor] {
				visited[neighbor] = true
				queue = append(queue, neighbor)
			}
		}
	}
}

func dfs(graph map[int][]int, node int, visited map[int]bool) {
	if visited[node] {
		return
	}
	visited[node] = true
	fmt.Println(node)
	for _, neighbor := range graph[node] {
		if !visited[neighbor] {
			dfs(graph, neighbor, visited)
		}
	}
}

// nodes

type Node struct {
	data  int
	left  *Node
	right *Node
}

func _bfs(root *Node) {
	if root == nil {
		return
	}
	queue := []*Node{root}
	for len(queue) > 0 {
		node := queue[0]
		queue = queue[1:]
		fmt.Println(node.data)
		if node.left != nil {
			queue = append(queue, node.left)
		}
		if node.right != nil {
			queue = append(queue, node.right)
		}
	}
}

func _dfs(root *Node) {
	if root == nil {
		return
	}
	fmt.Println(root.data)
	_dfs(root.left)
	_dfs(root.right)
}

func _targetSum(root *Node, target int, sum int) bool {
	if root == nil {
		return false
	}
	sum += root.data
	if root.left == nil && root.right == nil {
		return sum == target
	}
	return _targetSum(root.left, target, sum) || _targetSum(root.right, target, sum)
}

func main() {
	graph := map[int][]int{
		0: {1, 2},
		1: {3, 4},
		2: {5},
		3: {},
		4: {},
		5: {},
	}
	dfs(graph, 0, make(map[int]bool))
}
