func _version(s1 string, s2 string) int {
	i, j := 0, 0
	m, n := len(s1), len(s2)

	for i < m || j < n {

		num1 := 0
		num2 := 0

		for i < m && s1[i] != '.' {
			num1 = num1*10 + int(s1[i]-'0')
			i++
		}

		for j < n && s2[j] != '.' {
			num2 = num2*10 + int(s2[j]-'0')
			j++
		}

		if num1 > num2 {
			return 1
		}

		if num1 < num2 {
			return -1
		}

		i++
		j++
	}

	return 0
}