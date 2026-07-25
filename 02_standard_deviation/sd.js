var sd = ave = n = numerator_result = b = 0; 
var x = [];

n = Number(prompt("How many items ?"))

for (var i = 0; i < n; i++) {
    x[i] = Number(prompt("give me items x[" + i + "]"))
    ave = ave + x[i]
}

ave = ave / n

console.log(ave);

for (var j = 0; j < n; j++) {
    numerator_result += Math.pow(x[i] - ave, 2)
}

b = numerator_result / n

sd = Math.sqrt(b)

console.log(sd)