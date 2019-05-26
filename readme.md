### Note: this example has been updated for Swift 5

#### This is an example on how to use mach_override in a Swift Application.
More explanations at this post: http://www.lombax.it/?p=321

For details, look inside `main.swift`, there are:

2 plain function
a class called `TestClass` with 2 instance methods

Before calling the two functions, I call

    override()
    override_instance_method()

that are declared inside the `override.c` file.

These functions replaces the implementation of:

- the plain function `original()` with `exchanged()`
- the instance method of `TestClass` : `original()` with `exchanged()`

to see in action, simply execute the app.

Comment

    //override()
    //override_instance_method()

to come back to the original implementation
