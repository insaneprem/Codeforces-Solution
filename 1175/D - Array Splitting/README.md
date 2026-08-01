<h2><a href="https://codeforces.com/contest/1175/problem/D" target="_blank" rel="noopener noreferrer">1175D — Array Splitting</a></h2>

| | |
|---|---|
| **Difficulty** | 1900 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1175D](https://codeforces.com/contest/1175/problem/D) |

## Topics
`greedy` `sortings`

---

## Problem Statement

<div class="header"><div class="title">D. Array Splitting</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a_1, a_2, \dots, a_n$$$ and an integer $$$k$$$.</p><p>You are asked to divide this array into $$$k$$$ non-empty consecutive subarrays. Every element in the array should be included in exactly one subarray. Let $$$f(i)$$$ be the index of subarray the $$$i$$$-th element belongs to. Subarrays are numbered from left to right and from $$$1$$$ to $$$k$$$.</p><p>Let the cost of division be equal to $$$\sum\limits_{i=1}^{n} (a_i \cdot f(i))$$$. For example, if $$$a = [1, -2, -3, 4, -5, 6, -7]$$$ and we divide it into $$$3$$$ subbarays in the following way: $$$[1, -2, -3], [4, -5], [6, -7]$$$, then the cost of division is equal to $$$1 \cdot 1 - 2 \cdot 1 - 3 \cdot 1 + 4 \cdot 2 - 5 \cdot 2 + 6 \cdot 3 - 7 \cdot 3 = -9$$$.</p><p>Calculate the maximum cost you can obtain by dividing the array $$$a$$$ into $$$k$$$ non-empty consecutive subarrays. </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le k \le n \le 3 \cdot 10^5$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$ |a_i| \le 10^6$$$). </p></div><div class="output-specification"><div class="section-title">Output</div><p>Print the maximum cost you can obtain by dividing the array $$$a$$$ into $$$k$$$ nonempty consecutive subarrays. </p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0011963960343101632" id="id006860810151830586" class="input-output-copier">Copy</div></div><pre id="id0011963960343101632">5 2
-1 -2 5 -4 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0033194996989196557" id="id009146536649364578" class="input-output-copier">Copy</div></div><pre id="id0033194996989196557">15
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015966578350148886" id="id0020190406437261788" class="input-output-copier">Copy</div></div><pre id="id0015966578350148886">7 6
-3 0 -1 -2 -2 -4 -1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004657127863246626" id="id0021235076874620973" class="input-output-copier">Copy</div></div><pre id="id004657127863246626">-45
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0073571577654414" id="id006619354774985252" class="input-output-copier">Copy</div></div><pre id="id0073571577654414">4 1
3 -1 6 0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0017310657571115395" id="id007374387306840505" class="input-output-copier">Copy</div></div><pre id="id0017310657571115395">8
</pre></div></div></div>