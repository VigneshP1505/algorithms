package main

func LongestPalindrome(a string) int {
	memo := make(map[rune]int)
	for _, ch := range a {
		memo[ch] += 1
	}

	length := 0
	hasOdd := false
	for _, count := range memo {
		if count%2 == 0 {
			length += count
		} else {
			length += count - 1
			hasOdd = true
		}
	}

	if hasOdd {
		length++
	}

	return length
}
