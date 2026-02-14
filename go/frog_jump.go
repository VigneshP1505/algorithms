package main

import "math"

func MinFrogEnergy(a []int, n int) int {
	if n == 0 {
		return 0
	}
	left := MinFrogEnergy(a, n-1) + int(math.Abs(float64(a[n])-float64(a[n-1])))
	right := math.MaxInt
	if n > 1 {
		right = MinFrogEnergy(a, n-2) + int(math.Abs(float64(a[n])-float64(a[n-2])))
	}
	return min(left, right)
}

func MinFrogEnergyDp(a []int) int {
	n := len(a)
	dp := make([]int, n)
	dp[0] = 0
	for i := 1; i < n; i++ {
		left := dp[i-1] + int(math.Abs(float64(a[n])-float64(a[n-1])))
		right := math.MaxInt
		if i > 1 {
			right = dp[i-2] + int(math.Abs(float64(a[n])-float64(a[n-1])))
		}
		dp[i] = min(left, right)
	}
	return dp[n-1]
}
