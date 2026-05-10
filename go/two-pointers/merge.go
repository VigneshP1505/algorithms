func _merge(nums1 []int, nums2 []int) []int {
	p1, p2, p3 := 0, 0, 0

	res := make([]int, m+n)

	for p1 < m && p2 < n {
		if nums1[p1] <= nums2[p2] {
			res[p3] = nums1[p1]
			p1++
		} else {
			res[p3] = nums2[p2]
			p2++
		}
		p3++
	}

	for p1 < m {
		res[p3] = nums1[p1]
		p1++
		p3++
	}

	for p2 < n {
		res[p3] = nums2[p2]
		p2++
		p3++
	}

	for i := 0; i < m+n; i++ {
		nums1[i] = res[i]
	}
}