<h2><a href="https://codeforces.com/contest/2090/problem/D" target="_blank" rel="noopener noreferrer">2090D — Simple Permutation</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2090D](https://codeforces.com/contest/2090/problem/D) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">D. Simple Permutation</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Given an integer $$$n$$$. Construct a permutation $$$p_1, p_2, \ldots, p_n$$$ of length $$$n$$$ that satisfies the following property:</p><p>For $$$1 \le i \le n$$$, define $$$c_i = \lceil \frac{p_1+p_2+\ldots +p_i}{i} \rceil$$$, then among $$$c_1,c_2,\ldots,c_n$$$ there must be at least $$$\lfloor \frac{n}{3} \rfloor - 1$$$ prime numbers.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10$$$) — the number of test cases. The description of the test cases follows.</p><p>In a single line of each test case, there is a single integer $$$n$$$ ($$$2 \le n \le 10^5)$$$ — the size of the permutation.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the permutation $$$p_1,p_2,\ldots,p_n$$$ of length $$$n$$$ that satisfies the condition. It is guaranteed that such a permutation always exists.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00199408613911494" id="id0023391197037346179" class="input-output-copier">Copy</div></div><pre id="id00199408613911494"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id003394821830735858" id="id00411429883047166" class="input-output-copier">Copy</div></div><pre id="id003394821830735858">2 1
2 1 3
2 1 3 4 5
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$c_1 = \lceil \frac{2}{1} \rceil = 2$$$, $$$c_2 = \lceil \frac{2+1}{2} \rceil = 2$$$. Both are prime numbers.</p><p>In the third test case, $$$c_1 = \lceil \frac{2}{1} \rceil = 2$$$, $$$c_2 = \lceil \frac{3}{2} \rceil = 2$$$, $$$c_3 = \lceil \frac{6}{3} \rceil = 2$$$, $$$c_4 = \lceil \frac{10}{4} \rceil = 3$$$, $$$c_5 = \lceil \frac{15}{5} \rceil = 3$$$. All these numbers are prime.</p></div>