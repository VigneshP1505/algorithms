package twopointers

func _circularArray(nums []int) bool {
	_map := make(map[int]bool)
	for i := 0; i < len(nums); i++ {
		if _cycleExists(i, _map, nums) {
			return true
		}
	}
	return false
}

func _cycleExists(index int, _map map[int]bool, nums []int) bool {
	if _map[index] {
		return _map[index]
	}
	_map[index] = true
	n := len(nums)
	next := ((index+nums[index])%n + n) % n
	if next != index && nums[next]*nums[index] > 0 {
		if _cycleExists(next, _map, nums) {
			return true
		}
	}
	_map[index] = false
	return false
}

//key concepts:
//1. to find the index of the jump
// next:=math.Mod(float64(i+jump),float64(len(nums)))
