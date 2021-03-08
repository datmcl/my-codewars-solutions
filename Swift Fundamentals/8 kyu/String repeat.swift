/* Write a function called repeat_str which repeats the given string src exactly count times.

repeatStr(6, "I") // "IIIIII"
repeatStr(5, "Hello") // "HelloHelloHelloHelloHello"
*/

func repeatStr(_ n: Int, _ string: String) -> String {
    return String(repeating: string, count: n)
}
