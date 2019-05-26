//
//  main.swift
//  SwiftMachOverride
//
//  Created by Fabio Lombardo on 26/05/2019.
//  Copyright © 2019 Fabio Lombardo. All rights reserved.
//

import Foundation

func original() {
    print("original function");
}

func exchanged() {
    print("exchanged function");
}

class TestClass {
    func original() {
        print("original class function");
    }
    
    func exchanged() {
        print("exchanged class function");
    }
}


// -- CODE
override()
override_instance_method()

original()
let a = TestClass()
a.original()
