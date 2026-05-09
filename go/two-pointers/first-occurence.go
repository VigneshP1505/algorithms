func _firstOccurrence(val string, needle string) int {
	_p1 := 0
	_p2 := 0
	idx := -1

	for _p1 < len(val) && _p2 < len(needle) {
		if val[_p1] != needle[_p2] {
			if _p2 > 0 {
				_p1 = idx
			}
			_p2 = 0
			idx = -1
		} else {
			if _p2 == 0 {
				idx = _p1
			}
			_p2++
		}
		_p1++
	}
	if _p2 == len(needle) {
		return idx
	}
	return -1
} 
