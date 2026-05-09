func _removeElement(nums []int, val int) int {
	_p1 := 0
	_p2 := 0
	for _p2 < len(nums) {
		if nums[_p2] != val {
			nums[_p1] = nums[_p2]
			_p1++
		}
		_p2++
	}
	return _p1
}