package twopointers

func _trap(height []int) int {
	_p1 := 0
	_p2 := len(height) - 1
	leftMax := 0
	rightMax := 0
	totalWater := 0
	for _p1 < _p2 {
		leftMax = max(leftMax, height[_p1])
		rightMax = max(rightMax, height[_p2])
		if leftMax < rightMax {
			totalWater += leftMax - height[_p1]
			_p1++
		} else {
			totalWater += rightMax - height[_p2]
			_p2--
		}
	}
	return totalWater
}
