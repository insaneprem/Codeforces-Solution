<h2><a href="https://codeforces.com/contest/2043/problem/A" target="_blank" rel="noopener noreferrer">2043A — Coin Transformation</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2043A](https://codeforces.com/contest/2043/problem/A) |

## Topics
`brute force` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Coin Transformation</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Initially, you have a coin with value $$$n$$$. You can perform the following operation any number of times (possibly zero):</p><ul> <li> transform one coin with value $$$x$$$, where $$$x$$$ is <span class="tex-font-style-bf">greater than $$$3$$$</span> ($$$x \gt 3$$$), into two coins with value $$$\lfloor \frac{x}{4} \rfloor$$$. </li></ul><p>What is the maximum number of coins you can have after performing this operation any number of times?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>Each test case consists of one line containing one integer $$$n$$$ ($$$1 \le n \le 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the maximum number of coins you can have after performing the operation any number of times.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0008405787944540788" id="id002724886478573797" class="input-output-copier">Copy</div></div><pre id="id0008405787944540788"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">5</div><div class="test-example-line test-example-line-odd test-example-line-3">16</div><div class="test-example-line test-example-line-even test-example-line-4">1000000000000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00037664850766796265" id="id004504222165283108" class="input-output-copier">Copy</div></div><pre id="id00037664850766796265">1
2
4
536870912
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, you have a coin of value $$$1$$$, and you can't do anything with it. So, the answer is $$$1$$$.</p><p>In the second example, you can transform a coin of value $$$5$$$ into two coins with value $$$1$$$.</p><p>In the third example, you can transform a coin of value $$$16$$$ into two coins with value $$$4$$$. Each of the resulting coins can be transformed into two coins with value $$$1$$$.</p></div>