package twopointers

func _rotateArray(nums []int, k int) []int {
	_rotateIndex := k % len(nums)
	_reverse(nums, 0, len(nums)-1)
	_reverse(nums, 0, _rotateIndex-1)
	_reverse(nums, _rotateIndex, len(nums)-1)
	return nums
}

func _reverse(nums []int, left int, right int) {
	for left < right {
		nums[left], nums[right] = nums[right], nums[left]
		left++
		right--
	}
}
