package main

import "testing"

func TestAdd(t *testing.T) {

	got := Add(4, 6)
	want := 10
	if got != want {
		t.Errorf("got %q, wanted %q", got, want)
	}
}

func TestMult(t *testing.T) {
	got := Mult(4, 6)
	want := 24
	if got != want {
		t.Errorf("got %q, wanted %q", got, want)
	}
}
