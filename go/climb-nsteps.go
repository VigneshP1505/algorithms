package main

func CountWays(n int) int {
	if n == 0 || n == 1 {
		return 1
	}
	return CountWays(n-1) + CountWays(n-2)
}
