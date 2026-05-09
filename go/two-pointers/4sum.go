package twopointers

import (
	"math"
	"sort"
)

func _4Sum(nums []int, target int) [][]int {
	left := 0
	right := len(nums) - 1
	res := [][]int{}
	sort.Ints(nums)
	for left < right {
		_p1, _p2 := left+1, right-1
		sum := math.MinInt64
		for _p1 < _p2 {
			sum = nums[left] + nums[right] + nums[_p1] + nums[_p2]
			if sum == target {
				res = append(res, []int{nums[left], nums[right], nums[_p1], nums[_p2]})
			} else if sum < target {
				_p1++
			} else {
				_p2--
			}
		}
		left++
		right--
	}
	return res
}
