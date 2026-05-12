package twopointers

func _twosum(nums []int, target int) []int {
	_p1 := 0
	_p2 := len(nums) - 1
	var sum int
	for _p1 < _p2 {
		sum = nums[_p1] + nums[_p2]
		if sum > target {
			_p2--
		} else if sum < target {
			_p1++
		} else {
			return []int{_p1 + 1, _p2 + 1}
		}
	}
	return nil
}
