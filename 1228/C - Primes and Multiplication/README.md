<h2><a href="https://codeforces.com/contest/1228/problem/C" target="_blank" rel="noopener noreferrer">1228C — Primes and Multiplication</a></h2>

| | |
|---|---|
| **Difficulty** | 1700 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1228C](https://codeforces.com/contest/1228/problem/C) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Primes and Multiplication</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Let's introduce some definitions that will be needed later.</p><p>Let $$$prime(x)$$$ be the set of prime divisors of $$$x$$$. For example, $$$prime(140) = \{ 2, 5, 7 \}$$$, $$$prime(169) = \{ 13 \}$$$.</p><p>Let $$$g(x, p)$$$ be the maximum possible integer $$$p^k$$$ where $$$k$$$ is an integer such that $$$x$$$ is divisible by $$$p^k$$$. For example:</p><ul> <li> $$$g(45, 3) = 9$$$ ($$$45$$$ is divisible by $$$3^2=9$$$ but not divisible by $$$3^3=27$$$), </li><li> $$$g(63, 7) = 7$$$ ($$$63$$$ is divisible by $$$7^1=7$$$ but not divisible by $$$7^2=49$$$). </li></ul><p>Let $$$f(x, y)$$$ be the product of $$$g(y, p)$$$ for all $$$p$$$ in $$$prime(x)$$$. For example:</p><ul> <li> $$$f(30, 70) = g(70, 2) \cdot g(70, 3) \cdot g(70, 5) = 2^1 \cdot 3^0 \cdot 5^1 = 10$$$, </li><li> $$$f(525, 63) = g(63, 3) \cdot g(63, 5) \cdot g(63, 7) = 3^2 \cdot 5^0 \cdot 7^1 = 63$$$. </li></ul><p>You have integers $$$x$$$ and $$$n$$$. Calculate $$$f(x, 1) \cdot f(x, 2) \cdot \ldots \cdot f(x, n) \bmod{(10^{9} + 7)}$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains integers $$$x$$$ and $$$n$$$ ($$$2 \le x \le 10^{9}$$$, $$$1 \le n \le 10^{18}$$$) — the numbers used in formula.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the answer.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00058902546205547024" id="id0033553062776039777" class="input-output-copier">Copy</div></div><pre id="id00058902546205547024">10 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006427547589813031" id="id0021550630660399606" class="input-output-copier">Copy</div></div><pre id="id006427547589813031">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0036069351870909916" id="id0049874848503075997" class="input-output-copier">Copy</div></div><pre id="id0036069351870909916">20190929 1605
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006043324306755147" id="id006385356443325173" class="input-output-copier">Copy</div></div><pre id="id006043324306755147">363165664
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0041355243251195983" id="id009893159626187638" class="input-output-copier">Copy</div></div><pre id="id0041355243251195983">947 987654321987654321
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003241677057715473" id="id007785570961749562" class="input-output-copier">Copy</div></div><pre id="id003241677057715473">593574252
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, $$$f(10, 1) = g(1, 2) \cdot g(1, 5) = 1$$$, $$$f(10, 2) = g(2, 2) \cdot g(2, 5) = 2$$$.</p><p>In the second example, actual value of formula is approximately $$$1.597 \cdot 10^{171}$$$. Make sure you print the answer modulo $$$(10^{9} + 7)$$$.</p><p>In the third example, be careful about overflow issue.</p></div>