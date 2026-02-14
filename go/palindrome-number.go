package main

func PalindromeNumber(a int) bool {
	if a < 0 || a == 0 {
		return false
	}
	b := a
	c := 0
	for a > 0 {
		digit := a % 10
		c = c*10 + digit
		a /= 10
	}
	return b == c
}
