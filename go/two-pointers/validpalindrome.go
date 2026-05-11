package twopointers

func validPalindrome(s string) bool {
	p1 := 0
	p2 := len(s) - 1

	for p1 < p2 {

		c1 := s[p1]
		c2 := s[p2]

		if !isAlphaNumeric(c1) {
			p1++
			continue
		}

		if !isAlphaNumeric(c2) {
			p2--
			continue
		}

		if toLower(c1) != toLower(c2) {
			return false
		}

		p1++
		p2--
	}

	return true
}

func isAlphaNumeric(c byte) bool {
	return (c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9')
}

func toLower(c byte) byte {
	if c >= 'A' && c <= 'Z' {
		return c + 32
	}
	return c
}
