package oops

import "fmt"

// no classes - behaviour is determined by attached methods
type User struct {
	Name string
	Age  int
}

func (u User) greet() string {
	return "hello" + u.Name
}

func (u User) isLegalAge() bool {
	return u.Age > 18
}

// no encapsulation
type Account struct {
	balance int
}

func (a *Account) deposit(amount int) {
	a.balance += amount
}

// no inheritance - use composition
type Person struct {
	Name string
}

func (p Person) Speak() {
	fmt.Println("Hi, I'm", p.Name)
}

type Employee struct {
	Person
	Role string
}

// no polymorphism - interfaces are implicit - no implements keyword. Any type that has Speak automatically satisfies it
type Speaker interface {
	Speak() string
}

type Dog struct{}

func (d Dog) Speak() string {
	return "woof"
}

type Duck struct{}

func (d Duck) Speak() string {
	return "quack"
}

func makeSpeak(s Speaker) {
	s.Speak()
}

//both Dog and Duck can be passed here

type Employees interface {
	WorkHours() int64
	Salary() float64
}

type FT struct{}
type Contractor struct{}

func (f *FT) WorkHours() int64 {
	return 1
}

func (f *FT) Salary() float64 {
	return 1000000
}

func (c *Contractor) WorkHours() int64 {
	return 5
}

func (c *Contractor) Salary() float64 {
	return 1000000
}
