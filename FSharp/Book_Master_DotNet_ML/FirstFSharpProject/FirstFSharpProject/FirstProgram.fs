// Learn more about F# at http://fsharp.org
// See the 'F# Tutorial' project for more help.
open System

[<EntryPoint>]
let main argv = 
    printfn "%A" argv

    // Printing a line to the console
    let x = "Hello World"
    Console.WriteLine(x)

    // SECTION: Handling arrays 
    let ints = [|1;2;3;4;5;6;|] // Creating

    // We can "pipe" the arrays into other functions
    let summedValue = ints |> Array.sum
    let multiplied = ints |> Array.map (fun i -> i * 2)

    
    let y = Console.ReadKey() // Reading a line from the console
    0 // return an integer exit code

