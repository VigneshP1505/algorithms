type ListNode struct {
	Val  int
	Next *ListNode
}

func partition(head *ListNode, x int) *ListNode {
	left := &ListNode{}
	right := &ListNode{}

	leftTail := left
	rightTail := right

	curr := head

	for curr != nil {

		node := &ListNode{Val: curr.Val}

		if curr.Val < x {
			leftTail.Next = node
			leftTail = node
		} else {
			rightTail.Next = node
			rightTail = node
		}

		curr = curr.Next
	}

	leftTail.Next = right.Next

	return left.Next
}