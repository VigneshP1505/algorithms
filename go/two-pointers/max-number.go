package twopointers

// max number formed from a slice maintaing the relative order
func _maxNumber(a []int, k int) int {
	stack := []int{}
	for i := 0; i < len(a); i++ {
		remaining := len(a) - i - 1
		for len(stack) > 0 && stack[len(stack)-1] < a[i] && len(stack)+remaining >= k {
			stack = stack[:len(stack)-1]
		}
		if len(stack) < k {
			stack = append(stack, a[i])
		}
	}
	number := 0
	for _, val := range stack {
		number = number*10 + val
	}
	return number
}
