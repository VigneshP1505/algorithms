func removeDuplicates(nums []int) int {
	_p1 := 0
	_p2 := 1
	for _p2 < len(nums) {
		if nums[_p1] != nums[_p2] {
			_p1++
			nums[_p1] = nums[_p2]
		}
		_p2++
	}
	return _p1 + 1
}