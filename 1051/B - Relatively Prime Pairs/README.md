<h2><a href="https://codeforces.com/contest/1051/problem/B" target="_blank" rel="noopener noreferrer">1051B — Relatively Prime Pairs</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1051B](https://codeforces.com/contest/1051/problem/B) |

## Topics
`greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Relatively Prime Pairs</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a set of all integers from $$$l$$$ to $$$r$$$ inclusive, $$$l  \lt  r$$$, $$$(r - l + 1) \le 3 \cdot 10^5$$$ and $$$(r - l)$$$ is always odd.</p><p>You want to split these numbers into exactly $$$\frac{r - l + 1}{2}$$$ pairs in such a way that for each pair $$$(i, j)$$$ the greatest common divisor of $$$i$$$ and $$$j$$$ is equal to $$$1$$$. Each number should appear in exactly one of the pairs.</p><p>Print the resulting pairs or output that no solution exists. If there are multiple solutions, print any of them.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The only line contains two integers $$$l$$$ and $$$r$$$ ($$$1 \le l  \lt  r \le 10^{18}$$$, $$$r - l + 1 \le 3 \cdot 10^5$$$, $$$(r - l)$$$ is odd).</p></div><div class="output-specification"><div class="section-title">Output</div><p>If any solution exists, print "<span class="tex-font-style-tt">YES</span>" in the first line. Each of the next $$$\frac{r - l + 1}{2}$$$ lines should contain some pair of integers. <span class="tex-font-style-it">GCD</span> of numbers in each pair should be equal to $$$1$$$. All $$$(r - l + 1)$$$ numbers should be pairwise distinct and should have values from $$$l$$$ to $$$r$$$ inclusive.</p><p>If there are multiple solutions, print any of them.</p><p>If there exists no solution, print "<span class="tex-font-style-tt">NO</span>".</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009033054233699542" id="id009356232137750398" class="input-output-copier">Copy</div></div><pre id="id009033054233699542">1 8<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0005304122493354524" id="id007414901477990363" class="input-output-copier">Copy</div></div><pre id="id0005304122493354524">YES<br>2 7<br>4 1<br>3 8<br>6 5<br></pre></div></div></div>