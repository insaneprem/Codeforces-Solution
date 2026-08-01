<h2><a href="https://codeforces.com/contest/1285/problem/C" target="_blank" rel="noopener noreferrer">1285C — Fadi and LCM</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1285C](https://codeforces.com/contest/1285/problem/C) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Fadi and LCM</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Today, Osama gave Fadi an integer $$$X$$$, and Fadi was wondering about the minimum possible value of $$$max(a, b)$$$ such that $$$LCM(a, b)$$$ equals $$$X$$$. Both $$$a$$$ and $$$b$$$ should be positive integers.</p><p>$$$LCM(a, b)$$$ is the smallest positive integer that is divisible by both $$$a$$$ and $$$b$$$. For example, $$$LCM(6, 8) = 24$$$, $$$LCM(4, 12) = 12$$$, $$$LCM(2, 3) = 6$$$.</p><p>Of course, Fadi immediately knew the answer. Can you be just like Fadi and find any such pair?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only line contains an integer $$$X$$$ ($$$1 \le X \le 10^{12}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two positive integers, $$$a$$$ and $$$b$$$, such that the value of $$$max(a, b)$$$ is minimum possible and $$$LCM(a, b)$$$ equals $$$X$$$. If there are several possible such pairs, you can print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008902768312114758" id="id0026447621149360545" class="input-output-copier">Copy</div></div><pre id="id008902768312114758">2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0021489706628031613" id="id00194494496770784" class="input-output-copier">Copy</div></div><pre id="id0021489706628031613">1 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007279672809251471" id="id006254987322760943" class="input-output-copier">Copy</div></div><pre id="id007279672809251471">6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007420316604684135" id="id009462213694161733" class="input-output-copier">Copy</div></div><pre id="id007420316604684135">2 3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0043209097019547527" id="id001998207684287332" class="input-output-copier">Copy</div></div><pre id="id0043209097019547527">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00538445567420134" id="id003101115091972064" class="input-output-copier">Copy</div></div><pre id="id00538445567420134">1 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004410923821887659" id="id0012733919672715932" class="input-output-copier">Copy</div></div><pre id="id004410923821887659">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008502725959992298" id="id00792154655669967" class="input-output-copier">Copy</div></div><pre id="id008502725959992298">1 1
</pre></div></div></div>