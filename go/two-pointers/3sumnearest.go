import (
	"sort"
)

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}

func threeSumClosest(nums []int, target int) int {
	sort.Ints(nums)

	nearest := nums[0] + nums[1] + nums[2]

	for i := 0; i < len(nums)-2; i++ {
		left, right := i+1, len(nums)-1

		for left < right {
			sum := nums[i] + nums[left] + nums[right]

			if abs(sum-target) < abs(nearest-target) {
				nearest = sum
			}

			if sum == target {
				return sum
			} else if sum < target {
				left++
			} else {
				right--
			}
		}
	}

	return nearest
}