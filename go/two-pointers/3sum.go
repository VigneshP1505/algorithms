import "sort"

func threeSum(nums []int) [][]int {
	sort.Ints(nums)
	res := [][]int{}
	for i = 0; i < len(nums); i++ {
		left, right := i+1, len(nums)-1
		for left < right {
			sum := nums[i] + nums[left] + nums[right]
			if sum == 0 {
				res = append(res, []int{nums[i], nums[left], nums[right]})
				left++
				right--
				for left < right && nums[left] == num[left-1] {
					continue
				}
				for left < right && nums[right] == nums[right+1] {
					continue
				}
			} else if sum < 0 {
				left++
			} else {
				right--
			}
		}
	}
	return res
}