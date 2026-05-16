package backtracking

import "fmt"

func _strPermutations(s string) {
	_permutate([]byte(s), 0)
}

func _permutate(chars []byte, start int) {
	if start == len(chars) {
		fmt.Println(string(chars))
		return
	}
	for i := start; i < len(chars); i++ {
		chars[start], chars[i] = chars[i], chars[start]
		_permutate(chars, start+1)
		chars[start], chars[i] = chars[i], chars[start]
	}
}
