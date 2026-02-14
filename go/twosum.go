package main

func TwoSum(a []int, target int) []int {
	memo := make(map[int]int)
	for i, num := range a {
		complement := target - num
		if idx, ok := memo[complement]; ok {
			return []int{idx, i}
		}
		memo[num] = i
	}
	return nil
}
